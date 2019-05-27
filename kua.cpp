#include "kua.h"

address_r alokasi_r(address x, address y, infotype_r r){
    address_r P;
    P = new elmlist_r;
    info(P).id_surat = r.id_surat;
    info(P).tanggal_r.tgl = r.tanggal_r.tgl;
    info(P).tanggal_r.bln = r.tanggal_r.bln;
    info(P).tanggal_r.thn = r.tanggal_r.thn;
    info(P).status_surat = r.status_surat;
    info(P).nama_p = r.nama_p;
    info(P).nama_w = r.nama_w;
    info(P).nik_p = r.nik_p;
    info(P).nik_w = r.nik_w;
    next(P) = NULL;
    prev(P) = NULL;
    up(P) = x;
    down(P) = y;
    return P;
}

address_r alokasi_rce(infotype_r r){
    address_r P;
    P = new elmlist_r;
    info(P).id_surat = r.id_surat;
    info(P).tanggal_r.tgl = r.tanggal_r.tgl;
    info(P).tanggal_r.bln = r.tanggal_r.bln;
    info(P).tanggal_r.thn = r.tanggal_r.thn;
    info(P).status_surat = r.status_surat;
    info(P).nama_p = r.nama_p;
    info(P).nama_w = r.nama_w;
    info(P).nik_p = r.nik_p;
    info(P).nik_w = r.nik_w;
    next(P) = NULL;
    prev(P) = NULL;
    up(P) = NULL;
    down(P) = NULL;
    
    return P;
}

address_r findElm_rt(List_r L, address X){
    address_r p;
    bool cek;
    cek = false;
    if (first(L) != NULL){
        p = first(L);
        while ((cek==false) && (p != NULL)){
            if (up(p) == X){
                cek = true;
            }
            else {
                p = next(p);
            }
        }
    }
    if (cek==true) {
        return p;
    }
    else{
        return NULL;
    }
}

address_r findElm_rs(List_r L, address X){
    address_r p;
    bool cek;
    cek = false;
    if (first(L) != NULL){
        p = first(L);
        while ((cek==false) && (p != NULL)){
            if (down(p) == X){
                cek = true;
            }
            else {
                p = next(p);
            }
        }
    }
    if (cek==true) {
        return p;
    }
    else{
        return NULL;
    }
}

void createList_r(List_r &L){
    if (first(L) != NULL){
        first(L) = NULL;
        last(L)= NULL;
    }
}

void delData_r(List_r &L, address_r &P){
     if(first(L)!=NULL){
        up(P) = NULL;
        down(P) = NULL;
    }
}

void insertFirst_r(List_r &L, address_r P){
    if (first(L)==NULL){
        first(L)=P;
        last(L)=P;
        prev(P)=NULL;
    }
    else {
        next(P)=first(L);
        prev(first(L))=P;
        first(L)=P;
    }
}

