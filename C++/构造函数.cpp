#include"iostream"
using namespace std;
class Student
{
    public:
    Student( const string name,int age)
    {
        this->name=name;
        this->age=age;
    }

    void who()
    {
        cout<<"�ҽ�"<<name<<"������"<<age<<"��"<<endl;
    }
    private:
        string name;
    int age;
};
int main()
{
;
    Student stu("����",18);
    stu.who();
    return 0;
}