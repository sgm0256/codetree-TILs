#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n >= 90) ? 'A' : ((n >= 80) ? 'B' : ((n >= 70) ? 'C' : ((n >= 60) ? 'D' : 'F'))));
    return 0;
}