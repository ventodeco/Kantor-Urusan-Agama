#ifndef PENGANTIN_H_INCLUDED
#define PENGANTIN_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(L) (L).first
#define last(L) (L).last

struct ttl {
    int tgl,bln,thn;
    string tempat;
};

struct infotype {
    long nik,status;
    string nama,pekerjaan,alamat;
    ttl lahir;
};

typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
    address prev;
};


struct List {
    address first;
    address last;
};


address alokasi(infotype x);
void dealokasi(address P);
address findElm(List L, infotype x);
void printInfo(List L, address P);
infotype insertInfo();
void createList(List &L);
void insertLast(List &L, address P);
void delData(List &L, address &P);
void editList(List &L, address P);
void sortAs_nik(List &L);
void sortDes_nik(List &L);

#endif // PENGANTIN_H_INCLUDED
