#ifndef KUA_H_INCLUDED
#define KUA_H_INCLUDED

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define up(P) P->up
#define down(P) P->down
#define info(P) P->info
#define first(L) (L).first
#define last(L) (L).last

struct tanggal{
	int tgl, bln, thn;
};

struct infotype_r{
	int id_surat, status_surat;
	tanggal tanggal_r;
	string nama_p, nama_w;
	long nik_p, nik_w;
	
};

typedef struct elmlist *address;
typedef struct elmlist_r *address_r;

struct elmlist_r{
	infotype_r info;
    address_r next;
    address_r prev;
    address up;
    address down;
    
};

struct List_r {
    address_r first;
    address_r last;
};

address_r alokasi_r(address x, address y, infotype_r r);
address_r alokasi_rce(infotype_r r);
address_r findElm_rs(List_r L, address X);
address_r findElm_rt(List_r L, address X);
address findElm_ri(List_r L, address Y);
void createList_r(List_r &L);
void insertFirst_r(List_r &L, address_r P);
void delData_r(List_r &L, address_r &P);


#endif // KUA_H_INCLUDED
