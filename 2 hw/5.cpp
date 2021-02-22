#include "iostream"
using namespace std;

int sum(int * a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int a[10] = {1, 3, 2, 5, 8, 2, 6, 3, 9};
    int *p = &a[0];
    int size = sizeof(a) / sizeof(a[0]);
    cout << sum(p, size);
    return 0;
}