#include "iostream"
#include "cstring"
using namespace std;
class MyString
{
public:
    MyString(const char *s) : str(new char[strlen(s) + 1]) // 分配内存以存储字符串，并使用 strcpy 函数复制传入的字符串
    {
        strcpy(str, s);
    } // 含参构造函数
    MyString()
    {
    } // 无参构造函数
    MyString(const MyString &that)
    {
        str = new char(*that.str);

    } // 拷贝构造函数
    MyString &operator=(const MyString &that)
    {
        this->str = new char(*that.str);
        return *this;
    } // 拷贝赋值函数

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
    }// 返回字符串的长度
    MyString operator+(const MyString &that) const
    {
        char *temp = new char(*str);
        strcat(temp, that.str);
        MyString temp1(temp);
        delete[] temp;
        temp = NULL;
        return temp1;
    
    }//加号重载
    const MyString operator+=(const MyString &that) const
    {
        strcat(str, that.str);
        return *this;
    }
    bool operator==(const MyString &that) const
    {
        return strcmp(str, that.str) == 0;
    }//等于重载
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
cout<<"请输入字符串：";
MyString s;
cin>>s;
cout<<"字符串长度为："<<s.size()<<endl;
cout<<"字符串为："<<s<<endl;
cout<<"字符串第一个字符为："<<s[0]<<endl;
cout<<"字符串第二个字符为："<<s[1]<<endl;

    return 0;
}