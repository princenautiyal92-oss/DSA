#include <iostream>
using namespace std;

    
    void printAtoB(int a, int b){
        if(a > b) return;
    
        cout << a << " ";
        printAtoB(a + 1, b);
    }

    
    int main(){
        int a, b;
        cin>>a>>b;   
        printAtoB(a, b);
    }
