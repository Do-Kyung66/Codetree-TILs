#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    float ft = 9.2;
    float f_cm = 30.48;
    float mi = 1.3;
    float mi_cm = 160934;

    cout << fixed;
    cout.precision(1);

    cout << ft << "ft" << " = " << ft*f_cm << "cm" << endl;
    cout << mi << "mi" << " = " << mi*mi_cm << "cm";
    return 0;
}