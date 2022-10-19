#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2;
    int n3;
    int n4;

    cout << "Type number 1:";
    cin >> n1;
    cout << "Type number 2:";
    cin >> n2;
    cout << "Type number 3:";
    cin >> n3;
    cout << "Type number 4:";
    cin >> n4;

    cout << "Number 1 is:" << "\n";
    cout << n1 << "\n";
    cout << "The sum of number 1 & number 2 is:" << "\n";
    cout << n1+n2 << "\n";
    cout << "The sum of number 1, number 2 & number 3 is:" << "\n";
    cout << n1+n2+n3 << "\n";
    cout << "The sum of all 4 numbers is:" << "\n";
    cout << n1+n2+n3+n4 << "\n";
    return 0;
    }
