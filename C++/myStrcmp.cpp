#include <iostream>
using namespace std;
int myStrcmp(char *s1,char *s2)
{
    for(;*s1==*s2&&*s1!='\0'&&*s2!='\0';s1++,s2++)
    {
    
    }
    
    
    
    if(*s1!=*s2)
    {
        return *s1-*s2;
    }
        else
        {
            return 0;
        }

}
int main()
{
    char s1[100];
    char s2[100];
    cin>>s1;
    cin>>s2;
    cout<<myStrcmp(s1,s2);
    return 0;
}
