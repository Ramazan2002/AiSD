#include "iostream"
using namespace std;

struct MaxHeap {
    int size = -1;
    int maxSize = 3;
    int * array = new int [maxSize];
    

    int Parent(int i) {
        return (i - 1) / 2;
    }

    int LeftChild(int i) {
        return 2 * i + 1;
    }

    int RightChild(int i) {
        return 2 * i + 2;
    }

    void SiftUp(int i) {
        while ((i > 0) && (array[i] > array[Parent(i)])) {
            int trash = array[Parent(i)];
            array[Parent(i)] = array[i];
            array[i] = trash;
            i = Parent(i);
        }
    }

    void SiftDown(int i) {
        int maxIndex = i;
        if ((LeftChild(i) > maxIndex) && (LeftChild(i) < size)) {
            maxIndex = LeftChild(i);
        }
        else if ((RightChild(i) > maxIndex) && (RightChild(i) < size)){
            maxIndex = RightChild(i);
        }
        if (maxIndex != i) {
            int trash2 = array[i];
            array[i] = array[maxIndex];
            array[maxIndex] = trash2;
            SiftDown(maxIndex);
        }
    }

    void Insert(int p) {
        if (size < maxSize) {
            size++;
            array[size] = p;
            SiftUp(size);
        }
    }

    int ExtractMax() {
        int result = array[0];
        array[0] = array[size];
        array[size] = result;
        size--;
        SiftDown(0);
        return result;
    }

    int GetMax() {
        return array[0];
    }
};

int ko(int num) {
    int iter = 0;
    while (num > 1) {
        num /= 2;
        iter ++;
    }
    
    return iter + 1;            
};

int ka(int a, int b) {
    int cntr = 1;
    for (int i = 0; i < b; i++) {
        cntr *= a;
    }
    return cntr;
};

int * HeapSort(int * array, int size) {
    MaxHeap * a = new MaxHeap;

    int * arr = new int [size];
    for (int i=0; i<size; i++) {
        a->Insert(array[i]);
    }
    for (int i=0; i<size; i++) {
        arr[i] = a->ExtractMax();
    }
    return arr;
}

int main() {
    int size = 3;
    int * array = new int [size] {0,2,1};
    int * new_array = HeapSort(array, size);
    for (int i=0; i<size;i++) {
        cout << new_array[i] << endl;
    }

    return 0;
}