#include"iostream"
using namespace std;
class Girl;//���������Ԫ�����ں��棬��Ҫ������
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