#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == ((a<b) ? ((a<c) ? a : c) : ((b<c) ? b : c))) << " " << ((a == b) == c);
    return 0;
}