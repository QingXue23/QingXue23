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
        cout<<"������"<<name<<endl;
        cout<<"�۸�"<<price<<endl;
        cout<<"������"<<num<<endl;
    }
};
int main()
{Book book;
cout<<"����������"<<endl;
string name;
cin>>name;
cout<<"������۸�"<<endl;
int price;
cin>>price;
cout<<"����������"<<endl;
int num;
cin>>num;
book.setbook(name,price,num);
book.print();
return 0;
}
