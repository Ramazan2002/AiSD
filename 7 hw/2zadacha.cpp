#include <iostream>
using namespace std;

int main() {
    int x, n, m, middle, mid;
    int left, k = 0;
    int leftj = 0;
    cin >> n;
    int right = n;
    cin >> m;
    int rightj = m;
    cin >> x;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i=0;i<n;i++) {
        while(1) {
            mid = (leftj + rightj) / 2;
            if (x > a[i][mid])
                leftj = mid;

            else if (x < a[i][mid])
                rightj = mid;

            else if (x = a[i][mid]) {
                cout << "Нашлось";
                return 0;
            }
            if (x < a[0][0] || x > a[m-1][m-1]) {
                cout << "Не нашлось";
                return 0;
            }
        }
    }
    cout << "Не нашлось";
    return 0;
}