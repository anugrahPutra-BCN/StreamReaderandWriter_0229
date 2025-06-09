#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan
#include <array>
// untuk obyek arrayyang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
    }
    catch(exception &e)
    {
        // menangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang terakhir" << endl;
    /*penanda 2: bahwa program berjalan tnpa berhenti meskipun terjadi kesalahan*/
    return 0;
    
}