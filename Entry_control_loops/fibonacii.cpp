#include <iostream>
using namespace std;

int main() {
    int n, num1 = 0, num2 = 1, nextnum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << num1 << " ";
            continue;
        }
        if(i == 2) {
            cout << num2<< " ";
            continue;
        }
        nextnum = num1 + num2;
        num1= num2;
        num2 = nextnum;
        cout << nextnum << " ";
    }
    return 0;
}