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
	
