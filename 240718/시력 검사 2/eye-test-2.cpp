#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;
    cout << ((a >= 1) ? "High" : ((a >= 0.5f) ? "Middle" : "Low"));
    return 0;
}