#include <iostream>

using namespace std;

int main()
{
    int makanan,minuman,harga_makanan,harga_minuman;
    int nasi_goreng,sop_buntut,dori_sambal;
    int kiwi_mojito,lemon_tea,jus_jeruk;
    float harga,ppn;

    nasi_goreng = 20;
    sop_buntut = 45;
    dori_sambal = 25;
    cout << "Menu makanan:\n";
    cout << "1. Nasi goreng\n";
    cout << "2. Sop buntut\n";
    cout << "3. Dori sambal matah\n";
    cin >> makanan;
    if (makanan==1)
        harga_makanan = nasi_goreng;
    else if (makanan==2)
        harga_makanan = sop_buntut;
    else if (makanan==3)
        harga_makanan = dori_sambal;

    kiwi_mojito = 25;
    lemon_tea = 15;
    jus_jeruk = 18;
    cout << "Menu minuman:\n";
    cout << "1. Kiwi mojito\n";
    cout << "2. Lemon tea\n";
    cout << "3. Jus jeruk\n";
    cin >> minuman;
    if (minuman==1)
        harga_minuman = kiwi_mojito;
    else if (minuman==2)
        harga_minuman = lemon_tea;
    else if (minuman==3)
        harga_minuman = jus_jeruk;

    harga = harga_makanan + harga_minuman;
    ppn = harga*0.11;
    harga = harga + ppn;

    cout << "Total biaya yang harus dibayar adalah " << harga << " ribu rupiah";

    return 0;
}
