#include "iostream"
#include "algorithm"
using namespace std;

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
