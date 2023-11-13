#include <iostream>
using namespace std;

void displayNumber(int a){
    if(a > 0){
        cout << a << " ";
        displayNumber(a-1);
    }
}

int sumNumber(int n){
    if(n > 0){
        return n + sumNumber(n-1);
    }
}

int main()
{
    cout << sumNumber(9999);

    return 0;
}
