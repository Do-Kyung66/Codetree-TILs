#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> B >> A;
    while(A <= B)
    {
        if(B % 2 == 0)
        {
            cout << B << " ";
        }
        --B;
    }
    return 0;
}