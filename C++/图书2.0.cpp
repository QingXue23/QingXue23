#include"iostream"
#include"cstring"
using namespace std;
class Book
{
    public:
    /**
     * @brief ���캯�������ڳ�ʼ��Book����
     * 
     * @param title �鼮�ı��⡣
     * @param price �鼮�ļ۸�
     * @param num �鼮��������
     * 
     * �ù��캯�������ڴ��Դ洢�鼮���⣬��ʹ��strcpy�������ƴ���ı����ַ�����
     * ������ʼ���鼮�ļ۸��������
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