#include "iostream"
#include "cmath"
using namespace std;
int main() {
    int x;
    cin >> x;
    int p = 0;
    while (pow(2, p) < x) {
        p += 1;
    }
    cout << p - 1 ;
    return 0;
}