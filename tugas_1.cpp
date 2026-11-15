
#include <iostream>
using namespace std;

int main() {
    string nama, sekolah;
    char ulang;

    do {
        cout << "Masukkan Nama   : ";
        cin >> nama;

        cout << "Masukkan Sekolah: ";
        cin >> sekolah;

        cout << "Nama    : " << nama;
        cout << "Sekolah : " << sekolah;

        cout << "Ingin mengulang? (y/n): ";
        cin >> ulang;

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai.";

    return 0;
}
