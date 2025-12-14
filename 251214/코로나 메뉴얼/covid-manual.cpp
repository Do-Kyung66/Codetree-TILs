#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    int b;
    int c = 0;
    for(int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        
        if(a == 'Y' && b >= 37)
        {
            c += 1;
        }
    }
    

    if(c >= 2)
    {
        cout << "E";
    }
    else
    {
        cout << "N";
    }
    return 0;
}