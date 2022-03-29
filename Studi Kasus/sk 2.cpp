//Bagian Raju
#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int menu[10],porsi[10],harga[10],pil,totalakhir,jarak,jumlah;
	int ongkir, diskonongkir,diskon,b,bayar[10],total[10];
	char d;
	string makan[10],nama[10];
	int i=0;
	int tot;
	int c;
	makan[1]="Ayam Geprek";
	makan[2]="Ayam Goreng";
	makan[3]="Udang Goreng";
	makan[4]="Cumi Goreng";
	makan[5]="Ayam Bakar";
	harga[1]=21000;
	harga[2]=17000;
	harga[3]=19000;
	harga[4]=20000;
	harga[5]=25000;
	cout << " Menu makanan waroeng : \n";
	cout << " [1] Ayam Geprek   = 21000\n";
	cout << " [2] Ayam Goreng   = 17000\n";
	cout << " [3] Udang Goreng  = 19000\n";
	cout << " [4] Cumi Goreng   = 20000\n";
	cout << " [5] Ayam Bakar    = 25000\n";
	cout << endl;
	y:
	cout << "Menu : \n";
//Bagian Tata
	cout << "1. Pesan\n";
	cout << "2. Keluar(Cetak struk)\n";
	cout << "Pilihan : "; cin >>pil;
	if (pil==1){
		z:
		cout << "Masukkan jumlah jenis barang yang ingin dipesan : "; cin >> b;
		for (int i=0; i<b; i++){
			cout << "Pesanan ke-"<<i+1<<" \t: "; cin >> c;
			cout << "Porsi : ";  cin >> porsi[i];
			cout << "Harga barang per satuan : "; cout << harga[c]<< endl;
			nama[i] = makan[c];
			bayar[i] = harga[c];
			total[i]=porsi[i]*bayar[i];
		}
		cout << "Masukkan jarak rumah kamu (dalam KM) : "; cin >>jarak;
		if (jarak <= 3){
    		ongkir = 15000;
		}
    	else {
    		ongkir = 25000;
   		}
		cout << "=======================================================================================\n";
		cout << "Sudah selesai ?\n" ;
		cout << "Tekan (Y) untuk kembali ke menu / Tekan (T) untuk mengulang memesan : " ;
		cin >> d;
		if ( d == 'Y'){
			goto y;
		}
		else {
			goto z;
		}
//Bagian Khulfani	
	}
	else if(pil==2){
		cout << "Struk akan segera dicetak"	;
		ofstream kasir;
		kasir.open("struk.txt", ios::out);
		kasir << "STRUK BELANJAAN ANDA\n";
		kasir << "==============================\n";
		for (int i=0; i<b; i++){	
			kasir << nama[i]<<endl;
			kasir << porsi[i] <<" x " << bayar[i] << " = " << total[i] << endl;
			jumlah += total[i] ;
		}
		if (jumlah > 150000){
			diskon= jumlah * 35/100;
			diskonongkir = 8000;
		}
		else if (jumlah > 50000){
			diskon= jumlah *15/100;
			diskonongkir = 5000;
		}
		else {
			diskonongkir = 3000;
		}
		kasir << "Ongkir : " << ongkir << endl;
		kasir << "Diskon ongkir : " << diskonongkir << endl;
		kasir << "==============================\n";
		kasir << "\nTotal belanja : " << jumlah;
		kasir << "\nDiskon harga : " << diskon;
		kasir << "\nHarga Setelah Diskon : "<< jumlah-diskon;
		kasir << "\nOngkir Setelah Diskon : " << ongkir-diskonongkir;
		kasir.close();	
	}
	return 0;	
}
