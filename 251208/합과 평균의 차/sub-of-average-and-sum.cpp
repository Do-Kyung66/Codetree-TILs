#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    int sum, average;
    sum = a+b+c;
    average = (a+b+c)/3;
    cout << sum << endl;
    cout << average << endl;
    cout << sum - average;
    return 0;
}