#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Berapa banyak siswa? ";
    cin >> n;

    float nilai,total_nilai;
    int n1,n2,n3;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    total_nilai = 0;

    for (int i=1;i<=n;i++){
        cout << "Nilai siswa ke- " << i << ": ";
        cin >> nilai;

    if (nilai >= 8 && nilai <= 10){
        n1++;
    }

    else if (nilai >=6.5 && nilai <8){
        n2++;
    }

    else if (nilai <6.5){
        n3++;
    }
    total_nilai += nilai;
    }

    cout << "Baik sekali: " << ((float)n1/n) * 100.0 << "%" << endl;
    cout << "Baik: " << ((float)n2/n) * 100.0 << "%" << endl;
    cout << "Kurang: " << ((float)n3/n) * 100.0 << "%" << endl;
    cout << "Rata-rata Nilai: " << total_nilai/n;

    return 0;
}
