#include "iostream"
using namespace std;
int main() {
    int n, k, s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        s = s + k;
    }
    if (n == 0) {
        cout << 0;
    }
    else {
        cout << s;
    }
    return 0;
}
