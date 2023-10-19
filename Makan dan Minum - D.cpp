#include <iostream>

using namespace std;

int main()
{
    cout << "=== MAKANAN ===\n";
    cout << "1. Nasi Goreng - 20K\n";
    cout << "2. Sop Buntun - 45K\n";
    cout << "3. Dori Sambal Matah - 25K\n";
    cout << "=== MINUMAN ===\n";
    cout << "1. Kiwi Mojito - 25K\n";
    cout << "2. Lemon Tea - 15K\n";
    cout << "3. Jus Jeruk - 18K\n";

    int makanan,minuman;
    cout << "Pilih makanan: ";
    cin >> makanan;
    cout << "Pilih minuman: ";
    cin >> minuman;
    float total_biaya,harga_makanan,harga_minuman;
    float ppn;
    switch(makanan){
        case 1:
            harga_makanan = 20;
        break;
        case 2:
            harga_makanan = 45;
        break;
        case 3:
            harga_makanan = 25;
        break;
    }
    switch(minuman){
        case 1:
            harga_minuman = 25;
        break;
        case 2:
            harga_minuman = 15;
        break;
        case 3:
            harga_minuman = 18;
        break;
    }
    total_biaya = harga_makanan + harga_minuman;
    ppn = 0.11 * total_biaya;
    cout << "Harga makanan = " << harga_makanan << endl;
    cout << "Harga minuman = " << harga_minuman << endl;
    cout << "PPN 11% = " << ppn << endl;
    cout << "Harga Final = " << total_biaya + ppn << endl;


    return 0;
}
