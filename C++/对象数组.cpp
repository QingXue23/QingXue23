#include "iostream"
using namespace std;
class Student
{
public:
    Student(const string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void who()
    {
        cout << "我叫" << name << "，今年" << age << "岁" << endl;
    }

private:
    string name;
    int age;
};
int main()
{
    Student stu[3] =
        {
            Student("张三", 18),
            Student("李四", 19),
            Student("王五", 20)};
    for (int i = 0; i < 3; i++)
    {
        stu[i].who();
    }
    return 0;
}
