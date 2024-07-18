#include <iostream>
using namespace std;

int main() {
    int AM, AE, BM, BE;
    cin >> AM >> AE >> BM >> BE;
    cout << ((AM > BM) && (AE > BE));
    return 0;
}