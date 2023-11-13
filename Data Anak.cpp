#include <iostream>

using namespace std;

int main()
{
    string nama_anak[30];
    int n_anak = 0;
    string menu[3] = {
        "\n1. Input nama",
        "2. Cari nama",
        "3. Exit",
    };

    bool is_lanjut = true;
    bool is_found;
    int i,pilih;
    string keyword;
    while(is_lanjut){
        for(i=0;i<3;i++){
            cout << menu[i] << endl;
        }
        cout << "Pilih menu: ";
        cin >> pilih;
        cin.get();
        switch(pilih){
            case 1:
                cout << "Input nama anak: ";
                getline(cin,nama_anak[n_anak]);
                n_anak++;
            break;
            case 2:
                cout << "Masukkan kata kunci: ";
                getline(cin,keyword);
                is_found = false;
                for(i=0;i<n_anak;i++){
                    if(nama_anak[i] == keyword){
                        is_found = true;
                        break;
                    }
                }
                if(is_found){
                    cout << "Data anak ditemukan!\n";
                }else{
                    cout << "Data anak tidak ditemukan!\n";
                }
            break;
            case 3:
                is_lanjut = false;
            break;

        }
    }

    return 0;
}
