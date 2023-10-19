#include <iostream>

using namespace std;

int main()
{
    float studio;
    float apartment;
    float diskon;
    int bulan;
    float hari;

    cout << "Masukkan pilihan bulan:\n";
    cout << "1. Mei/Oktober\n";
    cout << "2. Juni/September\n";
    cout << "3. Juli/Agustus\n";
    cin >> bulan;

    cout << "Masukkan jumlah hari\n";
    cin >> hari;

    if (bulan==1)
    {
        if (hari > 14){
            studio = (hari*50*0.7);
            apartment = (hari*65*0.9);
        }
        else if (hari > 7){
            studio = (hari*50*0.95);
            apartment = (hari*65);
        }
        else {
            studio = (hari*50);
            apartment = (hari*65);
        }
        cout << "Studio - " << studio << " USD/malam\n";
        cout << "Apartement - " << apartment <<  " USD/malam\n";
    }
    else if (bulan==2)
    {
        if (hari > 14){
            studio = (hari*75.20*0.8);
            apartment = (hari*68.70*0.9);
        }
        else {
            studio = (hari*75.20);
            apartment = (hari*68.70);
        }
        cout << "Studio - " << studio << " USD/malam\n";
        cout << "Apartement - " << apartment <<  " USD/malam\n";
    }

    else if (bulan==3)
    {
        if (hari > 14){
            studio = (hari*76);
            apartment = (hari*77*0.9);
        }
        else {
            studio = (hari*76);
            apartment = (hari*77);
        }
        cout << "Studio - " << studio << " USD/malam\n";
        cout << "Apartement - " << apartment <<  " USD/malam\n";
    }
}
