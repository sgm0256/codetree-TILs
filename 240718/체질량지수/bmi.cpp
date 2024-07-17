#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    cout << (10000*w)/(h*h);
    if((10000*w)/(h*h) > 25)
        cout << endl << "Obesity";
    return 0;
}