#include <iostream>
using namespace std; 
int reverse(int n, int &pow){
    if (n == 0) {
        return pow;
    } 
    else {
        pow = pow * 10 + n % 10;
        return reverse(n / 10, pow);
    }
}   
int main() {
    int n;
    cin >> n;
    int pow = 0;
    cout << reverse(n, pow) << endl;
    return 0;
}