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
