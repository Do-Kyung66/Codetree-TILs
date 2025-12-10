#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    int c, d;
    cin >> a >> b;
    cin >> c >> d;

    if(a > c)
    {
        cout << 'A';
    }
    else if (c > a)
    {
        cout << 'B';
    }
    else if (a == c && b > d)
    {
        cout << 'A';
    }
    else if (a == c && d > b)
    {
        cout << 'B';
    }

    return 0;
}