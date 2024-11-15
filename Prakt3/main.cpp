#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int down=0;
    while (down == 0) {
        int par, down2=0, down3=0;
        cout << "Kokia srifavimo/desrifavimo sistema norite naudoti? (Naudojama tik angliska abecele)" << endl;
        cout << "1. Vigeneres algoritma" << endl;
        cout << "2. ASCII koduote" << endl;
        cout << "3. Baigti programa" << endl;
        cin>>par;

        switch (par) {
            case 1: {
                while (down2==0) {
                    char abc[][]={{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}, {1,2,3,4,5,6,7,8,9,} };
                    cout << "Ar norite srifruoti ar desrifruoti?" << endl;
                    cout << "1. srifuoti" << endl;
                    cout << "2. desrifuoti" << endl;
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
                    cout << "1. srifuoti" << endl;
                    cout << "2. desrifuoti" << endl;
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
