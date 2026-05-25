#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // Please write your code here.
    vector<float> arr;
    int N;
    float b;
    float x;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        b += arr[i];
    }

    b = b / N;
    cout << fixed << setprecision(1);
    cout << b << endl;

    if( b >= 4.0)
    {
        cout << "Perfect";
    }
    else if (b >= 3.0)
    {
        cout << "Good";
    }
    else
    {
        cout << "Poor";
    }
    return 0;


}