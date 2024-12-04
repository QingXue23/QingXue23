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
        cout<<"我叫"<<name<<"，今年"<<age<<"岁"<<endl;
    }
    private:
        string name;
    int age;
};
int main()
{
;
    Student stu("张三",18);
    stu.who();
    return 0;
}