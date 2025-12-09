#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int exam;
    cin >> exam;
    string result;
    exam == 100 ? result = "pass" : result = "failure";
    cout << result;
    return 0;
}