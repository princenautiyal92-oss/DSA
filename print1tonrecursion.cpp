#include <iostream>
using namespace std;
// print 1 to n using recursion
void print1ToN(int n) {
    if (n == 0)
        return; // base case
    else {
        cout << n << endl; // print after the recursive call to print in order
        print1ToN(n - 1); // recursive case
        cout << n << endl; // print after the recursive call to print in order
        
    }
}
int main() {
    int n;
    cin >> n;
    cout << "Printing numbers from 1 to " << n << ":" << endl;
    print1ToN(n);
    return 0;
}
