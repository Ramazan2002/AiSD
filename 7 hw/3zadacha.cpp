#include <iostream>
using namespace std;
int sqrt(int y) {
    int middle, value;
    int left = 0;
    int right = y;

    while (left + 1 < right) {
        middle = (right+left) / 2;
        value = y;
        value /= middle;
        if (value >= middle)
            left = middle;
        else
            right = middle;
    }
    return left;
}
int main () {
    int x;
    cin >> x;
    cout << sqrt(x);
}