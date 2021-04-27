#include "iostream"
using namespace std;



int main() {
    int n, m, x, y;
    cin >> n >> m;
    int a[n][m];
    for (int i=n-1;i>-1;i--) {
       for (int j=0;j<m;j++) {
            if (i==n-1) 
               a[i][j] = 1;
            else if (j==0)
                a[i][j] = 1;
            else 
                a[i][j] = a[i][j-1] + a[i+1][j];
        }
    }
    cout << a[0][m-1];
    return 0;
}