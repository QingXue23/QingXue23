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
        cout << "�ҽ�" << name << "������" << age << "��" << endl;
    }

private:
    string name;
    int age;
};
int main()
{
    Student stu[3] =
        {
            Student("����", 18),
            Student("����", 19),
            Student("����", 20)};
    for (int i = 0; i < 3; i++)
    {
        stu[i].who();
    }
    return 0;
}
