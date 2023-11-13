#include <iostream>
using namespace std;

double a,b,hasil;
char op;

void count(double a,double b,char op,double hasil){
    switch(op){
        case '+':
            hasil = a+b;
            cout << a << " + " << b << " = " << hasil;
            break;
        case '-':
            hasil = a-b;
            cout << a << " - " << b << " = " << hasil;
            break;
        case '*':
            hasil = a*b;
            cout << a << " * " << b << " = " << hasil;
            break;
        case '/':
            hasil = a/b;
            cout << a << " / " << b << " = " << hasil;
            break;
        case '^':
            hasil = 1;
            for (int i=0;i<b;i++)
            hasil *= a;
            cout << a << " ^ " << b << " = " << hasil;
            break;
        case '!':
            hasil = 1;
            for (int i=1;i<=a;i++)
            hasil *= i;
            cout << a << "!"<< " = " << hasil;
            break;
        default:
            cout << "Operation not available";
    }
}

int main()
{
    cout << "========================" <<endl;
    cout << "|  Simple Calculator   |" <<endl;
    cout << "|      + - * / ^ !     |" <<endl;
    cout << "========================" <<endl;

    cout << "Masukkan angka pertama: ";
    cin >> a;

    cout << "Masukkan operator: ";
    cin >> op;
    {
        if(op=='!')
        cout << "";
        else{
            cout << "Masukkan angka kedua: ";
            cin >> b;}
    }

    cout << "\nHasil: \n";

    count(a,b,op,hasil);

    return 0;

}
