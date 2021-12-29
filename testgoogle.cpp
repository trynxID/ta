#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int pm,pb,x;
    string pass;
    char loop = 'y';
    string buku[3];
    int harga[3];
    int total[3],a[3],th[3],tb[3];
    menu_utama:
    cout<<"===========================================\n";
    cout<<"=   Selamat Datang Di Toko Buku Amikom    =\n";
    cout<<"===========================================\n";
    cout<<"=           Silahkan Pilih Menu           =\n";
    cout<<"= 1. Pembelian Buku                       =\n";
    cout<<"= 2. Pengisian Buku (admin)               =\n";
    cout<<"= 3. Exit/Keluar                          =\n";
    cout<<"===========================================\n";
    cout<<"  Masukan Pilihan : ";cin>>pm;
    system("cls");
    if (pm==1)
    {
        beli:
        if(x!=1){
            cout<<"Menu Buku Kosong!\n";
            cout<<"Silahkan Isi Terlebih Dahulu!\n\n";
            system("pause");
            system("cls");
            goto menu_utama;
        }else{
            cout<<"===========================================\n";
            cout<<"=             Pembelian Buku              =\n";
            cout<<"===========================================\n";
            cout<<" Daftar Buku\t\t   Harga\n";
            for (int i=0;i<3;i++){
                cout<<" "<<i+1<<". "<<buku[i]<<"\t\t"<<harga[i]<<endl;
            }
            cout<<"===========================================\n";
            cout<<"Masukan Pilihan Buku : ";cin>>pb;
            if (pb==1){
                cout<<buku[0]<<endl;
                cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[0];
                cout<<"===========================================\n";
                th[0]=harga[0]*tb[0];
                int j=1;
                a[0]=j;
            }else if (pb==2){
                cout<<buku[1]<<endl;
                cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[1];
                cout<<"===========================================\n";
                th[1]=harga[1]*tb[1];
                int j=1;
                a[1]=j;
            }else if (pb==3){
                cout<<buku[2]<<endl;
                cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb[2];
                cout<<"===========================================\n";
                th[2]=harga[2]*tb[2];
                int j=1;
                a[2]=j;
            }else{
                cout<<"Pilihan Tidak ada\n";
                system("pause");
                system("cls");
                goto beli;
            }
        }
    }
    else if (pm==2)
    {
        system("cls");
        cout<<"Masukan Password : ";cin>>pass;
        system("cls");
        if (pass=="admint"){
            for (int i=0;i<3;i++){
                cin.ignore();
                cout<<"Masukan Judul Buku ke-"<<i+1<<" : ";getline(cin,buku[i]);
                cout<<"Masukan Harga Buku ke-"<<i+1<<" : ";cin>>harga[i];
                cout<<endl;
            }
            system("cls");
            cout<<"Pengisian Buku Berhasil!\n";
            x=1;
            system("pause");
            system("cls");
            goto menu_utama;
        }else{
            cout<<"Password Salah!\n";
            system("pause");
            system("cls");
            goto menu_utama;
        }
    }
    else if (pm==3)
    {
        cout<<"Terimakasih! ^_^ \n";
        cin.ignore();
        return 0;
    }
    else
    {
        cout<<"Pilihan Salah, Silahkan Mengulang\n";
        system("pause");
        system("cls");
        goto menu_utama;
    }
    cout<<"Ingin Membeli Buku Lainnya? (y/t) : ";cin>>loop;
    if(loop == 'y'){
        system("cls");
        goto beli;
    }else{
        goto keranjang;
    }
    keranjang:
    system("cls");
    cout<<"===========================================\n";
    cout<<"= Daftar Buku  | Harga | Jumlah |  Total  =\n";
    cout<<"===========================================\n";
    for (int i=0;i<3;i++){
        if (a[i]==1){
            cout<<"= "<<buku[i]<<"\t "<<harga[i]<<"\t  "<<tb[i]<<"\t  "<<th[i]<<"  ="<<endl;
        }else{
            th[i]=0;
        }
    }
    cout<<"===========================================\n";
    cout<<"Total belanja : "<<th[0]+th[1]+th[2]<<endl;
    cout<<endl;
    system("pause");
    system("cls");
    goto menu_utama;
}