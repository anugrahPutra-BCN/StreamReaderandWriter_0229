#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw("halo"); // melemparkan sebuah intiger maka
        cout << "Pertanyaan tidak akan dieksekusi" << endl;
    }
    