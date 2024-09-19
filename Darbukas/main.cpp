#include <cmath>
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    int p1, p2, p3;
    cout << "----------1 uzduotis----------" << endl;

    cout << "Irasykite 3 pazymius" << endl;
    cin >> p1 >> p2 >> p3;

    cout << "Vidurkis yra " << (p1 + p2 + p3)/3 << endl;
    if ((p1 + p2 + p3) / 3 >= 5)
        cout << "Vidurkis teigiamas" << endl;
    else cout << "Vidurkis neigiamas" << endl;

    cout << "----------3 uzduotis----------" << endl;
    int egz;

    cout << "Iveskite egzamino rezultata" << endl;
    cin >> egz;

    if (egz == 10)
        cout << "puiku" << endl;
    else if (egz >= 9)
        cout << "labai gerai" << endl;
    else if (egz >= 7)
        cout << "Gerai" << endl;
    else if (egz >= 5)
        cout << "Patenkinamai" << endl;
    else if (egz < 5)
        cout << "egzaminas neislaikytas" << endl;

    cout << "----------4 uzduotis----------" << endl;
    int choice = 99;



    while (choice != 0) {

        cout << "Meniu" << endl;
        cout << "Iveskite savo pazymi" << endl;
        cout << "0 Baigti darba" << endl;
        cout << "Jusu pazimys" << endl;
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "neislaikyta" << endl;
            cout << "------------------------" << endl;
            break;

            case 2:
                cout << "neislaikyta" << endl;
            cout << "------------------------" << endl;
            break;

            case 3:
                cout << "neislaikyta" << endl;
            cout << "------------------------" << endl;
            break;

            case 4:
                cout << "neislaikyta" << endl;
            cout << "------------------------" << endl;
            break;

            case 5:
                cout << "patenkinamas" << endl;
            cout << "------------------------" << endl;
            break;

            case 6:
                cout << "patenkinamas" << endl;
            cout << "------------------------" << endl;
            break;

            case 7:
                cout << "gerai" << endl;
            cout << "------------------------" << endl;
            break;

            case 8:
                cout << "gerai" << endl;
            cout << "------------------------" << endl;
            break;

            case 9:
                cout << "Labai gerai" << endl;
            cout << "------------------------" << endl;
            break;

            case 10:
                cout << "puiku" << endl;
            cout << "------------------------" << endl;
            break;

            case 0:
                cout << "puiku" << endl;
            cout << "------------------------" << endl;
            break;

            default:
                cout << "durnas" << endl;
            break;
        }

    }


    return 0;

}
