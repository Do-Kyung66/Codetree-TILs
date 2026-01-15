#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int M = 0;
    cin >> N;
    for (int i = 1; i <= 5; i++ )
    {
        M = i * N;
        cout << M << " ";
    }
    return 0;
}