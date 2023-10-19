#include <iostream>
using namespace std;

int main()
{
    double count;

    int jarak;
    cout << "Masukkan jarak dalam KM:\n";
    cin >> jarak;

    int kondisi;
    cout << "Masukkan pilihan waktu:\n";
    cout << "1. Siang\n";
    cout << "2. Malam\n";
    cin >> kondisi;

    if (jarak >= 100)
    {
        count = (jarak*0.06);
        cout << "Transport dengan harga terendah adalah:\n";
        cout << "Kereta dengan harga " << count << " USD";
    }

    else if (jarak >= 20)
    {
        count = (jarak*0.09);
        cout << "Transport dengan harga terendah adalah:\n";
        cout << "Bis dengan harga " << count << " USD";
    }

    else
    {
        if(kondisi==1)
        {
            count = (0.7 + 0.79*jarak);
            cout << "Transport dengan harga terendah adalah:\n";
            cout << "Taksi dengan harga " << count << " USD";
        }
        else
        {
            count = (0.7 + 0.9*jarak);
            cout << "Transport dengan harga terendah adalah:\n";
            cout << "Taksi dengan harga " << count << " USD";
        }

    }

    return 0;
}
