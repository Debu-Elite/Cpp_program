#include <iostream>
using namespace std;

void submenu1() {
    int choice;
    do {
        cout << "\n--- Sub Menu 1 ---\n";
        cout << "1. Sub Option 1\n";
        cout << "2. Sub Option 2\n";
        cout << "3. Sub Option 3\n";
        cout << "4. Sub Option 4\n";
        cout << "5. Go Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "You selected Sub Option 1\n"; break;
            case 2: cout << "You selected Sub Option 2\n"; break;
            case 3: cout << "You selected Sub Option 3\n"; break;
            case 4: cout << "You selected Sub Option 4\n"; break;
            case 5: cout << "Returning to Main Menu...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);
}

int main() {
    int choice;
    do {
        cout << "\n=== MAIN MENU ===\n";
        cout << "1. Menu Option 1\n";
        cout << "2. Menu Option 2\n";
        cout << "3. Menu Option 3\n";
        cout << "4. Menu Option 4\n";
        cout << "5. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: submenu1(); break;
            case 2: cout << "You selected Option 2\n"; break;
            case 3: cout << "You selected Option 3\n"; break;
            case 4: cout << "You selected Option 4\n"; break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
