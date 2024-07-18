#include <iostream>
using namespace std;

int main() {
    int sex, age;
    cin >> sex >> age;
    cout << (((age>=19)&&(sex==0)) ? "MAN" : (((age>=19)&&(sex==1)) ? "WOMAN" : (((age<19)&&(sex==0)) ? "BOY" : "GIRL")));
    return 0;
}