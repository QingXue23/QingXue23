#include"std_lib_facilities.h"
typedef class Student
{
    public:
    void eat(const string food)
    {
        cout<<"�ҳ���"<<food<<endl;

    }
    void sleep(const int hours)
    {
        cout<<"��˯��"<<hours<<"��Сʱ"<<endl;
    }
    string name;
    private:
    int age;

}STU;
int main()
{
    STU stu;
    stu.name="����";
    //stu.age=18;
    stu.eat("��");
    stu.sleep(8);
    return 0;
}
