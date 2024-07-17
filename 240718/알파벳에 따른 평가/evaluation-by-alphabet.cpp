#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    switch(ch)
    {
        case 'S':
            cout << "Superior";
            break;
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Usually";
            break;
        case 'D':
            cout << "Effort";
            break;
        default:
            cout << "Failure";
            break;
    }
    return 0;
}