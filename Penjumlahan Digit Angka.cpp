#include <iostream>

using namespace std;

int sumDigit(int n){
    if(n >= 10){
        return(n % 10) + sumDigit(n/10);
    }else{
        return n;
    }
}

int main()
{
    cout << sumDigit(11229933);

    return 0;
}
