#include "iostream"
using namespace std;

class Singleton
{
public:
static Singleton& getInstance()
{
    return s_instance;
}
void print()
{
    cout  <<m_data<<endl;

}
private:
Singleton(int data = 0) : m_data(data) 
{
    cout<<"������������"<<endl;
}
Singleton(const Singleton&)=delete;
static Singleton s_instance;
int m_data;
};
Singleton Singleton::s_instance(12345);
int main()
{
    cout<<"main ������ʼ"<<endl;
    Singleton &s = Singleton::getInstance();
    Singleton &s1 = Singleton::getInstance();
    cout<< &s <<endl;
    cout<< &s1 <<endl;
    s.print();
    return 0;
}