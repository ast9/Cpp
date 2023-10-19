#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    int hasil = 0;
    for(int i=0;i<a;i++){
        hasil += b;
    }

    cout << "Hasil perkalian " << a << " x " << b << " = " << hasil;

    return 0;
}
