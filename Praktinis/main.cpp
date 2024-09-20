#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
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

                break;

            case 2:

                break;

            case 3:

                break:

                    default: cout<< "Nera tokios opcijos" << endl;

        }
    }

    return 0;
}
