#include <iostream>
using namespace std;

struct car
{
    string name, merk;
    double price;
};

int main()
{
    // struct -> items -> structure name
    struct
    {
        string name;
        int age;
        float GPA;
    } mahasiswa1, mahasiswa2;

    mahasiswa1.name = "ihza";
    mahasiswa1.age = 19;
    mahasiswa1.GPA = 4;

    mahasiswa2.name = "Firaa";
    mahasiswa2.age = 20;
    mahasiswa2.GPA = 4;

    cout << "Nama: " << mahasiswa1.name << endl;
    cout << "Umur: " << mahasiswa1.age << endl;
    cout << "IPK: " << mahasiswa1.GPA << endl
         << "\n";

    cout << "Nama: " << mahasiswa2.name << endl;
    cout << "Umur: " << mahasiswa2.age << endl;
    cout << "IPK: " << mahasiswa2.GPA << endl
         << "\n";

    // struct -> structure name -> items
    // before using it, we must asign into variabel in here i use "c";
    car c;
    c.name = "Expender";
    c.merk = "Toyota";
    c.price = 13E4;

    cout << c.name << endl;
    cout << c.merk << endl;
    cout << c.price << endl;
    return 0;
}