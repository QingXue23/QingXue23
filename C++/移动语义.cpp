#include"iostream"
using namespace std;
class A
{
    public:
    A(int a)
    {
        this->a = new int(a);
        cout<<"���캯��"<<endl;
    }
    A(const A &that)
    {
        this->a = new int(*that.a);
        cout<<"�������캯��"<<endl;
    }
    ~A()
    {
        delete a;
        cout<<"��������"<<endl;
    }
    A &operator=(const A &that)
    {
        if(this != &that)
        delete a;
        this->a = new int(*that.a);
        cout<<"������ֵ����"<<endl;
        return *this;
    }
    A(A&& that)noexcept
    {
        this->a = that.a;
        that.a = NULL;
        cout<<"�ƶ����캯��"<<endl;
    }
    A &operator=(A &&that)
    {
        if(this != &that)
        {
            delete a;
            this->a = that.a;
            that.a = NULL;
            cout<<"�ƶ���ֵ����"<<endl;
            return *this;
        }
        else
        return *this;
    }
    
private:
int *a;
};
int main()
{
    A a(10);
    A b(a);
    A c(move(a));
    A d(30);
    d = move(b);

}