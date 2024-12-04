#include<iostream>
using namespace std;
typedef struct books
{
    char name[30];
    float price;
    int num;
    void print()
    {
        cout<<"书名："<<name<<"  ";
        cout<<"价格："<<price<<"  ";
        cout<<"数量："<<num<<"  ";
    }
}Book;
int main()
{//打印图书信息
    Book books[10]={{"C 语言程序设计",59.8,10},{"C++ 程序设计",69.8,10},{"数据结构",79.8,10},{"数据库原理",89.8,10},{"计算机网络",99.8,10}};
    cout<<"原书有"<<endl;
    for(int i=0;i<5;i++)
    {
        books[i].print();
    }
    cout<<endl;
    //若在第一二本书之间插入一本新书
    Book book1={"计算机组成原理",69.8,10};
    cout<<"插入新书后"<<endl;
    for(int i=9;i>1;i--)
    {
        books[i]=books[i-1];
    }
    books[1]=book1;
    for(int i=0;i<6;i++)
    {
        books[i].print();
    }
    cout<<endl;
    //若删除第二本书
    cout<<"删除第二本书后"<<endl;
    for(int i=1;i<9;i++)
    {
        books[i]=books[i+1];
    }
    for(int i=0;i<5;i++)
    {
        books[i].print();
    }
    return 0;
}


