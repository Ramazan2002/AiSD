#include "iostream"
using namespace std;

int main() {
    int n, m, k;
    k = 0;
    cin >> n;
    int *pointer = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> pointer[i];
    }
    cin >> m;
    int *pointer1 = new int [m];
    for (int i = 0; i < m; i++) {
        cin >> pointer1[i];
    }

    int *mas = new int [n+m];

    for (int i = 0; i < n + m; i++) {
        if (i < n) {
            mas[k++] = pointer[i];
        }
        else {
            mas[k++] = pointer1[i-n];
        }    
    }
    for (int i = 0; i < n + m; i++) {
        cout << mas[i] << " ";
    }
    delete [] pointer;
    delete [] pointer1;
}