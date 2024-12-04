#include "iostream"
using namespace std;
class Child; // ǰ������
/* -------------------------------------------------------------------------- */
// ĸ���ࣺ���۲���
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
            cout<<child->getName()<<"����۲��߶���"<<endl;
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
            cout<<child->getName()<<"�˳��۲��߶���"<<endl;
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
    myMon->AddChild(this);//���Լ�����۲��߶���
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
    cout << name << "�յ���Ϣ��" << action << endl;
    if(action=="�����ڿ���")
    {
        cout<<name<<"�رյ��ԣ��������ѧϰģʽ"<<endl;
    }
    else if(action=="���������")
    {
        cout<<name<<"������Ϸģʽ"<<endl;
    }
    else
    {
        cout<<name<<"ʲô������"<<endl;
    }
}
/* -------------------------------------------------------------------------- */
int main()
{
    // ����ĸ�׶���
    Mother *mother = new Mother();
    
    // �����������Ӷ��󣬲�ָ�����ǵ�ĸ��
    Child *child1 = new Child("С��", mother);
    Child *child2 = new Child("С��", mother);
    Child *child3 = new Child("С��", mother);
    
    // ĸ��֪ͨ�����������ڿ���
    mother->Notify("�����ڿ���");
    
    // ĸ��֪ͨ���������Ѿ�������
    mother->Notify("���������");
    
    // ĸ��ɾ���Ե��������ӵ����ã�ģ�⺢�ӱ��Ƴ����龰
    mother->DelChild(child3);

    return 0;
}
