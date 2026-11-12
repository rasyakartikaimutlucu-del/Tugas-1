
#include <iostream>
using namespace std;

int main() {
    string nama, sekolah;
    char pilih;

    do {
        cout << "Masukkan nama: ";
        cin >> nama;

        cout << "Masukkan sekolah: ";
        cin >> sekolah;

        cout << "Nama    : " << nama;
        cout << "Sekolah : " << sekolah;

        cout << "ulang lagi? (y/n): ";
        cin >> pilih;

        cout << endl;

    } while (pilih == 'y' || pilih == 'Y');

    cout << "Selesai.";

    return 0;
}
