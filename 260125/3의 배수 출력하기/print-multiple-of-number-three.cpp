#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    cin >> N;
    while(i <= N)
    {
        if(i % 3 == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}