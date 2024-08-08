#include <iostream>
#include <algorithm>
#include <climits>
#include <math.h>
using namespace std;

int main() {
    int arr[10];
    int n, min = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 0; i < n - 1; ++i)
        min = std::min(min, abs(arr[i] - arr[i+1]));

    cout << min;
    return 0;
}