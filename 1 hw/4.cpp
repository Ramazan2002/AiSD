#include "iostream"
using namespace std;

int power(int x, unsigned p) {
    int k = 1;
    for (int i = 0; i < p; ++i) {
        k = x * k;
    }
    return k;
};

int main() {
    int z, y;
    cin >> z >> y;
    int a = power(z, y);
    cout << a;
    return 0;
}