#include "iostream"
using namespace std;
class Child; // 前置声明
/* -------------------------------------------------------------------------- */
// 母亲类：被观察者
class Mother
{
public:
    Mother();
    ~Mother();
    void AddChild(Child *child);
    void DelChild(Child *child);
    void Notify(string action);

private:
    Child *list[10];
};
/* -------------------------------------------------------------------------- */
class Child
{
public:
    Child(string name, Mother *m);
    ~Child();
    string getName();
    void upData(string action);

private:
    Mother *myMon;
    string name;
};
/* -------------------------------------------------------------------------- */
Mother::Mother()
{
    for (int i = 0; i < 10; i++)

        list[i] = NULL;
}
Mother::~Mother()
{
}
void Mother::AddChild(Child *child)
{
    for (int i = 0; i < 10; i++)
    {
        if (list[i] == NULL)
        {
            list[i] = child;
            cout<<child->getName()<<"加入观察者队列"<<endl;
            break;
        }
    }
}
void Mother::DelChild(Child *child)
{
    for (int i = 0; i < 10; i++)
    {
        if (list[i] == child)
        {
            list[i] = NULL;
            cout<<child->getName()<<"退出观察者队列"<<endl;
            break;
        }
    }
}
void Mother::Notify(string action)
{
    for (int i = 0; i < 10; i++)
    {
        if (list[i] != NULL)
        {
            list[i]->upData(action);
        }
    }
}
/* -------------------------------------------------------------------------- */
Child::Child(string name, Mother *m)
{
    this->name = name;
    this->myMon = m;
    myMon->AddChild(this);//将自己加入观察者队列
}
Child::~Child()
{
    myMon->DelChild(this);
}
string Child::getName()
{
    return name;
}
void Child::upData(string action)
{
    cout << name << "收到消息：" << action << endl;
    if(action=="妈妈在开门")
    {
        cout<<name<<"关闭电脑，开启疯狂学习模式"<<endl;
    }
    else if(action=="妈妈出门了")
    {
        cout<<name<<"开启游戏模式"<<endl;
    }
    else
    {
        cout<<name<<"什么都不做"<<endl;
    }
}
/* -------------------------------------------------------------------------- */
int main()
{
    // 创建母亲对象
    Mother *mother = new Mother();
    
    // 创建三个孩子对象，并指定他们的母亲
    Child *child1 = new Child("小明", mother);
    Child *child2 = new Child("小红", mother);
    Child *child3 = new Child("小刚", mother);
    
    // 母亲通知孩子们她正在开门
    mother->Notify("妈妈在开门");
    
    // 母亲通知孩子们她已经出门了
    mother->Notify("妈妈出门了");
    
    // 母亲删除对第三个孩子的引用，模拟孩子被移除的情景
    mother->DelChild(child3);

    return 0;
}
