#include <iostream>
using namespace std;

long long power(long long x, long long y) {
    if (y == 0) {
        return 1; 
    } else {
        return x * power(x, y - 1); 
    }
}
int main() {
    long long x, y;
    cin >> x >> y;

    cout << power(x, y) << endl;

    return 0;
}