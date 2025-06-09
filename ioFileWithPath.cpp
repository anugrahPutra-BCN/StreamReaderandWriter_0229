#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    //membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile +  ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited Loop untuk menulis 
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // Loop akan berhenti anda memasukan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuat obyek input file stream dalam mode membaca
    ifstream infile;
    //membuka file
    infile.open("contohfile.txt");

  
