#include <iostream>
#include <string>
using namespace std;

string cipher(string word, string key);
string decipher(string word, string key);

    const char abc[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main() {
    string key="KEY";

    int down=0;
    while (down == 0) {
        int par, down2=0, down3=0;
        cout << "Kokia srifravimo/desrifravimo sistema norite naudoti? (Naudojama tik angliska abecele)" << endl;
        cout << "1. Vigeneres algoritma" << endl;
        cout << "2. ASCII koduote" << endl;
        cout << "3. Baigti programa" << endl;
        cin>>par;

        switch (par) {
            case 1: {
                while (down2==0) {
                    cout << "Ar norite srifruoti ar desrifruoti?" << endl;
                    cout << "1. srifruoti" << endl;
                    cout << "2. desrifruoti" << endl;
                    cout << "3. Atgal" << endl;
                    cin>>par;
                    switch (par) {
                        case 1: {
                            string word;
                            cout << "Irasykite, ka norite srifruoti" << endl;
                            cin>>word;
                            cout << cipher(word, key) << endl;

                            break;
                        }
                        case 2: {
                            string word;
                            cout << "Irasykite, ka norite desrifruoti" << endl;
                            cin>>word;
                            cout << decipher(word, key) << endl;

                            break;
                        }
                        case 3: {
                            down2++;
                            break;
                        }
                        default:cout<<"Nera tokio pasirinkimo, bandykite vel"<<endl;
                    }
                }
                break;
            }

            case 2: {
                while (down3==0) {
                    cout << "Ar norite srifruoti ar desrifruoti?" << endl;
                    cout << "1. srifruoti" << endl;
                    cout << "2. desrifruoti" << endl;
                    cout << "3. Atgal" << endl;
                    cin>>par;
                    switch (par) {
                        case 1: {

                            break;
                        }
                        case 2: {

                            break;
                        }
                        case 3: {
                            down3++;
                            break;
                        }
                        default:cout<<"Nera tokio pasirinkimo, bandykite vel"<<endl;
                    }
                }
                break;
            }

            case 3: {
                down++;
                break;
            }

            default: {
                cout<<"Nera tokio pasirinkimo, bandykite vel"<<endl;
            }
        }
    }
    return 0;
}

string cipher(string word, string key) {
    int x=word.length(), k;
    string rez, aword;
    for (int i=0;; i++) {
        if (i==key.length()) {
            i=0;
        }
        rez+=key[i];
        if (rez.length()==word.length()) {
            break;
        }
    }
    for (int i=0; i<x; i++) {
        cout << rez[i] <<" "<<word[i]<<" "<<endl;
        k=(toupper(word[i])+rez[i] * 2 + 26) % 26 + 'A';
        aword+=abc[k];


    }
    return aword;
}
string decipher(string word, string key) {
    int x=word.length(), k;
    string rez, aword;
    for (int i=0;; i++) {
        if (i==key.length()) {
            i=0;
        }
        rez+=key[i];
        if (rez.length()==word.length()) {
            break;
        }
    }
    for (int i=0; i<x; i++) {
        k=(word[i]-rez[i]);
        aword+=abc[k];
        cout<<aword<<endl;

    }
    return aword;
}