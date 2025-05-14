#include <iostream>
#include <string>
using namespace std;

// Enums for item categories and specific items
enum Category {
    FOOD,
    DRINK,
    TEA
};

enum FoodItem {
    GRILLED_CHEESE,
    HAM_SWISS_BAGUETTE,
    TOMATO_MOZZARELLA
};

enum DrinkItem {
    CARAMEL_FRAP,
    MOCHA_COOKIE_FRAP,
    COFFEE_FRAP
};

enum TeaItem {
    CHAI_LATTE,
    MATCHA_LATTE,
    LONDON_FOG
};

int main() {
    // Variables for user choice and quantity
    int categoryChoice;
    int itemChoice;
    int quantity;
    double price = 0.0;

    // Display menu categories
    cout << "*** Vending Machine ***\n";
    cout << "Categories:\n";
    cout << FOOD << ". Food\n";
    cout << DRINK << ". Drink\n";
    cout << TEA << ". Tea\n";
    cout << "Enter the number of your category choice: ";
    cin >> categoryChoice;

    // Display items within the chosen category
    switch (categoryChoice) {
        case FOOD:
            cout << "\nFood Items:\n";
            cout << GRILLED_CHEESE << ". Grilled Cheese Sandwich\n";
            cout << HAM_SWISS_BAGUETTE << ". Ham and Swiss Baguette\n";
            cout << TOMATO_MOZZARELLA << ". Tomato Mozzarella\n";
            cout << "Enter the number of your food choice: ";
            cin >> itemChoice;

            cout << "Enter the quantity: ";
            cin >> quantity;

            // Calculate price based on food choice
            switch (itemChoice) {
                case GRILLED_CHEESE:
                    price = 5.99 * quantity; // Example price
                    break;
                case HAM_SWISS_BAGUETTE:
                    price = 7.29 * quantity; // Example price
                    break;
                case TOMATO_MOZZARELLA:
                    price = 6.99 * quantity; // Example price
                    break;
                default:
                    cout << "Invalid selection.\n";
                    return 1;
            }
            break;

        case DRINK:
            cout << "\nDrink Items:\n";
            cout << CARAMEL_FRAP << ". Caramel Frappuccino\n";
            cout << MOCHA_COOKIE_FRAP << ". Mocha Cookie Frappuccino\n";
            cout << COFFEE_FRAP << ". Coffee Frappuccino\n";
            cout << "Enter the number of your drink choice: ";
            cin >> itemChoice;

            cout << "Enter the quantity: ";
            cin >> quantity;

            // Calculate price based on drink choice
            switch (itemChoice) {
                case CARAMEL_FRAP:
                    price = 4.50 * quantity; // Example price
                    break;
                case MOCHA_COOKIE_FRAP:
                    price = 4.75 * quantity; // Example price
                    break;
                case COFFEE_FRAP:
                    price = 3.75 * quantity; // Example price
                    break;
                default:
                    cout << "Invalid selection.\n";
                    return 1;
            }
            break;

        case TEA:
            cout << "\nTea Items:\n";
            cout << CHAI_LATTE << ". Chai Latte\n";
            cout << MATCHA_LATTE << ". Matcha Latte\n";
            cout << LONDON_FOG << ". London Fog\n";
            cout << "Enter the number of your tea choice: ";
            cin >> itemChoice;

            cout << "Enter the quantity: ";
            cin >> quantity;

            // Calculate price based on tea choice
            switch (itemChoice) {
                case CHAI_LATTE:
                    price = 4.25 * quantity; // Example price
                    break;
                case MATCHA_LATTE:
                    price = 4.95 * quantity; // Example price
                    break;
                case LONDON_FOG:
                    price = 4.65 * quantity; // Example price
                    break;
                default:
                    cout << "Invalid selection.\n";
                    return 1;
            }
            break;

        default:
            cout << "Invalid category selection.\n";
            return 1;
    }

    // Display total price
    cout << "Total price: $" << price << endl;

    return 0;
}