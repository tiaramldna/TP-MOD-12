#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

using namespace std;

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

typedef struct elementJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elementJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal_1301213185(ListJadwal &L);
adr_jadwalP createElemenJadwal_1301213185(infotype X);
void InsertLastJ_1301213185(ListJadwal &L, adr_jadwalP P);
void ShowJadwal_1301213185(ListJadwal L);
void DeleteFirstJ_1301213185(ListJadwal &L, adr_jadwalP P);
adr_jadwalP SearchJ_1301213185(ListJadwal L, string dari, string ke, string tanggal);


#endif // FLIGHT_H_INCLUDED
