#include "iostream"
#include "algorithm"
using namespace std;


int main() {
    int k, x, temp;
    int y = 1;
    cin >> k;
    int array[k][3];
    for (int i=0;i<k;i++) {
        for (int j=0;j<3;j++) {
            cin >> x;
            array[i][j] = x;
        }
    }
    for (int m=0; m<k; m++) {
        for (int i = 0; i<k-1; i++){
            if (array[i+1][1] > array[i][1])
                swap(array[i+1], array[i]);
        }
    }

    for (int i=1;i<k;i++) {
        if ((array[i-1][2] <= i) && (array[i-1][1]/array[i-1][2] > array[i][1]/array[i][2]))
            swap(array[i-1], array[i]);
    }
    cout << endl;

    for (int i=k-1;i>=0;i--) {
        cout << array[i][0] << ' ';
        }
    return 0;
}