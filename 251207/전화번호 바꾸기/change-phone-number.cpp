#include <iostream>
#include <sstream>
using namespace std;

int main() {
    // Please write your code here.
    string input;
    string a, b, c;

    getline(cin, input);
    stringstream ss(input);

    getline(ss, a, '-');
    getline(ss, b, '-');
    getline(ss, c, '-');

    cout << a << '-' << c << '-' << b;

    
}