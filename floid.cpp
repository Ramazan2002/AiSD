#include <iostream>
#include "ctime"
using namespace std;

const int maxV=1000;
int i, j, n;
int GR[maxV][maxV];

void FU(int D[][maxV], int V) {
    int t = 0;
    int k;
    for (i=0; i<V; i++) {
        D[i][i]=0;
    }
    int x = clock();
    for (k=0; k<V; k++) {
        for (i=0; i<V; i++) {
            for (j=0; j<V; j++) {
                t++;
                if (D[i][k] && D[k][j] && i!=j) {
                    if (D[i][k]+D[k][j]<D[i][j] || D[i][j]==0) {
                        D[i][j]=D[i][k]+D[k][j];
                    }
                }
            }
        }
    }
    int y = clock();
    for (i=0; i<V; i++) {
        for (j=0; j<V; j++) {
            cout << D[i][j] << "\t";
        }
        cout << endl;
    }
    cout << (y-x)/1000.0<<'\n';
    cout << t;
}

int main() {
    cout<<"Количество вершин в графе > ";
    cin>>n;
    cout<<"Введите матрицу весов ребер:\n";
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {   
            cout<<"GR["<<i+1<<"]["<<j+1<<"] > ";
            GR[i][j] = rand()%9+1;
        }
    }
    cout<<"Матрица кратчайших путей:"<<endl;
    FU(GR, n);
    return 0;
}
