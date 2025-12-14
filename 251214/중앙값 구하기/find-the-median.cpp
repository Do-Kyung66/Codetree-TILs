#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B) // 26 22 
    {
        if (B > C) // 22 30
        {
            cout << B;
        }
        else
        {
            if (A > C)
            {
                cout << C;
            }
            else
            {
                cout << A;
            }
        }
        
    }
    else
    {
        if (A > C)
        {
            cout << A;
            
        }
        else
        {
            if (B > C)
            {
                cout << C;
            }
            else
            {
                cout << B;
            }
        }
    }
    return 0;
}