//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//


#include <iostream>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
char ket [10], yt;
int alas, kode, a,d,e;
float f,g, c;
    
	cout<< endl;
	cout << " PILIHAN MENU HITUNG SEGITIGA SIKU-SIKU : "<< endl; cout<<endl;
	cout<<"############################################" << endl; cout<<endl;
	cout << "1. Hitung panjang sisi miring" << endl;
	cout << "2. Hitung luas" << endl;
	cout << "3. Hitung keliling" << endl;
	cout << "4. Keluar program" << endl;
	cout << "" << endl;
	cout<<"********************************************" << endl;
	cout << "Pilih [1/2/3/4] : ";
kode=getche();
switch (kode)
{
case '1' : {
cout<<"\n- Hitung panjang sisi miring" << endl; cout<<endl;
cout<<"Masukkan sisi 1: "; cin>>e; 
cout<<"Masukkan sisi 2: "; cin>>d;
c=sqrt(pow(e,2)+pow(d,2)); cout<<endl;
cout<<"Hasilnya = "<<c; cout<<endl;
cout <<endl<<"-----------------------------------" <<endl;
cout <<"Terima Kasih"<<endl;
break;
}
case '2' : {
cout << "\n- Hitung luas" << endl; cout<<endl;
cout << "Alas: "; cin >> d;
cout << "Tinggi: "; cin >> e;
f=(d*e)/2; cout<<endl;
cout << "Luas Segitiga Siku-siku : " << f; cout<<endl;
cout <<endl<<"-----------------------------------" <<endl;
cout <<"Terima Kasih"<<endl;
break;
}
case '3' : {
cout << "\n-Hitung keliling" << endl; cout<<endl;
cout << "A: "; cin >> d;
cout << "B: "; cin >> e;
cout << "C: "; cin >> a;
g = d+e+a; cout<<endl;
cout << "Keliling Segitiga Siku-Siku: " << g; cout<<endl;
cout <<endl<<"-----------------------------------" <<endl;
cout <<"Terima Kasih"<<endl;
break;
}
case '4' : {
	cout << "\n Program Berhenti" <<endl;
	exit(0);
break;
}
getch();
return 0;
}
}

