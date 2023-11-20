#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar;

    // Input jumlah motor, jumlah mobil, jam masuk, dan jam keluar
    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;

    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;

    cout << "Masukkan jam masuk: ";
    cin >> jamMasuk;

    cout << "Masukkan jam keluar: ";
    cin >> jamKeluar;

    // Menghitung durasi parkir dalam jam
    int durasiParkir = jamKeluar - jamMasuk;

    // Menghitung total pendapatan
    int biayaMotor = 2000 * jumlahMotor * durasiParkir;
    int biayaMobil = 5000 * jumlahMobil * durasiParkir;
    int totalPendapatan = biayaMotor + biayaMobil;

    // Output total pendapatan
    cout << "Total pendapatan Anda sebagai penjaga portal parkir UNISBA adalah Rp " << totalPendapatan << ",-";

    return 0;
}