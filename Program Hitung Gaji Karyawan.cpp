//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//


#include <iostream>
using namespace std;

int main() 
{
	int jam = 0, jml, total,sisa, sisa1;
	char nama[30], yt, pil;
	

	cout<<"              PERHITUNGAN GAJI KARYAWAN            "<<endl<<endl;
	cout<<"                 PT MAJU SEJAHTERA                 "<<endl<<endl;
	cout << "Masukan Nama Anda : "; cin >> nama; cout << endl;
	cout << "Masukan Golongan Anda dalam Huruf Besar [A/B/C/D] : "; 
    cin >> pil; cout<< endl;
    cout << "Total Jam Kerja dalam 1 Minggu : ";
    cin >> jam; cout<< endl;

    if (pil == 'A')
    {
        jml = 5000;
    }
    else if (pil == 'B')
    {
        jml = 7000;
    }
    else if (pil == 'C')
    {
    	jml = 8000;
	}
	else if (pil == 'D')
	{
		jml = 10000;
	}


    if (jam > 48)
    {
        sisa = jam - 48; 
        sisa1 = jml * (jam-sisa); 
        total = 4000 * sisa; 
        jml = sisa1 + total;
	}

    else
    {
        jml = jml * jam;
    }

cout <<endl<<"--------------------------------------------" <<endl;
    cout << "Nama Karyawan : ";
    cout << nama<<endl; cout<<endl;
	cout << "Total gaji Anda minggu ini : Rp. ";
	cout << jml<<endl; 
    
cout <<endl<<"--------------------------------------------" <<endl;
cout <<"Terima Kasih"<<endl;
return 0;
} 
