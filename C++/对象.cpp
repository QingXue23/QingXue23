#include"std_lib_facilities.h"
typedef class Student
{
    public:
    void eat(const string food)
    {
        cout<<"我吃了"<<food<<endl;

    }
    void sleep(const int hours)
    {
        cout<<"我睡了"<<hours<<"个小时"<<endl;
    }
    string name;
    private:
    int age;

}STU;
int main()
{
    STU stu;
    stu.name="张三";
    //stu.age=18;
    stu.eat("饭");
    stu.sleep(8);
    return 0;
}
