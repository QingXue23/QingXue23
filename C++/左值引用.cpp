#include"iostream"
using namespace std;
int main()
{
    int &&a = 10;
    cout << a << endl;
    a = 20;
    cout << a << endl;
}