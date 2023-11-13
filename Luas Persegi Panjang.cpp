#include <iostream>
using namespace std;

int p,l,luas;

void hitung (int p, int l, int luas) {
    luas = p*l;
    cout << "Lebar persegi panjang dengan P: " << p << ", L: " << l << " adalah = " << luas << endl;
}

int main()
{
    hitung(17, 9, luas);
    hitung(21, 11, luas);
    hitung(7, 3, luas);
}
