#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    switch(num)
    {
        case 1:
            cout << "John";
            break;
        case 2:
            cout << "Tom";
            break;
        case 3:
            cout << "Paul";
            break;
        default:
            cout << "Vacancy";
            break;
    }
    return 0;
}