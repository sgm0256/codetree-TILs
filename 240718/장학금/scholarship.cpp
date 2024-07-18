#include <iostream>
using namespace std;

int main() {
    int score1, score2, money = 0;
    cin >> score1 >> score2;
    if(score1 >= 90)
        if(score2 >= 95)
            money += 100000;
        else if(score2 >= 90)
            money += 50000;

    cout << money;
    return 0;
}