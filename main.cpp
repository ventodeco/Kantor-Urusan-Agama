#include "kua.h"
#include "pengantin.h"

int main()
{
    int  j;
    char menu, pil, pol, pel;
    List pria, wanita;
    infotype x, s, i, a;
    infotype_r r, z;
    address P, X, Y, Z;
    createList(pria);
    createList(wanita);

    List_r kawin;
    createList_r(kawin);
    address_r Q, R;
	
	x.nama = "Qhawa Rosha Tamara";
	x.nik = 1303180081;
	x.alamat = "RT 02 RW 04, Wonogiri";
	x.lahir.tempat = "Solo";
	x.lahir.tgl = 8;
	x.lahir.bln = 1;
	x.lahir.thn = 1998;
	x.pekerjaan = "Guru";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(wanita, P);
	
	x.nama = "Bilqisthi Alya Khoirunisa";
	x.nik = 1303180082;
	x.alamat = "RT 01 RW 03, Wonogiri";
	x.lahir.tempat = "Medan";
	x.lahir.tgl = 10;
	x.lahir.bln = 5;
	x.lahir.thn = 1999;
	x.pekerjaan = "Pegawai Pajak";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(wanita, P);
	
	x.nama = "Eni Kristina Damayanti";
	x.nik = 1303180083;
	x.alamat = "RT 01 RW 04, Patuk Kidul";
	x.lahir.tempat = "Giriwoyo";
	x.lahir.tgl = 23;
	x.lahir.bln = 11;
	x.lahir.thn = 1983;
	x.pekerjaan = "Wiraswasta";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(wanita, P);
	
	x.nama = "Sarah Viloid";
	x.nik = 1303180084;
	x.alamat = "RT 05 RW 07, Giriwoyo";
	x.lahir.tempat = "Paranggupito";
	x.lahir.tgl = 25;
	x.lahir.bln = 8;
	x.lahir.thn = 1994;
	x.pekerjaan = "Youtuber";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(wanita, P);
		
	x.nama = "Ahmad Adi Kurniawan";
	x.nik = 1303180071;
	x.alamat = "RT 11 RW 10, Baturetno";
	x.lahir.tempat = "Jakarta";
	x.lahir.tgl = 13;
	x.lahir.bln = 7;
	x.lahir.thn = 1996;
	x.pekerjaan = "Wiraswasta";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(pria, P);
	
	x.nama = "Dwi Riyanto";
	x.nik = 1303180072;
	x.alamat = "RT 04 RW 14, Baturetno";
	x.lahir.tempat = "Wonogiri";
	x.lahir.tgl = 4;
	x.lahir.bln = 1;
	x.lahir.thn = 1977;
	x.pekerjaan = "Swasta";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(pria, P);
	
	x.nama = "Rantau Gangga";
	x.nik = 1303180073;
	x.alamat = "RT 03 RW 12, Sukabumi";
	x.lahir.tempat = "Palembang";
	x.lahir.tgl = 2;
	x.lahir.bln = 3;
	x.lahir.thn = 1999;
	x.pekerjaan = "Dokter Hewan";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(pria, P);
	
	x.nama = "Adrian Seno Aji";
	x.nik = 1303180074;
	x.alamat = "RT 05 RW 08, Bekasi";
	x.lahir.tempat = "Jakarta";
	x.lahir.tgl = 5;
	x.lahir.bln = 1;
	x.lahir.thn = 1998;
	x.pekerjaan = "Insinyur";
	x.status = 1;
	
	P = alokasi(x);
	insertLast(pria, P);
	
	
    do {
        system("cls");
        cout <<"|-------------------------------------------------------------|" << endl;
		cout <<"|          APLIKASI ADMINISTRASI KANTOR URUSAN AGAMA          |" << endl;
        cout <<"|-------------------------------------------------------------|" << endl;
		cout <<"|  1. Data Calon Pengantin                                    |" << endl;
        cout <<"|  2. Data Pernikahan                                         |" << endl;
        cout <<"|  0. Exit                                                    |" << endl;
        cout <<"|-------------------------------------------------------------|" << endl;
        cout <<"\nPilihan : ";
        cin >>menu;
//# Calon Pengantin #################################################################################################################
        if (menu == '1'){
            do{
                system("cls");
                cout <<"|--------------------------------------------------------------|" << endl;
			    cout <<"|       APLIKASI ADMINISTRASI KANTOR URUSAN AGAMA              |" << endl;
			    cout <<"|--------------------------------------------------------------|" << endl;
                cout <<"| Data Calon Pengantin                                         |" << endl;
                cout <<"|  1. Input Data                                               |" << endl;
				cout <<"|  2. Delete Data                                              |" << endl;
                cout <<"|  3. Edit Data                                                |" << endl; 
				cout <<"|  4. Search Data                                              |" << endl;
                cout <<"|  5. Show Data                                                |" << endl; 
				cout <<"|  6. Sort Data                                                |" << endl;
                cout <<"|  0. Back                                                     |" << endl;
                cout <<"|---------------------------------------------------------------" << endl;
                cout <<"\nPilihan : ";
                cin >>pil;

                switch (pil){
                case '1' :
// INPUT ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    do{
                        system("cls");
                        cout <<"|---------------------------|" << endl;
						cout <<"|       INPUT DATA          |" << endl;
                        cout <<"|---------------------------|" << endl;
						cout <<"| 1. Input Data Pria        |" << endl;
                        cout <<"| 2. Input Data Wanita      |" << endl;
                        cout <<"| 0. Back                   |" << endl;
                        cout <<"|---------------------------|" << endl;
                        cout <<"\nPilihan : ";
                        cin >> pol;
                        switch (pol){
                            case '1' :
                                cout <<"1. Input Data Pria  " <<endl;
                                x = insertInfo();
                                P = alokasi(x);
                                insertLast(pria, P);
                                getch();
                                break;
                            case '2' :
                                cout <<"2. Input Data Wanita  " <<endl;
                                x = insertInfo();
                                P = alokasi(x);
                                insertLast(wanita, P);
                                getch();
                                break;
                            case '0'  : break;
                            default : break;
                        }
                    }while (pol != '0');
                    break;
// INPUT ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '2' :
// DELETE ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    do{
                        system("cls");
                        cout <<"|---------------------------------|" << endl;
						cout <<"|           DELETE DATA           |" <<endl <<endl;
                        cout <<"|---------------------------------|" << endl;
						cout <<"|  1. Delete Data Pria            |" <<endl;
                        cout <<"|  2. Delete Data Wanita          |" <<endl;
                        cout <<"|  0. Back                        |" <<endl;
                        cout <<"|---------------------------------|" << endl;
                        cout <<"\nPilihan : ";
                        cin >>pol;
                        switch (pol){
                            case '1' :
                                cout <<"1. Delete Data Pria  " <<endl;
                                cout <<"Masukkan NIK : ";
                                cin >>x.nik;
                                P = findElm(pria, x);
                                if (P == NULL){
                                    cout <<"Data tidak ditemukan" <<endl;
                                }
                                else{
                                    Q = findElm_rt(kawin, P);
                                    while (Q != NULL){
                                        info(down(Q)).status = 3;
                                        delData_r(kawin, Q);
                                        Q = findElm_rt(kawin, P);
                                    }
                                    delData(pria, P);
                                    cout <<"Data berhasil dihapus" <<endl;
                                }
                                getch();
                                break;
                            case '2' :
                                cout <<"2. Delete Data Wanita  " <<endl;
                                cout <<"Masukkan NIK : ";
                                cin >>x.nik;
                                P = findElm(wanita, x);
                                if (P == NULL){
                                    cout <<"Data tidak ditemukan" <<endl;
                                }
                                else{
                                    Q = findElm_rs(kawin, P);
                                    while (Q != NULL){
                                        info(up(Q)).status = 3;
                                        delData_r(kawin, Q);
                                        Q = findElm_rs(kawin, P);
                                    }
                                    delData(wanita, P);
                                    cout <<"Data berhasil dihapus" <<endl;
                                }
                                getch();
                                break;
                            case '0'  : break;
                            default : break;
                        }
                    }while (pol != '0');
                    break;
// DELETE ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '3' :
// EDIT ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    do{
                        system("cls");
                        cout <<"|-------------------------------|" << endl;
						cout <<"|            EDIT DATA          |" <<endl <<endl;
                        cout <<"|-------------------------------|" << endl;
						cout <<"|1. Edit Data Pria              |" <<endl;
                        cout <<"|2. Edit Data Wanita            |" <<endl;
                        cout <<"|0. Back                        |" <<endl;
                        cout <<"|-------------------------------|" << endl;
						cout <<"\nPilihan : ";
                        cin >>pol;
                        switch (pol){
                            case '1' :
                                cout <<"1. Edit Data Pria  " <<endl;
                                cout <<"Masukkan NIK : ";
                                cin >>x.nik;
                                P = findElm(pria, x);
                                if (P == NULL){
                                    cout <<"Data tidak ditemukan" <<endl;
                                }
                                else{
                                    editList(pria, P);
                                    cout <<"Data yang telah diubah : " <<endl;
                                    printInfo(pria, P);
                                }
                                getch();
                                break;
                            case '2' :
                                cout <<"2. Edit Data Wanita  " <<endl;
                                cout <<"Masukkan NIK : ";
                                cin >>x.nik;
                                P = findElm(wanita, x);
                                if (P == NULL){
                                    cout <<"Data tidak ditemukan" <<endl;
                                }
                                else{
                                    editList(wanita, P);
                                    cout <<"Data yang telah diubah : " <<endl;
                                    printInfo(wanita, P);
                                }
                                getch();
                                break;
                            case '0'  : break;
                            default : break;
                        }
                    }while (pol != '0');
                    break;
// EDIT ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '4' :
// SEARCH ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    do{
                        system("cls");
                        cout <<"|--------------------------------------|" << endl;
						cout <<"|            SEARCH DATA               |" <<endl <<endl;
                        cout <<"|--------------------------------------|" << endl;
						cout <<"|1. Search Data Pria                   |" <<endl;
                        cout <<"|2. Search Data Wanita                 |" <<endl;
                        cout <<"|3. Search Data Pasangan               |" <<endl;
                        cout <<"|0. Back                               |" <<endl;
                        cout <<"|--------------------------------------|" << endl;
						cout <<"\nPilihan : ";
                        cin >>pol;
                        switch (pol){
                            case '1' :
                                cout <<"1. Search Data Pria  " <<endl;
                                cout <<"Masukkan NIK : ";
                                cin >>x.nik;
                                P = findElm(pria, x);
                                if (P == NULL){
                                    cout <<"Data tidak ditemukan" <<endl;
                                }
                                else{
                                    printInfo(pria, P);
                                }
                                getch();
                                break;
                            case '2' :
                                cout <<"2. Search Data Wanita  " <<endl;
                                cout <<"Masukkan NIK : ";
                                cin >>x.nik;
                                P = findElm(wanita, x);
                                if (P == NULL){
                                    cout <<"Data tidak ditemukan" <<endl;
                                }
                                else{
                                    printInfo(wanita, P);
                                }
                                getch();
                                break;
                            case '3' :
                                cout <<"3. Search Data Pasangan  " <<endl;
                                cout <<"\t1. Search Data Suami " <<endl;
                                cout <<"\t2. Search Data Wanita  " <<endl;
                                cout <<"\t0. Back" <<endl;
                                cout <<"\nPilihan : ";
                                cin >>pel;
                                switch (pel){
                                    case '1' :
                                        cout <<"1. Search Data Suami  " <<endl;
                                        cout <<"Masukkan NIK Wanita : ";
                                        cin >>x.nik;
                                        Y = findElm(wanita, x);
                                        if (Y == NULL){
                                            cout <<"Data tidak ditemukan" <<endl;
                                        }
                                        else{
                                            if (info(Y).status == 2 ) {
                                                Q = findElm_rs(kawin, Y);
                                                printInfo(pria, up(Q));
                                            }
                                            else{
                                                cout <<"\n  Data yang dimasukkan tidak memiliki pasangan" <<endl;
                                            }
                                        }
                                        getch();
                                        break;
                                    case '2' :
                                        cout <<"2. Search Data Istri  " <<endl;
                                        cout <<"Masukkan NIK Pria : ";
                                        cin >>x.nik;
                                        X = findElm(pria, x);
                                        if (X == NULL){
                                            cout <<"Data tidak ditemukan" <<endl;
                                        }
                                        else{
                                            if (info(X).status == 2 ) {
                                                Q = first(kawin);
                                                while (Q != NULL) {
                                                    if ( up(Q) == X){
                                                        printInfo(wanita, down(Q));
                                                    }
                                                }
                                            }
                                            else{
                                                cout <<"\n  Data yang dimasukkan tidak memiliki pasangan" <<endl;
                                            }
                                        }
                                        getch();
                                        break;
                                        case '0'  : break;
                                        default : break;
                                        }

                                break;
                            case '0'  : break;
                            default : break;
                        }
                    }while (pol != '0');
                    break;
// SEARCH ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '5' :
// SHOW ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    do{
                        system("cls");
                        cout <<"|-------------------------------------|" << endl;
						cout <<"|            SHOW DATA                |" <<endl <<endl;
                        cout <<"|-------------------------------------|" << endl;
						cout <<"| 1. Show Data Pria                   |" <<endl;
                        cout <<"| 2. Show Data Wanita                 |" <<endl;
                        cout <<"| 0. Back                             |" <<endl;
                        cout <<"|-------------------------------------|" << endl;
                        cout <<"\nPilihan : ";
                        cin >>pol;
                        switch (pol){
                            case '1' :
                                cout <<"1. Show Data Pria  " <<endl;
                                if(first(pria) == NULL){
                                    cout <<"Data Kosong" <<endl;
                                    getch();
                                }
                                else{
                                    P = first(pria);
                                    j = 1;
                                    while(P != NULL){
                                        cout <<"(" <<j <<").___________________________________________________________" <<endl;
                                        printInfo(pria, P);
                                        P = next(P);
                                        j++;
                                        getch();
                                    }
                                }

                                break;
                            case '2' :
                                cout <<"2. Show Data Wanita  " <<endl;
                                if(first(wanita) == NULL){
                                    cout <<"Data Kosong" <<endl;
                                    getch();
                                }
                                else{
                                    P = first(wanita);
                                    j = 1;
                                    while(P != NULL){
                                        cout <<"(" <<j <<").___________________________________________________________" <<endl;
                                        printInfo(wanita, P);
                                        P = next(P);
                                        j++;
                                        getch();
                                    }
                                }

                                break;
                            case '0'  : break;
                            default : break;
                        }
                    }while (pol != '0');
                    break;
// SHOW ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '6' :
// SORT ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    do{
                        system("cls");
                        cout <<"|--------------------------------------|" << endl;
						cout <<"|            SORT DATA                 |" <<endl <<endl;
                        cout <<"|--------------------------------------|" << endl;
						cout <<"|1. Sort Data Pria                     |" <<endl;
                        cout <<"|2. Sort Data Wanita                   |" <<endl;
                        cout <<"|0. Back                               |" <<endl;
                        cout <<"|--------------------------------------|" << endl;
						cout <<"\nPilihan : ";
                        cin >>pol;
                        switch (pol){
                            case '1' :
                                cout <<"1. Sort Data Pria  " <<endl;
                                    cout <<"\t 1. Sort Ascending NIK Data Pria  " <<endl;
                                    cout <<"\t 2. Sort Descending NIK Data Pria  " <<endl;
                                    cout <<"\t 0. Back" <<endl;
                                    cout <<"\nPilihan : ";
                                    cin >>pel;
                                    switch (pel){
                                        case '1' :
                                            cout <<"1. Sort Ascending NIK Data Pria  " <<endl;
                                            sortAs_nik(pria);

                                            break;
                                        case '2' :
                                            cout <<"2. Sort Descending NIK Data Pria  " <<endl;
                                            sortDes_nik(pria);

                                            break;
                                        case '0'  : break;
                                        default : break;
                                        }

                                getch();
                                break;
                            case '2' :
                                cout <<"2. Sort Data Wanita  " <<endl;
                                    cout <<"\t 1. Sort Ascending NIK Data Wanita  " <<endl;
                                    cout <<"\t 2. Sort Descending NIK Data Wanita  " <<endl;
                                    cout <<"\t 0. Back" <<endl;
                                    cout <<"\nPilihan : ";
                                    cin >>pel;
                                    switch (pel){
                                        case '1' :
                                            cout <<"1. Sort Ascending NIK Data Wanita  " <<endl;
                                            sortAs_nik(wanita);

                                            break;
                                        case '2' :
                                            cout <<"2. Sort Descending NIK Data Wanita  " <<endl;
                                            sortDes_nik(wanita);

                                            break;
                                        case '0'  : break;
                                        default : break;
                                        }

                                getch();
                                break;
                            case '0'  : break;
                            default : break;
                        }
                    }while (pol != '0');
                    break;
// SORT ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



                case '0'  : break;
                default : break;
                }
            }while (pil != '0');


        }
//# Calon Pengantin #################################################################################################################



//# Pernikahan ######################################################################################################################
        else if (menu == '2'){
            do{
                system("cls");
                cout <<"|----------------------------------------------------------------|" << endl;
				cout <<"|       APLIKASI ADMINISTRASI KANTOR URUSAN AGAMA                |" <<endl <<endl;
                cout <<"|----------------------------------------------------------------|" << endl;
				cout <<"| Data Pernikahan                                                |" << endl;
                cout <<"| 1. Pendaftaran Nikah                                           |" << endl;
				cout <<"| 2. Pendaftaran Cerai                                           |" << endl;
                cout <<"| 3. Daftar Pernikahan                                           |" << endl; 
				cout <<"| 4. Daftar Perceraian                                           |" << endl;
				cout <<"| 5. Daftar Info berdasar NIK                                    |" << endl;
                cout <<"| 0. Back                                                        |" << endl;
                cout <<"|----------------------------------------------------------------|" << endl;
                cout <<"\nPilihan : ";
                cin >>pil;

                switch (pil){
                case '1' :
// PENDAFTARAN NIKAH //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    cout <<"\nMasukkan NIK Pria   : ";
                    cin >> s.nik;
                    X = findElm(pria, s);
                    if (X == NULL){
                        cout <<"\nData tidak ditemukan" <<endl;
                        getch();
                        break;
                    }
                    cout <<"\nMasukkan NIK Wanita : ";
                    cin >> i.nik;
                    Y = findElm(wanita, i);
                    if (Y == NULL){
                        cout <<"\nData tidak ditemukan" <<endl;
                    }
                    if ((Y != NULL) && (X != NULL)){
                    	cout << "Masukkan ID Surat  : ";
                    	cin >> r.id_surat;
                    	cout << "Tanggal Pernikahan : ";
                    	cin >> r.tanggal_r.tgl;
                    	cout << "Bulan Pernikahan   : ";
						cin >> r.tanggal_r.bln;
						cout << "Tahun Pernikahan   : ";
						cin >> r.tanggal_r.thn; 
						r.nik_p = info(X).nik;
						r.nik_w = info(Y).nik;
						r.nama_p = info(X).nama;
						r.nama_w = info(Y).nama;
						r.status_surat = 1;
						
                        info(X).status = 2;
                        info(Y).status = 2;
                        Q = alokasi_r(X, Y, r);
                        insertFirst_r(kawin, Q);
                        cout <<"\n  Pernikahan berhasil, Selamat Menempuh Hidup Baru";
                    }
                    getch();
                    break;
// PENDAFTARAN NIKAH //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '2' :
// PENDAFTARAN CERAI //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    cout <<"\nMasukkan NIK Wanita         : ";
                    cin >> i.nik;
                    Y = findElm(wanita, i);
                    if (Y == NULL){
                        cout <<"\nData tidak ditemukan" <<endl;
                    }
                    else{
                         if (info(Y).status != 2){
                            cout <<"\n  Data yang dimasukkan tidak memiliki pasangan" <<endl;
                         }
                         else{
                            Q = findElm_rs(kawin, Y);
                            z.nama_p = info(up(Q)).nama;
                            z.nama_w = info(down(Q)).nama;
                            z.nik_p = info(up(Q)).nik;
                            z.nik_w = info(down(Q)).nik;
                            info(up(Q)).status = 3;
                            info(down(Q)).status = 3;
                            delData_r(kawin, Q);
                            cout <<"Masukkan ID SURAT           : ";
		                    cin >> z.id_surat;
		                    cout <<"Masukkan Tanggal Perceraian : ";
		                    cin >> z.tanggal_r.tgl;
		                    cout <<"Masukkan Bulan Perceraian   : ";
		                    cin >> z.tanggal_r.bln;
		                    cout <<"Masukkan Tahun Perceraian   : ";
		                    cin >> z.tanggal_r.thn;
		                    z.status_surat = 2;
                            
                            R = alokasi_rce(z);
                            insertFirst_r(kawin, R);
		                    
                            cout <<"\n  Perceraian berhasil, Selamat Menempuh Hidup Baru" <<endl;
                         }
                    }
                    getch();
                    break;
// PENDAFTARAN CERAI //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '3' :
// DAFTAR NIKAH //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    if (first(kawin) == NULL){
                        cout <<"Data Kosong" <<endl;
                        getch();
                    }
                    else {
                        R = first(kawin);
                        j = 1;
                        while(R != NULL){
                        	if(info(R).status_surat == 1){
                        		cout <<"(" <<j <<").___________________________________________________________" <<endl;
	                            cout << endl;
	                            cout <<"----------------------------------------------------------------------------" << endl;
								cout <<"|                   SURAT ";
								if(info(R).status_surat == 1){
	                            	cout << "NIKAH" << endl;
								} else{
									cout << "CERAI" << endl;
								}
								cout <<"|   " << endl;
								cout <<"|    ID Surat                  : " << info(R).id_surat << endl;
								cout <<"|    Suami                     : " << info(R).nama_p <<" (" << info(R).nik_p <<")" << endl;
								cout <<"|    ";
								if(info(R).status_surat == 1){
	                            	cout << "Menikah";
								} else{
									cout << "Bercerai";
								}
								cout <<" dengan " << endl;
	                            cout <<"|    Istri                     : " <<info(R).nama_w <<" (" <<info(R).nik_w <<") " <<endl;
	                            cout <<"|    " << endl;
	                            cout <<"|    Dilaksanakan pada Tanggal : " << info(R).tanggal_r.tgl << " - " << info(R).tanggal_r.bln << " - " << info(R).tanggal_r.thn << endl;
	                            cout <<"|    Berikut Bukti Surat ";
	                            if(info(R).status_surat == 1){
	                            	cout << "NIKAH" << endl;
								} else{
									cout << "CERAI" << endl;
								}	
								j++;
							}
							R = next(R);
                        }
                    }
                    getch();
                    break;
// DAFTAR NIKAH //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                case '4' :
// DAFTAR CERAI //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    if (first(kawin) == NULL){
                        cout <<"Data Kosong" <<endl;
                        getch();
                    }
                    else {
                        R = first(kawin);
                        j = 1;
                        while(R != NULL){
                        	if(info(R).status_surat == 2){
                        		cout <<"(" <<j <<").___________________________________________________________" <<endl;
	                            cout << endl;
	                            cout <<"----------------------------------------------------------------------------" << endl;
								cout <<"|                   SURAT ";
								if(info(R).status_surat == 1){
	                            	cout << "NIKAH" << endl;
								} else{
									cout << "CERAI" << endl;
								}
								cout <<"|   " << endl;
								cout <<"|    ID Surat                  : " << info(R).id_surat << endl;
								cout <<"|    Suami                     : " << info(R).nama_p <<" (" << info(R).nik_p <<")" << endl;
								cout <<"|    ";
								if(info(R).status_surat == 1){
	                            	cout << "Menikah";
								} else{
									cout << "Bercerai";
								}
								cout <<" dengan " << endl;
	                            cout <<"|    Istri                     : " <<info(R).nama_w <<" (" <<info(R).nik_w <<") " <<endl;
	                            cout <<"|    " << endl;
	                            cout <<"|    Dilaksanakan pada Tanggal : " << info(R).tanggal_r.tgl << " - " << info(R).tanggal_r.bln << " - " << info(R).tanggal_r.thn << endl;
	                            cout <<"|    Berikut Bukti Surat ";
	                            if(info(R).status_surat == 1){
	                            	cout << "NIKAH" << endl;
								} else{
									cout << "CERAI" << endl;
								}	
								j++;
							}
							R = next(R);
                        }
                    }
                	getch();
                	break;
// DAFTAR CERAI //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// DAFTAR INFO NIK ////////////////////////////////////////////////////////////////////////////////////////////////////

				case '5' :
					cout << "Lihat Data dari : " << endl;
					cout << "1. Pria " << endl;
					cout << "2. Wanita " << endl;
					cout << "Pilih : ";
					int coba;
					cin >> coba;
					if(coba == 1){
						R = first(kawin);
                    	if(R == NULL){
                    		cout << "Data Kosong" << endl;
						} else{
							cout <<"\nMasukkan NIK Pria   : ";
                    		cin >> s.nik;
                    		X = findElm(pria, s);
                    		Q = findElm_rt(kawin, X);
							while(R != NULL){
								if(Q != NULL){
									if(info(R).status_surat == 1 || info(R).status_surat == 2){
		                        		cout <<"(" <<j <<").___________________________________________________________" <<endl;
			                            cout << endl;
			                            cout <<"----------------------------------------------------------------------------" << endl;
										cout <<"|                   SURAT ";
										if(info(R).status_surat == 1){
			                            	cout << "NIKAH" << endl;
										} else{
											cout << "CERAI" << endl;
										}
										cout <<"|   " << endl;
										cout <<"|    ID Surat                  : " << info(R).id_surat << endl;
										cout <<"|    Suami                     : " << info(R).nama_p <<" (" << info(R).nik_p <<")" << endl;
										cout <<"|    ";
										if(info(R).status_surat == 1){
			                            	cout << "Menikah";
										} else{
											cout << "Bercerai";
										}
										cout <<" dengan " << endl;
			                            cout <<"|    Istri                     : " <<info(R).nama_w <<" (" <<info(R).nik_w <<") " <<endl;
			                            cout <<"|    " << endl;
			                            cout <<"|    Dilaksanakan pada Tanggal : " << info(R).tanggal_r.tgl << " - " << info(R).tanggal_r.bln << " - " << info(R).tanggal_r.thn << endl;
			                            cout <<"|    Berikut Bukti Surat ";
			                            if(info(R).status_surat == 1){
			                            	cout << "NIKAH" << endl;
										} else{
											cout << "CERAI" << endl;
										}	
										j++;
									}
									R = next(R);
		                        }
							}
						}
					}else if(coba == 2){
						R = first(kawin);
                    	if(R == NULL){
                    		cout << "Data Kosong" << endl;
						} else{
							cout <<"\nMasukkan NIK Wanita   : ";
                    		cin >> i.nik;
                    		X = findElm(wanita, i);
                    		Q = findElm_rs(kawin, X);
							while(R != NULL){
								if(Q != NULL){
									if(info(R).status_surat == 1 || info(R).status_surat == 2){
		                        		cout <<"(" <<j <<").___________________________________________________________" <<endl;
			                            cout << endl;
			                            cout <<"----------------------------------------------------------------------------" << endl;
										cout <<"|                   SURAT ";
										if(info(R).status_surat == 1){
			                            	cout << "NIKAH" << endl;
										} else{
											cout << "CERAI" << endl;
										}
										cout <<"|   " << endl;
										cout <<"|    ID Surat                  : " << info(R).id_surat << endl;
										cout <<"|    Suami                     : " << info(R).nama_p <<" (" << info(R).nik_p <<")" << endl;
										cout <<"|    ";
										if(info(R).status_surat == 1){
			                            	cout << "Menikah";
										} else{
											cout << "Bercerai";
										}
										cout <<" dengan " << endl;
			                            cout <<"|    Istri                     : " <<info(R).nama_w <<" (" <<info(R).nik_w <<") " <<endl;
			                            cout <<"|    " << endl;
			                            cout <<"|    Dilaksanakan pada Tanggal : " << info(R).tanggal_r.tgl << " - " << info(R).tanggal_r.bln << " - " << info(R).tanggal_r.thn << endl;
			                            cout <<"|    Berikut Bukti Surat ";
			                            if(info(R).status_surat == 1){
			                            	cout << "NIKAH" << endl;
										} else{
											cout << "CERAI" << endl;
										}	
										j++;
									}
									R = next(R);
		                        }
							}
						}
					}
					getch();
					break;

// DAFTAR INFO NIK ///////////////////////////////////////////////////////////////////////////////////////////////////////
                case '0'  : break;
                default : break;
                }
            }while (pil != '0');

        }
//# Pernikahan #####################################################################################################################


    }while( menu != '0');
    return 0;
}
