#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	// toko es kkrim
	int hargaEskrimCoklat,hargaEskrimVanila,hargaEskrimStroberi, total;
	int coklat, vanila, stroberi;
	int eskrimCoklat = 7000;
	int eskrimStroberi = 5000;
	int eskrimVanila = 6000;

	cout<<"\t========================================================================\n";
	cout<<"\t============== TOKO ESKRIM MAJU TERUS SAMPAI MELAMPAUINYA ==============\n";
	cout<<"\t========================================================================\n\n";

	char pilih = 'y';
	do
	{
			/* code */
			cout<<"Total Eskrim Coklat : ";
		cin>>coklat;
		hargaEskrimCoklat = coklat * eskrimCoklat;	
		cout<<"Total Eskrim Vanila : ";
		cin>>vanila;	
		hargaEskrimVanila = vanila * eskrimVanila;	
		cout<<"Total Eskrim Stroberi : ";
		cin>>stroberi;
		hargaEskrimStroberi = stroberi * eskrimStroberi;	


		total = hargaEskrimStroberi + hargaEskrimVanila + hargaEskrimCoklat;

		if (total > 50000){
			int diskon = total * 0.1;
			cout<<"\nSelamat Kamu mendaoat diskon Toko Sebesar: "<<diskon;

			cout<<"\nTotal Harga Tanpa Diskon : "<<total;
			cout<<"\nTotal Harga + Diskon : "<<total-diskon;

			cout<<endl;
		}else{
			cout<<"Total Harga : "<<total;
		}

		cout<<"\n\n Apakah ingin mengulang : ";
		cin>>pilih;

	} while (pilih == 'y' || pilih == 'Y');



}