#include <iostream>
#include <vector>
using namespace std;

vector <string> makanan, minuman;
vector <float> harga_makanan, harga_minuman;
vector <int> pesanan_makanan, pesanan_minuman, porsi_makanan, porsi_minuman;

int i,pilih,pesan,porsi,kategori;

double th_makanan,th_minuman,total_harga;
string tn_makanan,tn_minuman;

void Menu() {
    cout << "\n=============================\n";
    cout << "|       MENU RESTORAN       |\n";
    cout << "-----------------------------\n";
    cout << "| 1. Input Makananan        |\n";
    cout << "| 2. Input Minuman          |\n";
    cout << "| 3. Pemasanan Makanan      |\n";
    cout << "| 4. Pemesanan Minuman      |\n";
    cout << "| 5. Rekap Pemasanan        |\n";
    cout << "| 6. Update Harga           |\n";
    cout << "| 7. Hapus Menu             |\n";
    cout << "| 8. Hapus Pesanan Tertentu |\n";
    cout << "| 9. Exit                   |\n";
    cout << "=============================\n";
}

void inputMakanan(vector<string>& makanan, vector<float>& harga_makanan, string tn_makanan, double th_makanan) {
    cout << "Input nama makanan: ";
    getline(cin,tn_makanan);
    makanan.push_back(tn_makanan);

    cout << "Input harga makanan (K): ";
    cin >> th_makanan;
    harga_makanan.push_back(th_makanan);

    cout << "Makanan berhasil ditambahkan.\n";
}

void inputMinuman(vector<string>& minuman, vector<float>& harga_minuman, string tn_minuman, double th_minuman) {
    cout << "Input nama minuman: ";
    getline(cin,tn_minuman);
    minuman.push_back(tn_minuman);

    cout << "Input harga minuman (K): ";
    cin >> th_minuman;
    harga_minuman.push_back(th_minuman);

    cout << "Minuman berhasil ditambahkan.\n";
}

void pemasananMakanan(vector<string>& makanan, vector<float>& harga_makanan, vector<int>& pesanan_makanan, vector<int>& porsi_makanan, int pesan, int porsi, int i) {
    cout << "========== MENU MAKANAN ===========\n";
    for (i=0;i<makanan.size();i++){
        cout << "\n" << makanan[i] << " - " << harga_makanan[i] << "K" << " (kode = " << i << ")" << endl;
    }
    cout << "\n===================================";

    cout << "\nPilih makanan: ";
    cin >> pesan;
    if(pesan<makanan.size()) {
        pesanan_makanan.push_back(pesan);

        cout<<"Jumlah Porsi: ";
        cin>> porsi;
        porsi_makanan.push_back(porsi);
    }else {
        cout << "Makanan tidak tersedia, silahkan pilih kembali.\n";
    }

}

void pemesananMinuman(vector<string>& minuman, vector<float>& harga_minuman, vector<int>& pesanan_minuman, vector<int>& porsi_minuman, int pesan, int porsi, int i) {
    cout << "========== DAFTAR MINUMAN ===========\n";
    for (i=0;i<minuman.size();i++){
        cout << "\n" << minuman[i] << " - " << harga_minuman[i] << "K" << " (kode = " << i << ")" << endl;
    }
    cout << "\n=====================================";

    cout << "\nPilih minuman: ";
    cin >> pesan;
    if(pesan<minuman.size()){
        pesanan_minuman.push_back(pesan);

        cout<<"Jumlah Porsi: ";
        cin>> porsi;
        porsi_minuman.push_back(porsi);
    }else {
        cout << "Minuman tidak tersedia, silahkan pilih kembali.\n";
    }

}

void rekapPemasanan(vector<string>& makanan, vector<float>& harga_makanan, vector<string>& minuman, vector<float>& harga_minuman, vector<int>& pesanan_makanan, vector<int>& porsi_makanan, vector<int>& pesanan_minuman, vector<int>& porsi_minuman, int i, double total_harga) {
    cout << "";
    total_harga = 0;

    cout << "========= DAFTAR PESANAN =========\n";
    for (i=0;i<pesanan_makanan.size();i++){
        cout << "\n" << makanan[pesanan_makanan[i]] << " - " << harga_makanan[pesanan_makanan[i]] << "K" << " (" << porsi_makanan[i] << ") " << endl;
        total_harga += harga_makanan[pesanan_makanan[i]]*porsi_makanan[i];
    }

    for (i=0;i<pesanan_minuman.size();i++){
        cout << "\n" << minuman[pesanan_minuman[i]] << " - " << harga_minuman[pesanan_minuman[i]] << "K" << " (" << porsi_minuman[i] << ") "  << endl;
        total_harga += harga_minuman[pesanan_minuman[i]]*porsi_minuman[i];
    }
    cout << "\n----------------------------------\n";
    cout << "\nTotal harga = " << total_harga << "K" << endl;
    cout << "\n==================================\n";
}

void updateHarga(vector<string>& makanan, vector<float>& harga_makanan, string tn_makanan, double th_makanan, vector<string>& minuman, vector<float>& harga_minuman, string tn_minuman, double th_minuman, int i, int kategori){
    cout << "Kategori Menu" << "\n1. Makanan" << "\n2. Minuman" << "\nPilih kategori menu: ";
    cin >> kategori;
    cout << "\n";

    if(kategori==1){
        cout << "========== DAFTAR MAKANAN ===========\n";
        for (i=0;i<makanan.size();i++){
            cout << "\n" << makanan[i] << " - " << harga_makanan[i] << "K" << " (kode = " << i << ")" << endl;
            }
        cout << "\n=====================================";

        cout << "\nPilih makanan yang akan diupdate harganya: ";
        cin >> i;
        if(i<makanan.size()){
            cout << "Input harga baru (K): ";
            cin >> th_makanan;
            harga_makanan[i] = th_makanan;
            cout << "Harga makanan berhasil diupdate.\n";
        }else{
            cout << "Makanan tidak tersedia, silahkan pilih kembali.\n";
        }
    }

    else if(kategori==2){
        cout << "========== DAFTAR MINUMAN ===========\n";
        for (i=0;i<minuman.size();i++){
            cout << "\n" << minuman[i] << " - " << harga_minuman[i] << "K" << " (kode = " << i << ")" << endl;
        }
        cout << "\n=====================================";

        cout << "\nPilih minuman yang akan diupdate harganya: ";
        cin >> i;

        cout << "Input harga baru (K): ";
        cin >> th_minuman;
        harga_minuman[i] = th_minuman;
        cout << "Harga minuman berhasil diupdate.\n";
    }else {
        cout << "Kategori tidak tersedia, silahkan pilih kembali.\n";
    }
}

void hapusMenu(vector<string>& makanan, vector<float>& harga_makanan, vector<string>& minuman, vector<float>& harga_minuman, int i, int kategori) {
    cout << "Kategori Menu" << "\n1. Makanan" << "\n2. Minuman" << "\nPilih kategori menu: ";
    cin >> kategori;
    cout << "\n";

    if(kategori==1){
        cout << "========== DAFTAR MAKANAN ===========\n";
        for (i=0;i<makanan.size();i++){
            cout << "\n" << makanan[i] << " - " << harga_makanan[i] << "K" << " (kode = " << i << ")" << endl;
            }
        cout << "\n=====================================";

        cout << "\nPilih makanan yang akan dihapus: ";
        cin >> i;

        makanan.erase(makanan.begin()+i);
        harga_makanan.erase(harga_makanan.begin()+i);
    }
    else if(kategori==2){

        cout << "========== DAFTAR MINUMAN ===========\n";
        for (i=0;i<minuman.size();i++){
            cout << "\n" << minuman[i] << " - " << harga_minuman[i] << "K" << " (kode = " << i << ")" << endl;
        }
        cout << "\n=====================================";

        cout << "\nPilih minuman yang akan dihapus: ";
        cin >> i;

        minuman.erase(minuman.begin()+i);
        harga_minuman.erase(harga_minuman.begin()+i);
    }else {
        cout << "Kategori tidak tersedia, silahkan pilih kembali.\n";
    }
}

void hapusPesanan(vector<string>& makanan, vector<float>& harga_makanan, vector<int>& pesanan_makanan, vector<int>& porsi_makanan, vector<string>& minuman, vector<float>& harga_minuman, vector<int>& pesanan_minuman, vector<int>& porsi_minuman, int i, int kategori) {
        cout << "Kategori Menu" << "\n1. Makanan" << "\n2. Minuman" << "\nPilih kategori menu: ";
        cin >> kategori;
        cout << "\n";

        if(kategori==1){
            cout << "======= DAFTAR PESANAN MAKANAN =======\n";
            for (i=0;i<pesanan_makanan.size();i++){
                cout << "\n" << makanan[pesanan_makanan[i]] << " - " << harga_makanan[pesanan_makanan[i]] << "K" << " (" << porsi_makanan[i] << ") "  << " (kode = " << i << ")" << endl;
                total_harga += harga_makanan[pesanan_makanan[i]]*porsi_makanan[i];
            }
            cout << "\n======================================";

            cout << "\nPilih pesanan yang akan dihapus: ";
            cin >> i;

            pesanan_makanan.erase(pesanan_makanan.begin()+i);
            porsi_makanan.erase(porsi_makanan.begin()+i);
            harga_makanan.erase(harga_makanan.begin()+i);

            cout << "Pesanan berhasil dihapus.\n";
        }
        else if(kategori==2) {
            cout << "======= DAFTAR PESANAN MINUMAN =======\n";
            for (i=0;i<pesanan_minuman.size();i++){
                cout << "\n" << minuman[pesanan_minuman[i]] << " - " << harga_minuman[pesanan_minuman[i]] << "K" << " (" << porsi_minuman[i] << ") "   << " (kode = " << i << ")" << endl;
                total_harga += harga_minuman[pesanan_minuman[i]]*porsi_minuman[i];
            }
            cout << "\n=======================================";

            cout << "\nPilih pesanan yang akan dihapus: ";
            cin >> i;

            pesanan_minuman.erase(pesanan_minuman.begin()+i);
            porsi_minuman.erase(porsi_minuman.begin()+i);
            harga_minuman.erase(harga_minuman.begin()+i);

            cout << "Pesanan berhasil dihapus.\n";
        }else {
            cout << "Kategori tidak tersedia, silahkan pilih kembali.\n";
        }
}

int main() {
    makanan.push_back("Fried Rice");
    makanan.push_back("Aglio Olio");
    minuman.push_back("Orange Juice");
    minuman.push_back("Kiwi Mojito");
    harga_makanan.push_back(25);
    harga_makanan.push_back(30);
    harga_minuman.push_back(12);
    harga_minuman.push_back(15);

    bool is_lanjut = true;
    while (is_lanjut) {
        Menu();

        cout << "Pilih menu: ";
        cin >> pilih;
        cout << "\n";


        switch (pilih) {
            case 1:
                inputMakanan(makanan, harga_makanan, tn_makanan, th_makanan);
                break;
            case 2:
                inputMinuman(minuman, harga_minuman, tn_minuman, th_minuman);
                break;
            case 3:
                pemasananMakanan(makanan, harga_makanan, pesanan_makanan, porsi_makanan, pesan, porsi, i);
                break;
            case 4:
                pemesananMinuman(minuman, harga_minuman, pesanan_minuman, porsi_minuman, pesan, porsi, i);
                break;
            case 5:
                rekapPemasanan(makanan, harga_makanan, minuman, harga_minuman, pesanan_makanan, porsi_makanan, pesanan_minuman, porsi_minuman, i, total_harga);
                break;
            case 6:
                updateHarga(makanan, harga_makanan, tn_makanan, th_makanan, minuman, harga_minuman, tn_minuman, th_minuman, i, kategori);
                break;
            case 7:
                hapusMenu(makanan,harga_makanan,minuman,harga_minuman,i,kategori);
                break;
            case 8:
                hapusPesanan(makanan, harga_makanan, pesanan_makanan, porsi_makanan, minuman, harga_minuman, pesanan_minuman, porsi_minuman, i, kategori);
                break;
            case 9:
                is_lanjut = false;
                cout << "Program berhenti.\n";
                break;
            default:
                cout << "Pilihan tidak tersedia, silahkan pilih kembali.\n";
                break;
        }
    }

    return 0;
}
