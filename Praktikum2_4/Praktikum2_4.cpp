#include <iostream>
using namespace std;

int main()
{
    int nMatematika, nFisika, nRerata;
    string status;

    cout << "Masukkan Nilai Matematika = ";
    cin >> nMatematika;
    cout << "Masukkan Nilai Fisika = ";
    cin >> nFisika;

    nRerata = (nMatematika + nFisika) / 2;

    if (nRerata > 60)
    {
        status = "Anda Dinyatakan LULUS!";
    }
    else if (nMatematika > 70)
    {
        status = "Anda Dinyatakan LULUS!";
    }
    else
    {
        status = "Maaf Anda Tidak LULUS!";
    }

    cout << "Rata-rata Nilai = " << nRerata << endl;
    cout << status;
    return 0;
}
