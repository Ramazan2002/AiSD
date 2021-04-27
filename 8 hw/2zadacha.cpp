#include "iostream"
using namespace std;



int main() {
    int l, x, y;
    cin >> l;
    int a[l];
    a[0] = 1;
    a[1] = 1;
    for (int i=2;i<l;i++) {
        x = a[i-2];
        y = a[i-1];
        a[i] = x + y;
    }
    cout << a[l-1];
    return 0;
}