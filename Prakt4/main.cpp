#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

struct Menu {
    string menuItem;
    double menuPrice;
};
int getData(const string& fileName, Menu menuList[], int maxItems);
void showMenu(const Menu menuList[], int itemCount);
void printCheck(double price, ostream& sas);



int main() {
    const string fileName = "C:\\Users\\user\\Desktop\\works\\Darbai\\Prakt4\\menu.txt";
    const int maxItems = 100; // Maximum number of menu items
    Menu menuList[maxItems];

    int itemCount = getData(fileName, menuList, maxItems);
    ofstream sas("sas.txt");
    string check="sas.txt";
    sas << "aciu, kad atvykote i restorana ""Smokas""" << endl;
    int down=0;
    double sum=0;
    while (down == 0) {
        showMenu(menuList, itemCount);
        int par, amm;

        cin>>par;

        switch (par) {
            case 1: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 2: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 3: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 4: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 5: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 6: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 7: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 8: {
                cout<<"Pasirinkote "<< menuList[par-1].menuItem <<", kiek noresite?";
                cin>>amm;
                sas << amm << "x " << left << setw(50) << menuList[par-1].menuItem
                << right << setw(9) << fixed << setprecision(2) << menuList[par-1].menuPrice*amm << " €" << endl;
                sum+=menuList[par-1].menuPrice*amm;
                break;
            }

            case 9: {
                printCheck(sum, sas);
                down++;
                break;
            }

            default: {
                cout << "Nera tokio pasirinkimo, bandykite vel."<<endl;
            }
        }
    }
    sas.close();
    return 0;
}

int getData(const string& fileName, Menu menuList[], int maxItems) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error: Could not open the file." << endl;
        exit(1);
    }

    string line;
    int count = 0;

    while (getline(inputFile, line) && count < maxItems) {
        stringstream ss(line);
        string itemName;
        double itemPrice;

        getline(ss, itemName, '\t');

        itemName.erase(itemName.find_last_not_of(" \t") + 1);

        string priceStr;
        getline(ss, priceStr);
        priceStr.erase(0, priceStr.find_first_of("0123456789"));
        itemPrice = stod(priceStr);

        menuList[count] = {itemName, itemPrice};
        count++;
    }

    inputFile.close();
    return count;
}
void showMenu(const Menu menuList[], int itemCount) {
    cout << "Sveiki atvyke i restorana ""Smokas""" << endl;
    cout << string(60, '-') << endl;
    for (int i = 0; i < itemCount; ++i) {
        cout << i+1 << "." << left << setw(50) << menuList[i].menuItem
             << right << setw(9) << fixed << setprecision(2) << menuList[i].menuPrice << " €" << endl;
    }
    cout << string(60, '-') << endl;
    cout <<  "9.spausdinti ceki" << endl;
}
void printCheck(double price, ostream& sas) {
    sas << "Saskaita " << price << " €" << endl;
}
