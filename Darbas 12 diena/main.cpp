#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    //
    string vardas, pavarde, kursas, spp, skyrius;
    int amzius, grupe;
    skyrius="-------------------------------------------";
    vardas="Vilius";
    pavarde="Vilimas";
    kursas="I kursas";
    spp="Programu sistemos";
    amzius=0;
    grupe=2;

    cout << vardas << endl << pavarde << endl << amzius << endl << grupe << endl << kursas << endl << spp << endl;
    cout << skyrius <<endl;

    //-----------------------------------------

    string pavad, savin, arena;
    int metai;
    int vsk;

    pavad="Vilniaus Rytas";
    metai=1993;
    savin="Dariui Gudeliui";
    arena="Jeep krepsinio arena";
    vsk=2500;

    cout << pavad <<endl << metai << endl << savin << endl << arena << endl << vsk << endl;

    cout << skyrius <<endl;

    //-----------------------------------------

    string mark, model, spalva;
    int pmetai;
    float litr;
    mark="OPEL";
    model="ZAFIRA";
    spalva="Ruda";
    pmetai=2010;
    litr=2.0;

    cout <<  mark << endl << model << endl << spalva << endl << pmetai << endl << fixed << setprecision(1) << litr << endl;
    cout << skyrius <<endl;

    //-----------------------------------------

    int a=13, b=5;
    float c=17.5;
    cout << a + b - c << endl;
    cout << 15 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + b / a << endl;
    cout << static_cast<int>(c) % 5 + a - b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;
    cout << skyrius <<endl;

    //-----------------------------------------
    float d, e, f, g, h, vid;
    cout<<"iveskite penkis skaicius ";
    cin >> d >> e >> f >> g >> h;
    cout<<"Vidurkis yra: "<< (d+e+f+g+h)/5 << endl;
    cout << skyrius <<endl;

    //-----------------------------------------

    int dvi, pirm, antr, sum;
    cout<<"Ivesti dvizenkli sk.: ";
    cin >> dvi;

    pirm=dvi/10;
    antr=dvi%10;
    sum=antr+pirm;
    cout << "Atsakymas yra: " << sum << endl;




    return 0;
}
