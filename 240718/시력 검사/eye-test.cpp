#include <iostream>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout << (((a>=1) && (b>=1)) ? "High" : (((a>=0.5f) && (b>=0.5f)) ? "Middle" : "Low"));
    return 0;
}