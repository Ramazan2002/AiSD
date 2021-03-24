#include "iostream"
using namespace std;

struct MaxHeap {
    int * array = new int [5];
    int size = 0;
    int maxSize = 5;


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

int main() {
    MaxHeap * a = new MaxHeap;
    a->Insert(1);
    a->Insert(8);
    a->Insert(20);
    a->Insert(5);
    cout << a->GetMax() << endl;
    a->ExtractMax();
    cout << a->GetMax() << endl;
    a->ExtractMax();
    cout << a->GetMax();
    return 0;
}