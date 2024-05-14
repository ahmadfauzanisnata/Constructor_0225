#include <iostream>
using namespace std;
class buku
{
    string judul;
    public:
    buku setJudul(string judul)
    {
        this->judul = judul;
        return *this; // chain function
    }
    string getJudul()
    {

        return this->judul;
    }
} bukunya;

int main()
{
    // bukunnya.setJudul("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul(); //chain function calss
    return 0;
}