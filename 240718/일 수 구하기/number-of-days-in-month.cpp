#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n<=7)?((n%2==1)?31:((n==2)?28:30)):((n%2==0)?31:30));
    return 0;
}