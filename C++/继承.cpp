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
        cout << "������" << name << endl;
        cout << "���ţ�" << id << endl;
        cout << "���ʣ�" << salary << endl;
    }
    int getID()
    {
        return id;
    }
    virtual void duty()
    {
        cout << "Ա��" << id << "��ְ���ǣ���ɱ�ְ����" << endl;
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
        cout << "��Ŀ��" << project << endl;
    }

    string project;
    void duty()
    {
        cout << "ְ���ǣ���ɱ�ְ����������Ա��" << endl;
    }
};
int main()
{
    Manager m(10086, "����", 10000, "C++");
    m.who();
    m.print();
        m.duty();
    return 0;
}

