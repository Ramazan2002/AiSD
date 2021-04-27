#include "iostream"
#include "algorithm"
using namespace std;

void getNumbers(int num, int array[]) {
    int x, k = 0;
    while (num>0) {
        x = num % 10;
        array[k] = x;
        k++;
        num /= 10;
    }
}
int main() {
    string a, b;
    int c;
    cin >> a >> b >> c;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    do
    {
        do
        {
            if (stoi(b) + stoi(a) == c){
                cout << a << " + " << b << " = " << c;
                return 0;
            }
        } while (next_permutation(b.begin(), b.end()));
        
    } while (next_permutation(a.begin(), a.end()));
}
