#include"iostream"
#include"cstring"
using namespace std;
class Book
{
    public:
    /**
     * @brief 构造函数，用于初始化Book对象。
     * 
     * @param title 书籍的标题。
     * @param price 书籍的价格。
     * @param num 书籍的数量。
     * 
     * 该构造函数分配内存以存储书籍标题，并使用strcpy函数复制传入的标题字符串。
     * 它还初始化书籍的价格和数量。
     */
    Book(const char* title,const int price,const int num):name(new char[strlen(title)+1]),price(price),num(num)
    {
        
     strcpy(name,title);
    }
    ~Book(){
        delete []name;
              name=NULL;
           }
    void print()
    {
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<num<<endl;

    }
    private:
     char *name;
    int price;
    int num;
};
int main()
{
    Book book("C++",50,100);
    book.print();
    return 0;
}