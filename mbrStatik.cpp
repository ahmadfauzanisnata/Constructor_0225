#include <iostream>
using namespace std;

class mahasiswa{
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

int mahasiswa::nim = 225;
void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printALL()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
	mahasiswa mhs1("Zilong");
	mahasiswa mhs2("Nana");
	mahasiswa mhs3("Ling");
	mahasiswa mhs4("Hayabusa");


	mhs1.printALL();

	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();
	return 0;
}
