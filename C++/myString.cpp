#include "iostream"
#include "cstring"
using namespace std;
class MyString
{
public:
    MyString(const char *s) : str(new char[strlen(s) + 1]) // �����ڴ��Դ洢�ַ�������ʹ�� strcpy �������ƴ�����ַ���
    {
        strcpy(str, s);
    } // ���ι��캯��
    MyString()
    {
    } // �޲ι��캯��
    MyString(const MyString &that)
    {
        str = new char(*that.str);

    } // �������캯��
    MyString &operator=(const MyString &that)
    {
        this->str = new char(*that.str);
        return *this;
    } // ������ֵ����

    ~MyString()
    {
        delete[] str;
        str = NULL;
    }
    friend ostream &operator<<(ostream &os,const MyString &s)
    {
        os << s.str;
        return os;
    }
    friend istream &operator>>(istream &is, MyString &s)
    {
        char *temp=new char[100];
        is >> temp;
        delete[] s.str;
        s.str = NULL;
        s.str = new char[strlen(temp) + 1];
        strcpy(s.str, temp);
        delete[] temp;
        temp = NULL;
        return is;
    }
    char& operator[](size_t index)
    {
        return str[index];
    }
    char operator[](size_t index) const
    {
        return str[index];
    }

    int size() const
    {
        return strlen(str);
    }// �����ַ����ĳ���
    MyString operator+(const MyString &that) const
    {
        char *temp = new char(*str);
        strcat(temp, that.str);
        MyString temp1(temp);
        delete[] temp;
        temp = NULL;
        return temp1;
    
    }//�Ӻ�����
    const MyString operator+=(const MyString &that) const
    {
        strcat(str, that.str);
        return *this;
    }
    bool operator==(const MyString &that) const
    {
        return strcmp(str, that.str) == 0;
    }//��������
    bool operator>(const MyString &that) const
    {
        return strcmp(str, that.str) > 0;
    }
     bool operator<(const MyString &that) const
    {
        return strcmp(str, that.str) < 0;
    }
    void dele()
    {
        delete[] str;
        str = NULL;
    }



private:
    char *str;
};


int main()
{
cout<<"�������ַ�����";
MyString s;
cin>>s;
cout<<"�ַ�������Ϊ��"<<s.size()<<endl;
cout<<"�ַ���Ϊ��"<<s<<endl;
cout<<"�ַ�����һ���ַ�Ϊ��"<<s[0]<<endl;
cout<<"�ַ����ڶ����ַ�Ϊ��"<<s[1]<<endl;

    return 0;
}