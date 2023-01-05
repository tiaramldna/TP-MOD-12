#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    ListJadwal L;
    infotype X;
    adr_jadwalP P;
    int n;

    createListJadwal_1301213185(L);

    cout << "Input banyak data: ";
    cin >> n;

    cout << endl << "---Masukan Jadwal Penerbangan---" << endl;
    for(int i = 1; i <= n; i++){
        cin.ignore();
        cout << "Penerbangan ke: " << i << endl;
        cout << "Kode: ";
        getline(cin, X.Kode);
        cout << "Jenis: ";
        getline(cin, X.Jenis);
        cout << "Tanggal: ";
        getline(cin, X.Tanggal);
        cout << "Waktu: ";
        getline(cin, X.Waktu);
        cout << "Asal: ";
        getline(cin, X.Asal);
        cout << "Tujuan: ";
        getline(cin, X.Tujuan);
        cout << "Kapasitas: ";
        cin >> X.Kapasitas;
        P = createElemenJadwal_1301213185(X);

        InsertLastJ_1301213185(L, P);
        cout << endl;
    }

    ShowJadwal_1301213185(L);
    DeleteFirstJ_1301213185(L, P);
    ShowJadwal_1301213185(L);

    cout << "Cari Data Penerbangan (Surabaya (SUB), Malang (MLG), 9 Desember 2022)" << endl;
    P = SearchJ_1301213185(L, "Surabaya (SUB)", "Malang (MLG)", "9 Desember 2022");
    if (P != nil){
        cout << info(P).Kode << " - " << info(P).Jenis << " - " << info(P).Tanggal << " - ";
        cout << info(P).Waktu << " - " << info(P).Asal << " - " << info(P).Tujuan << " - ";
        cout << info(P).Kapasitas << endl;

    } else {
        cout << "Data Tidak Ditemukan" << endl;
    }

    return 0;
}
