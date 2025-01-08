#include <iostream>
using namespace std;

struct Contact {
    int id;
    string firstName;
    string lastName;
    string phone;
    int age;
    Contact* next;
};

Contact* head = nullptr;
int nextId = 1;
void addContact();
void printContacts();
void updateContact(int id);
void deleteContact(int id);




int main() {
    int par;
    while (par != 3){
        cout << "Pasirinkite programa" << endl;
        cout << "1. Lentelė" <<endl;
        cout << "2. afesdaf" <<endl;
        cin >> par;

        switch (par) {
            case 1:{
                int rows, cols;
                cout << "Įveskite lentelės eilučių skaičių: ";
                cin >> rows;
                cout << "Įveskite lentelės stulpelių skaičių: ";
                cin >> cols;
                int** table = new int*[rows];
                for (int i = 0; i < rows; i++) {
                    table[i] = new int[cols];
                }

                cout << "Įveskite lentelės reikšmes:\n";
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        cout << "Elementas [" << i << "][" << j << "]: ";
                        cin >> table[i][j];
                    }
                }

                cout << "\nLentelė:\n";
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        cout << table[i][j] << " ";
                    }
                    cout << endl;
                }

                cout << "\nEilučių sumos:\n";
                for (int i = 0; i < rows; i++) {
                    int rowSum = 0;
                    for (int j = 0; j < cols; j++) {
                        rowSum += table[i][j];
                    }
                    cout << "Eilutė " << i << ": " << rowSum << endl;
                }

                cout << "\nStulpelių sumos:\n";
                for (int j = 0; j < cols; j++) {
                    int colSum = 0;
                    for (int i = 0; i < rows; i++) {
                        colSum += table[i][j];
                    }
                    cout << "Stulpelis " << j << ": " << colSum << endl;
                }

                int maxVal = table[0][0];
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (table[i][j] > maxVal) {
                            maxVal = table[i][j];
                        }
                    }
                }

                cout << "\nDidžiausia reikšmė lentelėje: " << maxVal << endl;
                for (int i = 0; i < rows; i++) {
                    delete[] table[i];
                }
                delete[] table;

                break;
            }

            case 2: {
                int choice, id;
                do {
                    cout << "\n1. Pridėti kontaktą\n"
                         << "2. Atspausdinti visus kontaktus\n"
                         << "3. Atnaujinti kontaktą\n"
                         << "4. Ištrinti kontaktą\n"
                         << "5. Išeiti\n"
                         << "Pasirinkite veiksmą: ";
                    cin >> choice;

                    switch (choice) {
                        case 1:
                            addContact();
                        break;
                        case 2:
                            printContacts();
                        break;
                        case 3:
                            cout << "Įveskite kontakto ID atnaujinimui: ";
                        cin >> id;
                        updateContact(id);
                        break;
                        case 4:
                            cout << "Įveskite kontakto ID ištrynimui: ";
                        cin >> id;
                        deleteContact(id);
                        break;
                        case 5:
                            cout << "Programa uždaroma.\n";
                        break;
                        default:
                            cout << "Neteisingas pasirinkimas. Bandykite dar kartą.\n";
                    }
                } while (choice != 5);

                break;
            }

            case 3: cout << "programa baigta" << endl; break;

            default: cout << "Nėra tokio pasirinkimo" << endl;
        }
    }
}


void addContact() {
    Contact* newContact = new Contact;
    newContact->id = nextId++;
    newContact->next = nullptr;

    cout << "Įveskite vardą: ";
    cin >> newContact->firstName;

    cout << "Įveskite pavardę: ";
    cin >> newContact->lastName;

    cout << "Įveskite telefono numerį: ";
    cin >> newContact->phone;

    cout << "Įveskite amžių: ";
    cin >> newContact->age;

    if (head == nullptr) {
        head = newContact;
    } else {
        Contact* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newContact;
    }

    cout << "Kontaktas pridėtas sėkmingai!\n";
}

void printContacts() {
    if (head == nullptr) {
        cout << "Kontaktų sąrašas tuščias.\n";
        return;
    }

    Contact* temp = head;
    while (temp != nullptr) {
        cout << "ID: " << temp->id
             << ", Vardas: " << temp->firstName
             << ", Pavardė: " << temp->lastName
             << ", Telefonas: " << temp->phone
             << ", Amžius: " << temp->age << "\n";
        temp = temp->next;
    }
}

void updateContact(int id) {
    Contact* temp = head;
    while (temp != nullptr) {
        if (temp->id == id) {
            cout << "Įveskite naują vardą: ";
            cin >> temp->firstName;

            cout << "Įveskite naują pavardę: ";
            cin >> temp->lastName;

            cout << "Įveskite naują telefono numerį: ";
            cin >> temp->phone;

            cout << "Įveskite naują amžių: ";
            cin >> temp->age;

            cout << "Kontaktas atnaujintas sėkmingai!\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Kontaktas su nurodytu ID nerastas.\n";
}

void deleteContact(int id) {
    Contact* temp = head;
    Contact* prev = nullptr;

    while (temp != nullptr) {
        if (temp->id == id) {
            if (prev == nullptr) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            cout << "Kontaktas ištrintas sėkmingai!\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "Kontaktas su nurodytu ID nerastas.\n";
}