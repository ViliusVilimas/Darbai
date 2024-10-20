#include <iomanip>
#include <iostream>
using namespace std;
const int EILUTES = 3;
const int STULPELIAI = 2;

int main() {

    int masyvas [EILUTES][STULPELIAI];
    cout << "iveskite " << EILUTES << "ir" << STULPELIAI << "masyvo stulpeliu elementu" << endl;
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout << "Masyvo [" << i+1 << "][" << j+1 << "]" << endl;
            cin >> masyvas[i][j];
        }
    }
    cout << "masyvo vaizdavimas" <<endl;
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout << setw(5) << masyvas[i][j];
        }
        cout << endl;
    }
    cout << "Sumos " <<endl;
    for (int i = 0; i < EILUTES; i++) {
        int eilsum =0;
        for (int j = 0; j < STULPELIAI; j++) {
            cout << setw(5) << masyvas[i][j];
            eilsum += masyvas[i][j];
        }
        cout << " eilutes suma lygi " << eilsum <<endl;
    }
    cout << "eilutes suma" <<endl;

    for (int j = 0; j < EILUTES; j++) {
        int stulsum =0;
        for (int i = 0; i < STULPELIAI; i++) {
            cout << setw(5) << masyvas[i][j];
            stulsum += masyvas[i][j];
        }
        cout << endl;
    }
    for (int j = 0; j < STULPELIAI; j++) {
        int stulsum =0;
        for (int i = 0; i < EILUTES; i++) {
            stulsum += masyvas[i][j];
        }

        cout << setw(5) << stulsum;
    }

    return 0;

}
