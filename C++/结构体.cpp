#include<iostream>
using namespace std;
typedef struct books
{
    char name[30];
    float price;
    int num;
    void print()
    {
        cout<<"������"<<name<<"  ";
        cout<<"�۸�"<<price<<"  ";
        cout<<"������"<<num<<"  ";
    }
}Book;
int main()
{//��ӡͼ����Ϣ
    Book books[10]={{"C ���Գ������",59.8,10},{"C++ �������",69.8,10},{"���ݽṹ",79.8,10},{"���ݿ�ԭ��",89.8,10},{"���������",99.8,10}};
    cout<<"ԭ����"<<endl;
    for(int i=0;i<5;i++)
    {
        books[i].print();
    }
    cout<<endl;
    //���ڵ�һ������֮�����һ������
    Book book1={"��������ԭ��",69.8,10};
    cout<<"���������"<<endl;
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
    //��ɾ���ڶ�����
    cout<<"ɾ���ڶ������"<<endl;
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


