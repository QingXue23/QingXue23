#include <iostream>
using namespace std;
void f(int n) {
    if (n == 0) {
        return;
    } else {
        f(n / 10); 
        cout << n % 10;  
    }
}

int main() {
    int number = 12345;  
    f(number);
    cout << endl; 
    return 0;
}