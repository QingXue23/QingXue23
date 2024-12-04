#include "iostream"
using namespace std;
class Staff
{
public:
    Staff(int id, string name, int salary) : id(id), name(name), salary(salary)
    {
    }
    int salary;
    string name;

    void who()
    {
        cout << "姓名：" << name << endl;
        cout << "工号：" << id << endl;
        cout << "工资：" << salary << endl;
    }
    int getID()
    {
        return id;
    }
    virtual void duty()
    {
        cout << "员工" << id << "的职责是：完成本职工作" << endl;
    };

private:
    int id;
};
class Manager : public Staff
{
public:
    Manager(int id, string name, int salary, string project) : Staff(id, name, salary), project(project)
    {
    }
    void print()
    {
        cout << "项目：" << project << endl;
    }

    string project;
    void duty()
    {
        cout << "职责是：完成本职工作，管理员工" << endl;
    }
};
int main()
{
    Manager m(10086, "张三", 10000, "C++");
    m.who();
    m.print();
        m.duty();
    return 0;
}

