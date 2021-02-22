#include "iostream"
#include "math.h"
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - 4* a * c;
    double x1 = (- b + sqrt(d)) / (2 * a);
    double x2 = (- b - sqrt(d)) / (2 * a);
    cout << x1 << " " << x2;
    return 0;
}