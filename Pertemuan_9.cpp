#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<string> Nama, NPM, TanggalLahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes;
    do {
        cout << "=====Menu Data Mahasiswa=====\n";
        cout << "1. Input Data Mahasiswa \n";
        cout << "2. Lihat Data Mahasiswa \n";
        cout << "3. Hapus Data Mahasiswa \n";
        cout << "4. Exit \n";
        cout << "Masukan Nomer Pilihan (1-4) : " ; cin >> pil;
        system ("cls");
        switch (pil) {
        case 1:
            cin.ignore ();
            cout << "Masukan Nama Mahasiswa : "; getline(cin, n);
            Nama.push_back (n);
            cout << "Masukan NPM Mahasiswa : "; cin>>np;
            cin.ignore();
            NPM.push_back (np);
            cout << "Masukan Tanggal Lahir : "; getline(cin, tl);
            TanggalLahir.push_back(tl);
            cout << "\nData Telah Ditemukan\n";
            cout << "Kembali Ke Menu Utama? (y/n) :"; cin >> t;
            cin.ignore () ;
            if (t == 'y' || t == 'Y') {
                tes = true;
            }else if (t == 'n' || t == 'N') {
                tes = false;
            }
            system("cls");
            break;
        case 2 :
            for (int i = 0; i<Nama.size(); i++) {
                cout << "Data Mahasiswa ke-"<<i+1<< endl;
                cout << "Nama               : " <<Nama[i]<<endl;
                cout << "NPM                : " <<NPM[i]<<endl;
                cout << "Tanggal Lahir      : " << TanggalLahir[i]<<endl;
                cout << endl;
                cout << "\nKembali Ke Menu Utama? (y/n) :"; cin >> t;
                if (t == 'y' || t == 'Y') {
                    tes = true;
                }else if (t == 'n' || t == 'N'){
                    tes = false;
                }
            }
            system("cls");
            break;
        case 3 :
            for (int i = 0; i<Nama.size (); i++) {
                cout << "Data Mahasiswa ke-"<<i+1<<endl;
                cout << "Nama              : "<<Nama[i]<<endl;
                cout << "NPM               : "<<NPM[i]<<endl;
                cout << "Tanggal Lahir     : "<<TanggalLahir[i]<<endl;
                cout<<endl;
            }
            cout << "\nData Mahasiswa Ke Berapa Yang Ingin Dihapus? (Masukan Angka) : "; cin>>h;

            Nama.erase (Nama.begin () +h-1);
            NPM.erase (NPM.begin () +h-1);
            TanggalLahir.erase (TanggalLahir.begin () +h-1);

            cout << "\nData Mahasiswa Ke-"<<h<< "Telah Dihapus" << endl;
            cout << "\nKembali Mahasiswa Ke Menu Utama? (y/n) :"; cin >> t;
            if (t == 'y' || t == 'Y') {
                tes = true;
            }else if (t == 'n' || t == 'N'){
                tes = false;
            }
            system("cls");
            break;
        default:
            cout << "\nPilihan Yang Anda Pilih Tidak Tersedia, Kembali Ke Menu Utama? (y/n): "; cin >> t;
             if (t == 'y' || t == 'Y') {
                tes = true;
            }else if (t == 'n' || t == 'N'){
                tes = false;
            }
            system("cls");
            break;
        }
    }while (tes == true);
        cout << "program Selesai";

}
