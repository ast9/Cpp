#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int b=9;
    int n=0;

    for(int i=a;i<=b;i++) {
        for(int j=i+1;j<=b;j++) {
            for(int k=j+1;k<=b;k++) {
                for(int l=k+1;l<=b;l++) {
                    cout << i << " " << j << " " << k << " " << l << endl;
                    n++;
                }
            }
        }
    }
    if (n == 0){
            cout << "No";
    }
return 0;
}
