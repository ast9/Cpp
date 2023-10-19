#include <iostream>

using namespace std;

int main()
{
    int n;
    string bulan;
    cout << "Bulan menginap: ";
    cin >> bulan;
    cout << "Berapa malam? ";
    cin >> n;
    float studio, apartemen, biaya_studio, biaya_apartemen;
    float diskon_studio, diskon_apartemen;
    if(bulan == "mei" || bulan == "oktober"){
        studio = 50;
        apartemen = 65;
        if(n > 14){
            diskon_studio = 30;
        }else if (n > 7){
            diskon_studio = 5;
        }
    }else if(bulan == "juni" || bulan == "september"){
        studio = 75.20;
        apartemen = 68.70;
        if(n > 14)
            diskon_studio = 20;
    }else if(bulan == "juli" || bulan == "agustus"){
        studio = 76;
        apartemen = 77;
    }
    if(n > 14)
        diskon_apartemen = 10;

    biaya_apartemen = apartemen * n;
    biaya_apartemen = biaya_apartemen - (diskon_apartemen * biaya_apartemen/100);

    biaya_studio = studio * n;
    biaya_studio = biaya_studio - (diskon_studio * biaya_studio/100);

    cout << "Apartemen: " << biaya_apartemen << endl;
    cout << "Studio: " << biaya_studio;

    return 0;
}
