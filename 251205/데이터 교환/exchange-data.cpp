#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a = 5;
    int b = 6; 
    int c = 7;

    int temp;
    int temp2;

    temp = b;
    b = a;
    temp2 = c;
    c = temp;
    a = temp2;
    cout << a << endl;
    cout << b << endl;
    cout << c;
    
    return 0;
}