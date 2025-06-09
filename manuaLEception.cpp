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
    catch(int a)
    {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...)
    {
        /*jika selain integer maka blok ini akan dieksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }

    return 0;
    
}