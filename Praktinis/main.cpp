#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float GBP_Bendras = 0.8593, GBP_Pirkti = 0.8450, GBP_Parduoti = 0.9060;;
    float USD_Bendras = 1.0713, USD_Pirkti = 1.0547, USD_Parduoti = 1.1309;
    float INR_Bendras = 88.8260, INR_Pirkti = 85.2614, INR_Parduoti = 92.8334;

    int choice=0;
    while(choice != 99) {
        cout << "Pasirinkite, ka norite daryti" << endl;
        cout << "1. Palyginti valiuta" << endl;
        cout << "2. Isigyti valiutos" << endl;
        cout << "3. Parduoti valiuta" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout <<"1 EUR = "<< fixed << setprecision(2) << USD_Bendras << " USD" <<endl;
                cout <<"1 EUR = "<< fixed << setprecision(2) << GBP_Bendras << " GBP" <<endl;
                cout <<"1 EUR = "<< fixed << setprecision(2) << INR_Bendras << " INR" <<endl;
                break;

            case 2: {
                int sto=1;
                while(sto != 0) {
                    float eur;
                    cout << "Pasirinkite, kuria valiuta norite pirkti" << endl;
                    cout << "1. USD" << endl;
                    cout << "2. GBP" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. atgal" << endl;
                    cin >> choice;

                    switch(choice) {
                        case 1:
                            cout << "Iveskite euru kieki" << endl;
                        cin >> eur;
                        cout << eur << " EUR = " << fixed << setprecision(2) << eur * USD_Pirkti << " USD" << endl;
                        break;

                        case 2:
                            cout << "Iveskite euru kieki" << endl;
                        cin >> eur;
                        cout << eur << " EUR = " << fixed << setprecision(2) << eur * GBP_Pirkti << " GBP" << endl;
                        break;

                        case 3:
                            cout << "Iveskite euru kieki" << endl;
                        cin >> eur;
                        cout << eur << " EUR = " << fixed << setprecision(2) << eur * INR_Pirkti << " INR" << endl;
                        break;

                        case 4:
                            sto=0;
                        break;

                        default: cout << "Tokios opcijos nera" << endl;


                    }
                }
            }


                break;

                    default: cout<< "Nera tokios opcijos" << endl;

                }
        }

        return 0;
    }
