#include <iostream>
using namespace std;
int countNoofDigit(int n, int &c) {
   
    
    if (n == 0) {
        return c;
    } 
    else {
        
        c++;

        return countNoofDigit(n / 10, c);
    }
   
    
   
    
}
int main() {
    int n,c=0;
    cin >> n;
     
    cout<<countNoofDigit(n,c);
    return 0;
}