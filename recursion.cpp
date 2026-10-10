#include <iostream>
using namespace std;
// print hello world from recursion

void phw(int n)
{

    if (n == 0)
        return; // base case
    else
    {

        cout << "Hello World" << endl;
        phw(n - 1); // recursive case
    }
}
int main()
{
    int n;
    cin >> n;
    phw(n);
    return 0;
}
