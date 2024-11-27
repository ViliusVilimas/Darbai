#include <iostream>
#include <string>
using namespace std;

string cipher(string word, string key);
string decipher(string word, string key);
int calculateShift(const string& word);
string encrypt(const string& text, int shift);
string decrypt(const string& text, int shift);

    const char abc[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main() {
    string key;

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
                            cout << "Irasykite rakta" << endl;
                            cin>>key;
                            cout << cipher(word, key) << endl;

                            break;
                        }
                        case 2: {
                            string word;
                            cout << "Irasykite, ka norite desrifruoti" << endl;
                            cin>>word;
                            cout << "Irasykite rakta" << endl;
                            cin>>key;
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
                            string word;
                            cout << "Irasykite, ka norite srifruoti" << endl;
                            cin >> word;
                            cout << "Irasykite rakta" << endl;
                            cin >> key;
                            int shift = calculateShift(key);
                            cout << encrypt(word, shift) << endl;
                            break;
                        }
                        case 2: {
                            string word;
                            cout << "Irasykite, ka norite desrifruoti" << endl;
                            cin >> word;
                            cout << "Irasykite rakta" << endl;
                            cin >> key;
                            int shift = calculateShift(key);
                            cout << decrypt(word, shift) << endl;
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
        k =  toupper(word[i]) - 130 + toupper(rez[i]);
        if (k>26) k-=26;
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
        k =  toupper(word[i]) - toupper(rez[i]);
        if (k<0) k+=26;
        aword+=abc[k];
    }
    return aword;
}

int calculateShift(const string& word) {
    int shift = 0;
    for (char c : word) {
        shift = (shift + static_cast<int>(c)) % 128;
    }
    return shift;
}

string encrypt(const string& text, int shift) {
    string encrypted = text;
    for (size_t i = 0; i < text.length(); ++i) {
        char c = text[i];
        encrypted[i] = static_cast<char>((c + shift) % 128);
    }
    return encrypted;
}

string decrypt(const string& text, int shift) {
    string decrypted = text;
    for (size_t i = 0; i < text.length(); ++i) {
        char c = text[i];
        decrypted[i] = static_cast<char>((c - shift + 128) % 128);
    }
    return decrypted;
}