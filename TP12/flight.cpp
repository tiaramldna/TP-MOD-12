#include "flight.h"

void createListJadwal_1301213185(ListJadwal &L){
    first(L) = nil;
}

adr_jadwalP createElemenJadwal_1301213185(infotype X){
    adr_jadwalP P = new elementJadwal;

    info(P) = X;
    next(P) = nil;

    return P;
}

void InsertLastJ_1301213185(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP Q = first(L);

    if (first(L) == nil){
        first(L) = P;
    } else {
        while (next(Q) != nil){
            Q = next(Q);
        }

        next(Q) = P;
    }
}

void ShowJadwal_1301213185(ListJadwal L){
    adr_jadwalP P = first(L);

    if (first(L) == nil){
        cout << "List Kosong" << endl;
    } else {
        cout << "Kode\t" << "Jenis\t\t" << "Tanggal\t\t" << "Waktu\t";
        cout << "Asal\t\t" << "Tujuan\t\t" << "Kapasitas" << endl;
        while (P != nil){
            cout << info(P).Kode << "\t" << info(P).Jenis << "\t" << info(P).Tanggal << "\t";
            cout << info(P).Waktu << "\t" << info(P).Asal << "\t" << info(P).Tujuan << "\t";
            cout << info(P).Kapasitas << endl;
            P = next(P);
        }
        cout << endl;
    }
}

void DeleteFirstJ_1301213185(ListJadwal &L, adr_jadwalP P){
    if(first(L) == nil){
        cout << "List Kosong" << endl;
    }else if(next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
        next(P) = nil;
    }else{
        P = first(L);
        first(L) = next(first(L));
        next(P) = nil;
    }
}

adr_jadwalP SearchJ_1301213185(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP P = first(L);
    if(first(L) != nil){
        while(P != nil){
            if(info(P).Asal == dari && info(P).Tujuan == ke && info(P).Tanggal == tanggal){
                return P;
            }
            P = next(P);
        }
    }
    return nil;
}

