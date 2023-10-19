#include <iostream>

using namespace std;

int main()
{
    float Y;
    float Z;

    int V;
    cout << "Masukkan volume kolam\n";
    cin >> V;

    int P1;
    cout << "Masukkan debit air pipa 1\n";
    cin >> P1;

    int P2;
    cout << "Masukkan debit air pipa 2\n";
    cin >> P2;

    int N;
    cout << "Masukkan waktu pengisian kolam\n";
    cin >> N;

    float total_air = P1*N + P2*N;

    if (V >= total_air)
    {
        float persen_full = (total_air*100/V);
        Y = (P1*N*100/total_air);
        Z = (P2*N*100/total_air);
        cout << "Kolamnya " << persen_full << "% penuh. Pipa 1:" << Y << "%. Pipa 2:" << Z << "%";
    }

    else
    {
        Y = total_air - V;
        cout << "Selama " << N << " jam, air di kolam meluap sebanyak " << Y << " liter";
    }


    return 0;
}
