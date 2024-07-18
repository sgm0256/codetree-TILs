#include <iostream>
using namespace std;

int main() {
    int AM, AE, BM, BE;
    cin >> AM >> AE >> BM >> BE;
    cout << ((AM==BM)?((AE>BE)?'A':'B'):((AM>BM)?'A':'B'));
    return 0;
}