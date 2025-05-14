#include <iostream>
#include <string>
using namespace std;

// Use an enum for item selection.  This aligns with the tutorial.
enum MenuItem {
    CARAMEL_FRAP,
    CARAMEL_CRUNCH_FRAP,
    GRILLED_CHEESE,
    CHAI_LATTE
};

int main() {
    // Basic variables, as explained in the tutorial.
    int itemChoice;
    int quantity;
    double price = 0.0; // Initialize price

    // Display a simplified menu using cout.
    cout << "*** Vending Machine ***\n";
    cout << "1. Caramel Frappuccino\n";
    cout << "2. Caramel Crunch Frappuccino\n";
    cout << "3. Grilled Cheese Sandwich\n";
    cout << "4. Chai Latte\n";
    cout << "Enter the number of your choice: ";
    cin >> itemChoice;

    cout << "Enter the quantity: ";
    cin >> quantity;

    // Use a switch statement, as shown in the tutorial, to determine the price.
    switch (itemChoice) {
        case CARAMEL_FRAP:
            cout << "Caramel Frappuccino selected.\n";
            price = 3.00 * quantity; // Example price
            break;
        case CARAMEL_CRUNCH_FRAP:
            cout << "Caramel Crunch Frappuccino selected.\n";
            price = 3.50 * quantity; // Example price
            break;
        case GRILLED_CHEESE:
            cout << "Grilled Cheese Sandwich selected.\n";
            price = 5.00 * quantity; // Example price
            break;
        case CHAI_LATTE:
            cout << "Chai Latte selected.\n";
            price = 4.00 * quantity; // Example price
            break;
        default:
            cout << "Invalid selection.\n";
            return 1; // Use a non-zero return code for errors
    }

    // Output the price.
    cout << "Total price: $" << price << endl;

    return 0;
}
