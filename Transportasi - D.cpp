#include <iostream>

using namespace std;

int main()
{
    int n;
    char is_siang;
    string jenis;
    float biaya;
    cout << "Input n = ";
    cin >> n;
    cout << "Siang? (Y/N)";
    cin >> is_siang;
    if(n >= 100)
    {
        jenis = "Kereta";
        biaya = 0.006*n;
    }
    else if(n >=20)
    {
        jenis = "Bis";
        biaya = 0.09*n;
    }
    else
    {
        jenis = "Taksi";
        biaya = 0.7;
        if(is_siang == 'Y')
        {
            biaya = biaya + (0.79*n);
        }
        else
        {
            biaya = biaya + (0.9*n);
        }
    }

    cout << jenis << ", " << biaya << " USD";
    return 0;
}
