#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

public:

	Mahasiswa()
	{
		nim = 0;
		nama = "";

	};

	Mahasiswa(int iNim)
	{
		nim = iNim

	};

	Mahasiswa(string iNama)
	{
		nama = iNama;
	};

	Mahasiswa(int iNim, string INama)
	{

		nim = iNim;
		nama = INama;

	};

	void cetak() {
		cout << "NIM = " << nim << endl;
		cout << "Nama = " << nim << endl;
		cout << endl;
	}


};

int main()
{
	Mahasiswa mhs1;
	Mahasiswa mhs2(20);
	Mahasiswa mhs3("Indra");
	Mahasiswa mhs4(30, "Fauzan");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

	return 0;
}