#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    static int nim;
    int id;
    string nama;

    void setId();
    void printAll();
    mahasiswa(string pnama) :nama(pnama) { setId(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setId() {
    id = ++nim;
}

void mahasiswa::printAll() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

void main() {
    mahasiswa mhs1("Lia kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi kurniawan");
    mahasiswa mhs4("joko purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}
