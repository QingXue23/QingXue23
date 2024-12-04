#include<iostream>
#include<string>
using namespace std;
int main(){
string s = "abc123qwe456wer789!uyrwiu111";
int result=0;
int num =0;
for(int i=0;i<s.size();i++)
{
  if (s[i]>='0'&& s[i]<='9')
  {
    num=num *10 + s[i]-'0';
  }
  else
  {
    result +=num;
    num = 0;
  }
}
cout <<result;
return 0;}