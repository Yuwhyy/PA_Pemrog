#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ulangi = 'y';
    int counter = 0;

    cout << "===RUMAH MAKAN MAS YUWAN===" << endl;
    cout << endl;
    cout << "Selamat Datang di Rumah Makan Mas Yuwan !!" << endl;
    cout << "Silahkan Mba/Mas Mau pesan apa ??" << endl;
    cout << endl;
    
    do
    {
        int pilihan;
        cout << "\nMenu\n";
        cout << "1. Mau Lihat Daftar Makanan" << endl;
        cout << "2. Mau Lihat Daftar Minuman" << endl;
        cout << "3. Mau Lihat Daftar Makanan Penutup" << endl;
        cout << "Mau Pilih Yang Mana:";
        cin >> pilihan;

        switch (pilihan)
        {

        case 1:
        cout << "\n===DAFTAR MAKANAN===" << endl;
        cout << endl;
        cout << "1. Sayur Kangkung" << setw(29) << "Rp.10000" << endl;
        cout << "2. Ayam Bakar + Nasi" << setw(26) << "Rp.25000" << endl;
        cout << "3. Ayam Goreng + Nasi" << setw(25) << "Rp.20000" << endl;
        cout << "4. Ikan Bakar + Nasi" << setw(26) << "Rp.28000" << endl;
        cout << "5. Ikan Goreng + Nasi" << setw(25) << "Rp.24000" << endl;
        cout << "6. Pepes Ayam" << setw(32) << "Rp.7000" << endl;
        cout << "7. Pepes Ikan" << setw(32) << "Rp.9000" << endl;
        cout << "8. Sayur Asam" << setw(33) << "Rp.10000" << endl;
        cout << "9. Nasi" << setw(38) << "Rp.3000" << endl;
        cout << endl;
        cout << endl;
        break;


        case 2:
        cout << "===DAFTAR MINUMAN===" << endl;
        cout << endl;
        cout << "1. Teh Manis Hangat/Dingin" << setw(16) << "Rp.6000" << endl;
        cout << "2. Teh Tawar Hangat/Dingin" << setw(16) << "Rp.5000" << endl;
        cout << "3. Kopi Hitam" << setw(29) << "Rp.5000" << endl;
        cout << "4. Es Kemasan" << setw(29) << "Rp.3000" << endl;
        cout << "5. Es Jeruk" << setw(31) << "Rp.7000" << endl;
        cout << endl;
        cout << endl;
        break;

        case 3 : 
        cout << "1. Es Doger" << setw(16) << "Rp.8000" << endl;
        cout << "2. Putu" << setw(21) << "Rp.10000" << endl;
        cout << "3. Es Krim" << setw(17) << "Rp.7000" << endl;
        cout << "4. Puding" << setw(18) << "Rp.4000" << endl;
        cout << endl;
        cout << endl;
        break;

        default:
        cout << "COBA YANG BENER MILIH TEH !!!" << endl;
        }


        cout << "Apakah Kamu Ingin Mengulang?" << endl;
        cout << "Jawab (y/t) : ";
        cin >> ulangi;

        // Increment Counter 
        counter++;
    } while (ulangi == 'y');

//    member untuk struct
//    diskon untuk orang bernama agus dan untuk minimal belanja 
//    fungsi untuk hitung diskon
//    array untuk pesanan makanan
//    operator perhitungan jumlah harga dan perhitungan lainnya
    
}
