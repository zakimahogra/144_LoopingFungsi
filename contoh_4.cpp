#include <iostream>
using namespace std;

int ntelor, nMie, nAir;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "Masukan Nama =";
    cin >> nama;
    cout << "Masukan Jumlah Telur =";
    cin >> ntelor;
    cout << "Masukan Jumlah Mie =";
    cin >> nMie;
    cout << "Masukan Jumlah Air Mineral =";
    cin >> nAir;
}

int hitungHarga() {
    return (ntelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
    cout << "Nama = " << nama << endl;
    cout << "Jumlah Telor = " << ntelor << endl;
    cout << "Jumlah Mie = " << nMie << endl;
    cout << "Jumlah Air Mineral = " << nAir << endl;
    cout << "Total Harga Rp." << hitungHarga() <<endl;
}

int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout <<"Apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;

        system("cls");

    } while (pilihan == 'y' || pilihan == 'Y');
}
