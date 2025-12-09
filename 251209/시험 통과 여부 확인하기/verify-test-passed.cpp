#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    if (N >= 80)
    {
        cout << "pass";
    }
    else
    {
        int x = 80 - N;
        cout << x << " more score";
    }
    return 0;
}