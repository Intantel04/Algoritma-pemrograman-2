#include <iostream>

using namespace std;

struct dataMahasiswa
{
    string nama, alamat, prodi;
    int nim, tanggal_lahir;
};

int main(){
    dataMahasiswa data;

    cout << "Nama            : ";
    cin.ignore(); // Menambahkan baris ini untuk mengabaikan karakter newline
    getline(cin, data.nama); // Menggunakan getline() untuk mengambil input nama

    cout << "NIM             : ";
    cin >> data.nim;

    cout << "Tanggal lahir   : ";
    cin >> data.tanggal_lahir;

    cout << "Alamat          : ";
    cin.ignore(); // Menambahkan baris ini untuk mengabaikan karakter newline
    getline(cin, data.alamat); // Menggunakan getline() untuk mengambil input alamat

    cout << "Program studi   : ";
    cin >> data.prodi;

    cout << endl;

    cout << "Nama            : " << data.nama << endl;
    cout << "NIM             : " << data.nim << endl;;
    cout << "Tanggal lahir   : " << data.tanggal_lahir << endl;;
    cout << "Alamat          : " << data.alamat << endl;;
    cout << "Program studi   : " << data.prodi << endl;;

    return 0;
}
