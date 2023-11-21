#include <iostream>
#include <vector>
using namespace std;

struct sekolah {
    string nama_sekolah;
    int jml_siswa;
    bool is_negeri;
    char negeri;
};

int main()
{
    vector <string> menu = {
        "\n1. Input data sekolah",
        "2. Rekap data sekolah",
        "3. Exit"
    };
    int i,pilih,total_negeri,total_swasta;
    bool is_running = true;
    vector <sekolah> data_sekolah;
    sekolah tmp_sekolah;

    while(is_running){
        for(i=0;i<menu.size();i++){
            cout << menu [i] << endl;
        }
        cout << "Pilih menu: ";
        cin >> pilih;
        cin.get();
        switch(pilih){
            case 1:
                cout << "\nNama sekolah: ";
                getline(cin,tmp_sekolah.nama_sekolah);
                cout << "Jumlah siswa: ";
                cin >> tmp_sekolah.jml_siswa;
                cin.get();
                cout << "Apakah negeri? (1: Negeri, 0: Swasta): ";
                cin >> tmp_sekolah.is_negeri;
                cin.get();
                data_sekolah.push_back(tmp_sekolah);
                break;
            case 2:
                total_negeri = 0;
                total_swasta = 0;
                for(i=0;i<data_sekolah.size();i++){
                    if(data_sekolah[i].is_negeri == true){
                        total_negeri += data_sekolah[i].jml_siswa;
                    }else{
                        total_swasta += data_sekolah[i].jml_siswa;
                    }
                }
                cout << "\nJumlah siswa negeri: " << total_negeri << endl;
                cout << "Jumlah siswa swasta: " << total_swasta << endl;
                break;
            case 3:
                is_running = false;
                break;
        }
    }
    return 0;
}
