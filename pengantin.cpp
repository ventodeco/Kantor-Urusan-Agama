#include "pengantin.h"

address alokasi(infotype x){
    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void dealokasi(address P){
    delete P;
}

address findElm(List L, infotype x){
    address p;
    bool cek;
    cek = false;
    if (first(L) != NULL){
        p = first(L);
        while ((cek==false) && (p != NULL)){
            if (info(p).nik == x.nik){
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

void printInfo(List L, address P){
    cout <<"\nNIK                : " <<info(P).nik <<endl;
    cout <<"Nama               : " <<info(P).nama <<endl;
    cout <<"Pekerjaan          : " <<info(P).pekerjaan <<endl;
    cout <<"Alamat             : " <<info(P).alamat <<endl;
    cout <<"Tempat Lahir       : " <<info(P).lahir.tempat <<endl;
    cout <<"Tanggal Lahir      : " <<info(P).lahir.tgl <<" - " <<info(P).lahir.bln <<" - " <<info(P).lahir.thn <<endl;
    cout <<"Status Perkawinan  : ";
    if (info(P).status == 1){
        cout <<"Lajang" <<endl;
    }
    else if (info(P).status == 2){
        cout <<"Kawin" <<endl;
    }
    else if (info(P).status == 3){
        cout <<"Cerai" <<endl;
    }
    cout <<endl;
}

infotype insertInfo(){
    infotype x;
    cout <<"\nMasukkan NIK           : ";
    cin >>x.nik;fflush(stdin);
    cout <<"Masukkan Nama          : ";
    getline(cin, x.nama);fflush(stdin);
    cout <<"Masukkan Pekerjaan     : ";
    getline(cin, x.pekerjaan);fflush(stdin);
    cout <<"Masukkan Alamat        : ";
    getline(cin, x.alamat);fflush(stdin);
    cout <<"Masukkan Tempat Lahir  : ";
    getline(cin, x.lahir.tempat);fflush(stdin);
    cout <<"Masukkan Tanggal Lahir : ";
    cin >>x.lahir.tgl;fflush(stdin);
    cout <<"Masukkan Bulan Lahir   : ";
    cin >>x.lahir.bln;fflush(stdin);
    cout <<"Masukkan Tahun Lahir   : ";
    cin >>x.lahir.thn;fflush(stdin);
    x.status = 1;
    return x;
};

void createList(List &L){
    if (first(L) != NULL){
        first(L) = NULL;
        last(L)= NULL;
    }
}

void delData(List &L, address &P){
     if(first(L)!=NULL){
        if (first(L)==last(L)){
            P = first(L);
            first(L) = NULL;
            last(L) = NULL;
        }
        else if (last(L)==P){
            P = last(L);
            last(L) = prev(last(L));
            next(last(L)) = NULL;
            prev(P) = NULL;
        }
        else if (first(L)==P){
            P = first(L);
            first(L) = next(P);
            prev(first(L)) = NULL;
            next(P) = NULL;
        }
        else{
            next(prev(P)) = next(P);
            prev(next(P)) = prev(P);
            next(P) = NULL;
            prev(P) = NULL;
        }
        dealokasi(P);
    }
}

void insertLast(List &L, address P){
    if (first(L)==NULL){
        first(L)=P;
        last(L)=P;
    }
    else {
        next(last(L))=P;
        prev(P)=last(L);
        last(L)=P;
    }
}

void editList(List &L, address P){
    infotype x;
    char pil;

    cout <<"\nData yang ingin diubah : "<<endl;
    cout <<"(1). NIK            " <<endl;
    cout <<"(2). Nama           " <<endl;
    cout <<"(3). Pekerjaan      " <<endl;
    cout <<"(4). Alamat         " <<endl;
    cout <<"(5). Tempat Lahir   " <<endl;
    cout <<"(6). Tanggal Lahir  " <<endl;
    cin>>pil;
    switch (pil) {
    case '1' :
            cout <<"Masukkan NIK baru : ";
            cin >>info(P).nik;

        break;
    case '2' :
            cout <<"Masukkan Nama baru : ";
            cin >>info(P).nama;

        break;
    case '3' :
        cout <<"Masukkan Pekerjaan baru : ";
            cin >>info(P).pekerjaan;

        break;
    case '4' :
        cout <<"Masukkan Alamat baru : ";
            cin >>info(P).alamat;

        break;
    case '5' :
        cout <<"Masukkan Tempat Lahir baru : ";
            cin >>info(P).lahir.tempat;

        break;
    case '6' :
        cout <<"Masukkan Tanggal Lahir baru : ";
            cout <<"Masukkan Tanggal Lahir : ";
            cin >>x.lahir.tgl;
            cout <<"Masukkan Bulan Lahir   : ";
            cin >>x.lahir.bln;
            cout <<"Masukkan Tahun Lahir   : ";
            cin >>x.lahir.thn;

        break;
        };

}

void sortAs_nik(List &L){
    if ((first(L) != NULL)&&(first(L)!=last(L))){
        address P,Q,Min,X,Y;
        P = first(L);
        while (P!=last(L)){
            Min = P;
            Q = next(P);
            while (Q!=NULL){
                if (info(Min).nik > info(Q).nik){
                    Min = Q;
                }
                Q = next(Q);
            }

            if (P!=Min){
                if (next(first(L))==last(L)){
                    next(Min) = P;
                    prev(P) = Min;
                    next(P) = NULL;
                    prev(Min) = NULL;
                    first(L) = Min;
                    last(L) = P;
                }
                else if ((first(L)==P)&&(last(L)==Min)){
                    X = next(P);
                    next(prev(Min)) = P;
                    prev(P) = prev(Min);
                    next(P) = NULL;
                    next(Min) = X;
                    prev(X) = Min;
                    prev(Min) = NULL;
                    first(L) = Min;
                    last(L) = P;
                    P = X;
                }
                else if ((P==first(L))&&(next(P)==Min)){
                    next(P) = next(Min);
                    prev(next(Min)) = P;
                    next(Min) = P;
                    prev(P) = Min;
                    prev(Min) = NULL;
                    first(L) = Min;
                }
                else if ((next(P)==Min)&&(Min==last(L))){
                    next(prev(P)) = Min;
                    prev(Min) = prev(P);
                    next(Min) = P;
                    prev(P) = Min;
                    next(P) = NULL;
                    last(L) = P;
                }
                else if ((P==first(L))&&(next(P)!=Min)){
                    X = next(P);
                    next(prev(Min)) = P;
                    prev(P) = prev(Min);
                    prev(next(Min)) = P;
                    next(P) = next(Min);
                    next(Min) = X;
                    prev(X) = P;
                    prev(Min) = NULL;
                    first(L) = Min;
                    P = X;
                }
                else if ((next(P)!=Min)&&(last(L)==Min)){
                    X = next(P);
                    Y = prev(P);
                    next(prev(Min)) = P;
                    prev(P) = prev(Min);
                    next(P) = NULL;
                    last(L) = P;
                    next(Y) = Min;
                    prev(Min) = Y;
                    prev(X) = Min;
                    next(Min) = X;
                    P = X;
                }
                else if (next(P)==Min){
                    next(prev(P)) = Min;
                    prev(Min) = prev(P);
                    next(P) = next(Min);
                    prev(next(Min)) = P;
                    next(Min) = P;
                    prev(P) = Min;
                }
                else {
                    X = next(P);
                    Y = prev(P);
                    next(prev(Min)) = P;
                    prev(P) = prev(Min);
                    prev(next(Min)) = P;
                    next(P) = next(Min);
                    prev(X) = Min;
                    next(Min) = X;
                    next(Y) = Min;
                    prev(Min) = Y;
                    P = X;
                }
            }
            else{
                P = next(P);
            }
        }
    }
}

void sortDes_nik(List &L){
    if ((first(L) != NULL)&&(first(L)!=last(L))){
        address P,Q,Max,X,Y;
        P = first(L);
        while (P!=last(L)){
            Max = P;
            Q = next(P);
            while (Q!=NULL){
                if (info(Max).nik < info(Q).nik){
                    Max = Q;
                }
                Q = next(Q);
            }

            if (P!=Max){
                if (next(first(L))==last(L)){
                    next(Max) = P;
                    prev(P) = Max;
                    next(P) = NULL;
                    prev(Max) = NULL;
                    first(L) = Max;
                    last(L) = P;
                }
                else if ((first(L)==P)&&(last(L)==Max)){
                    X = next(P);
                    next(prev(Max)) = P;
                    prev(P) = prev(Max);
                    next(P) = NULL;
                    next(Max) = X;
                    prev(X) = Max;
                    prev(Max) = NULL;
                    first(L) = Max;
                    last(L) = P;
                    P = X;
                }
                else if ((P==first(L))&&(next(P)==Max)){
                    next(P) = next(Max);
                    prev(next(Max)) = P;
                    next(Max) = P;
                    prev(P) = Max;
                    prev(Max) = NULL;
                    first(L) = Max;
                }
                else if ((next(P)==Max)&&(Max==last(L))){
                    next(prev(P)) = Max;
                    prev(Max) = prev(P);
                    next(Max) = P;
                    prev(P) = Max;
                    next(P) = NULL;
                    last(L) = P;
                }
                else if ((P==first(L))&&(next(P)!=Max)){
                    X = next(P);
                    next(prev(Max)) = P;
                    prev(P) = prev(Max);
                    prev(next(Max)) = P;
                    next(P) = next(Max);
                    next(Max) = X;
                    prev(X) = P;
                    prev(Max) = NULL;
                    first(L) = Max;
                    P = X;
                }
                else if ((next(P)!=Max)&&(last(L)==Max)){
                    X = next(P);
                    Y = prev(P);
                    next(prev(Max)) = P;
                    prev(P) = prev(Max);
                    next(P) = NULL;
                    last(L) = P;
                    next(Y) = Max;
                    prev(Max) = Y;
                    prev(X) = Max;
                    next(Max) = X;
                    P = X;
                }
                else if (next(P)==Max){
                    next(prev(P)) = Max;
                    prev(Max) = prev(P);
                    next(P) = next(Max);
                    prev(next(Max)) = P;
                    next(Max) = P;
                    prev(P) = Max;
                }
                else {
                    X = next(P);
                    Y = prev(P);
                    next(prev(Max)) = P;
                    prev(P) = prev(Max);
                    prev(next(Max)) = P;
                    next(P) = next(Max);
                    prev(X) = Max;
                    next(Max) = X;
                    next(Y) = Max;
                    prev(Max) = Y;
                    P = X;
                }
            }
            else{
                P = next(P);
            }
        }
    }
}

