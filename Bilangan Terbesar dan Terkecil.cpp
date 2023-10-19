#include <iostream>

using namespace std;

int main()
{
    int n,i,bil;
    int terbesar = 0;
    int terkecil = 99999;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for(i=1; i<=n; i++){
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> bil;

        if(bil>terbesar)
            terbesar=bil;
        if(bil<terkecil)
            terkecil=bil;
    }

    cout << "Bilangan terbesar: " << terbesar << endl;
    cout << "Bilangan terkecil: " << terkecil << endl;

    return 0;
}
