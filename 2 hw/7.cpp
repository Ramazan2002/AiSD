#include "iostream"
using namespace std;
void sort(int *a, int size) {
    int temp = 0;
    for (size_t i = 0; i < size-1; i++){
        for (size_t j = 0; j < size - 1 - i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[4] = {-4, 6, 2, 0};
    int *p = &a[0];
    int size = sizeof(a) / sizeof(a[0]);
    sort(p, size);
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    
}