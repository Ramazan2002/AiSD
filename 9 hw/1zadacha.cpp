#include "iostream"
using namespace std;

int main() {
    int x, y, z, n, i;
    x = 0;
    y = 0;
    z = 0;
    cin >> n;
    while (n > 5) {
        x = n / 10;
        n -= x * 10;
        y = n / 5;
        n -= y * 5;
        }
    cout << n << " " << y << " " << x;
    return 0;
}