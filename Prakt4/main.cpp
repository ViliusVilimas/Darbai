#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct Menu {
    string menuItem;
    double menuPrice;
};
int getData();
string showMenu(string mi, float mp);
string printCheck(string mi, float mp);



int main() {
    getData();
    string key;

    int down=0;
    while (down == 0) {
        int par, amm;
        cout << "===============================================================" << endl;
        cout << "                       Siandienos meniu                        " << endl;
        cout << "   " << endl;
        cout << "1. Kiaušinienė                          1.45€" << endl;
        cout << "2. Kiaulienos šoninė su keptu kiaušiniu 2.45€"<< endl;
        cout << "3. Keksiukas su vyšnia                  0.99€" << endl;
        cout << "4. Prancūziškas skrebutis               1.99€" << endl;
        cout << "5. Vaisių salotos                       2.49€" << endl;
        cout << "6. Pusryčių dribsniai                   0.69€" << endl;
        cout << "7. Kava                                 0.50€" << endl;
        cout << "8. Arbata                               0.75€" << endl;
        cout << "   " << endl;
        cout << "===============================================================" << endl;
        cout << "9. baigti programa"<< endl;
        cout << "Pasirinkite: " << endl;
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

int getData() {
    // Open the input file
    ifstream file("products.txt");

    // Check if the file was opened successfully
    if (!file.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    vector<Menu> menuItems; // Vector to store the menu items

    string line;
    while (getline(file, line)) {
        // Find the position of the last space or tab, which separates the price
        size_t lastSpace = line.find_last_of(" \t");

        // If no space/tab found, skip this line (in case it's an empty line)
        if (lastSpace == string::npos) continue;

        // Extract the menu item and price
        string menuItem = line.substr(0, lastSpace);
        string price_str = line.substr(lastSpace + 1);

        // Remove the '€' symbol and convert to double
        if (!price_str.empty() && price_str.back() == '€') {
            price_str.pop_back(); // Remove the € sign
        }

        double menuPrice = stod(price_str); // Convert price string to double

        // Store the menu item in the vector
        menuItems.push_back(Menu{menuItem, menuPrice});
    }

    // Close the file
    file.close();

    // Output the extracted menu items and their prices
    cout << "Extracted Menu Items:" << endl;
    for (const auto& menu : menuItems) {
        cout << "Menu Item: " << menu.menuItem << ", Price: " << menu.menuPrice << "€" << endl;
    }

    return 0;
}
