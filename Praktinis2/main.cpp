#include <iostream>
using namespace std;
string balse(string raide);
int dbd(int a, int b);
void zaidimas();
void fizzbuzz(int n);

int main() {
    int stop=0, opt;
    while (stop == 0) {
        cout << "Pasirinkite funkcija" << endl;
        cout << "1. Balse ar ne?" << endl;
        cout << "2. Didziausias bendras daliklis" << endl;
        cout << "3. Zaidimas" << endl;
        cout << "4. Fizz Buzz" << endl;
        cout << "5. Baigti programa" << endl;
        cin>>opt;

        switch (opt) {
            case 1: {
                string raide;
                    cout << "Pasirinkite raide" << endl;
                    cin >> raide;
                    balse (raide);
                break;
            }

            case 2: {
                int a, b;
                cout << "iveskite du sveikus skaicius" << endl;
                cin >> a >> b;
                cout << "didziauias bendras daliklis yra " << dbd(a, b) << endl;
                break;
            }

            case 3: {
                zaidimas();
                break;
            }

            case 4: {
                int n;
                cout << "iveskite kiek norite skaiciu" << endl;
                cin >> n;
                fizzbuzz(n);
                break;
            }

            case 5: {
                stop++;
                break;
            }

            default: cout<<"Nera tokios opcijos"<<endl;
        }
    }

    return 0;
}

string balse(string raide) {
    if (raide == "a" || raide == "e" || raide == "i" || raide == "y" || raide == "o" || raide == "u" || raide == "A" || raide == "E" || raide == "I" || raide == "Y" || raide == "O" || raide == "U"  ) cout << "True" << endl;
    else cout << "False" << endl;
    return raide;
}

int dbd(int a, int b) {
    int db;
    while (abs(a) && abs(b)) {
        if (abs(a) > abs(b)) a %= b;
        else b %= a;
        db = a + b;
    }
        return db;

}

void zaidimas() {
    srand(time(0));
    int thenumber = rand() % 101, guess, got=0;
    cout << "pasirinkite skaiciu nuo 1 iki 100" << endl;

    while (got==0) {
        cin >> guess;
        if (guess == thenumber) {
            cout<<"TEISINGAI, SKAICIUS BUVO "<< guess <<endl;
            got=1;
        }
        else if (guess > thenumber) cout<<"PER DAUG"<<endl;
        else if (guess < thenumber) cout<<"PER MAZAI"<<endl;
    }

}

void fizzbuzz(int n) {
    for (int i=0; i<n; i++) {

}