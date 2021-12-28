#include <iostream>
using namespace std;
int main(){
	int pm,pb,tb,i,j,total;
	char loop = 'y';
	string buku[3] = {"Novel A","Novel B","Novel C"};
	int harga[3] = {50000,60000,70000};
	menu_utama:
	cout<<"==========================================\n";
	cout<<"=   Selamat Datang Di Toko Buku Amikom   =\n";
	cout<<"==========================================\n";
	cout<<"=           Silahkan Pilih Menu          =\n";
	cout<<"= 1. Pembelian Buku                      =\n";
	cout<<"= 2. Pengisian Buku (admin)              =\n";
	cout<<"= 3. Exit/Keluar                         =\n";
	cout<<"==========================================\n";
	cout<<"  Masukan Pilihan : ";cin>>pm;
	system("cls");
	if (pm==1)
	{
		cout<<"==========================================\n";
		cout<<"=             Pembelian Buku             =\n";
		cout<<"==========================================\n";
		cout<<" Daftar Buku    Harga\n";
		for (i=0;i<3;i++){
			cout<<" "<<i+1<<". "<<buku[i]<<"	"<<harga[i]<<endl;
		}
		cout<<"==========================================\n";
		cout<<"Masukan Pilihan Buku : ";cin>>pb;
		if (pb==1){
			cout<<buku[0]<<endl;
			cout<<"Jumlah Buku Yang Akan Dibeli : ";cin>>tb;
			cout<<"==========================================\n";
			cout<<buku[0]<<" Jumlah :"<<tb<<endl;
			total=harga[0]*tb;
			cout<<"Total Harga "<<total<<endl;
		}

	}
	else if (pm==2)
	{
		cout<<"Program \n";
	}
	else if (pm==3)
	{
		cout<<"Terimakasih! ^_^ \n";
		cin.ignore();

	}
	else
	{
		cout<<"Pilihan Salah, Silahkan Mengulang\n";
		system("pause");
		system("cls");
		goto menu_utama;
	}
	keranjang:
	cout<<"==========================================\n";
	cout<<endl;
	system("pause");
	system("cls");
	goto menu_utama;
}