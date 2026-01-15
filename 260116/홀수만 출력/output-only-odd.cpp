#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;

    cin >> A >> B;
    for (int i = A; i <= B; ++i)
    {
        if(i % 2 == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}