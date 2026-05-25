#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int b = 0;
    int c = 0;
    float d = 0;
    for (int i = 0; i < 10; i++)
    {
        a[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if(a[i] >= 250)
        {
            c = i;
            for(int i = 0; i < c; i++)
            {
                b += a[i];
            }
            d = (float)b / c;
            cout << fixed << setprecision(1);
            cout << b << " " << d;
            return 0;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        b += a[i];
    }
    d = (float)b / 10;
    cout << fixed << setprecision(1);
    cout << b << " " << d;
    

    return 0;
}