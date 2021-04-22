#include <iostream>
using namespace std;

void insert(int arr[], int l) {
    for (int i=0;i<l;i++) {
        cin >> arr[i];
    }
}

int searchLeft(int arr[], int len, int x) {
    int middle;
    int left = -1;
    int right = len;
    while (left < right-1) {
        middle = (left + right) / 2;
        if (arr[middle] < x)
            left = middle;
        else
            right = middle;
    }
    return right;
}

int searchRight(int arr[], int len, int x) {
    int middle;
    int left = -1;
    int right = len;
    while (left < right-1) {
        middle = (left + right) / 2;
        if (arr[middle] <= x)
            left = middle;
        else
            right = middle;
    }
    return left;
}

int main() {
    int len, y;
    cin >> len;
    cin >> y;
    int a[len];
    insert(a, len);
    int index = searchLeft(a, len, y);
    int index2 = searchRight(a, len, y);
    cout << index << ' ' << index2;
}