#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <string> namaOrang;
    string nama;
    int i;

    int n=3;

    for (i=0;i<n;i++){
        cout << "Input nama orang ke-" << "(" << i+1 << ")" << ": ";
        getline(cin,nama);
        namaOrang.push_back(nama);
    }

    for (i=0;i<n-1;i++){
        cout << "Input nama orang ke-" << "(" << i+1 << ")" << ": ";
        getline(cin,nama);
        for(int j=0;j<namaOrang.size();j++)
            if(nama == namaOrang[j]){
                namaOrang.erase(namaOrang.begin()+j);
                break;
            }
    }
    cout << "Nama belum disebut: " << namaOrang[0];

    return 0;
}
