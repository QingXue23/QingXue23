#include"iostream"
using namespace std;
class Girl;//如果声明友元的类在后面，需要先声明
class Boy

{
public:
void memberFunction(Girl &girl);
};

void Boy::memberFunction(Girl &girl)
{
if(girl.age<18)
{
cout<<"Girl is too young"<<endl;
}
}

class Girl
{
private:
int age;
public:
Girl(int age):age(age){}
friend void Boy::memberFunction(Girl &girl);


};

int main() {


Boy boy;
Girl girl(16);
boy.memberFunction(girl);
return 0;
}