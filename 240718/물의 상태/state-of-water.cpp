#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n<0) ? "ice" : (((n >= 0) && (n < 100)) ? "water" : "vapor"));
    return 0;
}