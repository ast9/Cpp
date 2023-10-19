#include <iostream>

using namespace std;

int main()
{
   double count, temp;
   int choice;

   cout<<"Nama: Tsabitul Azmi Rizqullah\n";
   cout<<"NIM: 2304140049\n";
   cout<<"Kelompok: Arduino (14)\n";
   cout<<"Prodi: Sistem Informasi\n"<<endl;

   cout<<"Pilihan Menu:\n";
   cout<<"1. Celsius ke Fahrenheit\n";
   cout<<"2. Fahrenheit ke Celsius\n"<<endl;
   cout<<"Masukkan pilihan: ";
   cin>>choice;

   if(choice==1)
    {
    cout<<"Masukkan suhu dalam celsius: ";
    cin>>temp;
    count=(temp*9/5)+32;
    cout<<"Suhu dalam fahrenheit adalah: "<<count<<" Fahrenheit"<<endl;
    }

   else if(choice==2)
    {
    cout<<"Masukkan suhu dalam fahrenheit: ";
    cin>>temp;
    count=(temp-32)*5/9;
    cout<<"Suhu dalam celsius adalah: "<<count<<" Celsius"<<endl;
   }

   return 0;
}

