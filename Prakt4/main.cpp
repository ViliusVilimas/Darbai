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
string printCheck(string mi, float mp);



int main() {
    const string fileName = "C:\\Users\\user\\Desktop\\works\\Darbai\\Prakt4\\menu.txt";
    const int maxItems = 100; // Maximum number of menu items
    Menu menuList[maxItems];

    // Create the menu using the createMenu function
    int itemCount = getData(fileName, menuList, maxItems);

    // Display the menu using the displayMenu function
    showMenu(menuList, itemCount);

    int down=0;
    while (down == 0) {
        int par, amm;

        cin>>par;

        switch (par) {
            case 1: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 2: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 3: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 4: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 5: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 6: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 7: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 8: {
                cout<<"parasykite, kiek X noresite";
                cin>>amm;
                break;
            }

            case 9: {
                down++;
                break;
            }

            default: {
                cout << "Nera tokio pasirinkimo, bandykite vel"<<endl;
            }
        }
    }
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

    // Read the file line by line
    while (getline(inputFile, line) && count < maxItems) {
        stringstream ss(line);
        string itemName;
        double itemPrice;

        // Extract the menu item name
        getline(ss, itemName, '\t');

        // Trim whitespace from the name
        itemName.erase(itemName.find_last_not_of(" \t") + 1);

        // Extract the price, skipping any extra whitespace
        string priceStr;
        getline(ss, priceStr);
        priceStr.erase(0, priceStr.find_first_of("0123456789"));
        itemPrice = stod(priceStr);

        // Store the extracted data in the menu list
        menuList[count] = {itemName, itemPrice};
        count++;
    }

    inputFile.close();
    return count;
}
void showMenu(const Menu menuList[], int itemCount) {
    cout << left << setw(50) << "Menu Item" << right << setw(10) << "Price (€)" << endl;
    cout << string(60, '-') << endl;
    for (int i = 0; i < itemCount; ++i) {
        cout << left << setw(50) << menuList[i].menuItem
             << right << setw(9) << fixed << setprecision(2) << menuList[i].menuPrice << " €" << endl;
    }
}

