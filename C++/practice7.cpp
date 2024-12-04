#include<iostream>
using namespace std;
int main(){
    cout << "请输入你的成绩";
    int score = 0 ;
    cin >> score;
    switch (score /10)
    {case 6:
    cout << "D";
    break;
    case 7:
    cout << "C";
    break;
    case 8:
    cout << "B";
    break;
    case 9:
    case 10:
    cout << "A";
    break;
    default:
    cout << "你小子挂科了";
   break;
    return 0;
    }
}