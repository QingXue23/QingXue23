#include <iostream>
using namespace std;
class Book
{
    public:
    string name;
    int price;
    int num;
   void setbook(string name,int price,int num)
    {
        this->name=name;
        this->price=price;
        this->num=num;
    }
    void print()
    {
        cout<<"书名："<<name<<endl;
        cout<<"价格："<<price<<endl;
        cout<<"数量："<<num<<endl;
    }
};
int main()
{Book book;
cout<<"请输入书名"<<endl;
string name;
cin>>name;
cout<<"请输入价格"<<endl;
int price;
cin>>price;
cout<<"请输入数量"<<endl;
int num;
cin>>num;
book.setbook(name,price,num);
book.print();
return 0;
}
