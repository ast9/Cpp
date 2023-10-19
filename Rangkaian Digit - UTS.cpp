#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=10; i++){
        if(i%2==1)
            cout << i << ",";
        else{
            cout << i*2;
            if(i==10)
            cout << " ";
            else
            cout << ",";
        }
    }

}
