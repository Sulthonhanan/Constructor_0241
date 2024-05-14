// Constructor_0241.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printALL();

    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }

};

int mahasiswa::nim = 241;

void mahasiswa::setID()
{
    id = ++nim;

};

void mahasiswa::printALL()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << id << endl;
    cout << endl;
}






int main()
{
    std::cout << "Hello World!\n";
}

