// Inventory Management System

// I. CEP Statement:
// In this programming assignment, you will develop an advanced inventory management system for
// a retail store. This system will handle the storage, management, and analysis of inventory data,
// incorporating various functionalities to optimize store operations.
// II. Problem Definition:
// Design and implement a comprehensive inventory management program using C++. The program
// should support adding new items to the inventory, updating item quantities (e.g., upon receipt or
// sale), calculating total inventory values, generating reports on stock levels, and facilitating sales
// transactions.
// III. System Requirements:
// 1. Adding New Items:
// - User can input details of new inventory items, including item name, price, quantity, and other
// relevant attributes.
// - Implement data validation to ensure accurate and consistent item entries.
// 2. Updating Item Quantities:
// - Provide functionalities to update item quantities based on inventory transactions (e.g., sales,
// restocking).
// - Implement error handling to prevent negative or invalid quantity updates.
// 3. Calculating Total Inventory Values:
// - Calculate the total value of the inventory based on item prices and quantities.
// - Display summary statistics such as total inventory cost and retail value.
// 4. Generating Reports on Stock Levels:
// - Develop reporting features to display current stock levels for all items or specific categories.
// - Allow customization of report formats and filtering options (e.g., low stock alerts).
// 5. Facilitating Sales Transactions:
// - Enable users to process sales transactions by updating inventory quantities and recording sales
// details.

// - Implement features for calculating transaction totals, applying discounts, and generating
// receipts.
// - Provide Functionalities to enable customer for returning any product. If the product is a
// discounted item then the product can’t be returned.
// 6. Data Management and Storage:
// - Use appropriate data structures (e.g., arrays, linked lists, or databases) to manage inventory
// data efficiently.


#include <iostream>
#include <string>

using namespace std;

class Item {
private:
    string name;
    double price;
    int quantity;
    int product_number;

public:
    Item() : name(""), price(0), quantity(0), product_number(0) {}
    Item(string n, double p, int q, int pn) : name(n), price(p), quantity(q), product_number(pn) {}

    void setName(string n) { name = n; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }
    void setProductNumber(int pn) { product_number = pn; }

    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    int getProductNumber() const { return product_number; }
};

class Inventory {
private:
    Item items[100];


public:
    int itemscount;
    Inventory() : itemscount(0) {}

    void addNewItem(string n, double p, int q, int pn);
    void updateItemQuantities(int pn, int q);
    void calculateTotalValue() const;
    void generateReport() const;
    void transactions();
    void dataManagementStorage() const;
    void display(int i) const;
    int findItemByProductNumber(int pn) const;
};

void Inventory::addNewItem(string n, double p, int q, int pn) {
    for (int i = 0; i < itemscount; ++i) {
        if (items[i].getProductNumber() == pn) {
            cout << "Error: Item with this product number already exists.\n";
            return;
        }
    }
    if (itemscount < 100) {
        items[itemscount] = Item(n, p, q, pn);
        cout << "Item added successfully.\n";
        display(itemscount);
        itemscount++;
    } else {
        cout << "Error: Inventory is full.\n";
    }
}

void Inventory::updateItemQuantities(int pn, int q) {
    int index = findItemByProductNumber(pn);
    if (index == -1) {
        cout << "Error: Item not found.\n";
        return;
    }
    if (items[index].getQuantity() + q < 0) {
        cout << "Error: Quantity cannot be negative.\n";
        return;
    }
    items[index].setQuantity(items[index].getQuantity() + q);
    cout << "Item updated successfully.\n";
    display(index);
}

void Inventory::calculateTotalValue() const {
    double totalValue = 0;
    for (int i = 0; i < itemscount; ++i) {
        totalValue += items[i].getPrice() * items[i].getQuantity();
    }
    cout << "Total Value: $" << totalValue << endl;
}

void Inventory::generateReport() const {
    int choice, pn;
    cout << "1. All Items\n";
    cout << "2. Specific Category (Product Number)\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        for (int i = 0; i < itemscount; ++i) {
            display(i);
        }
        break;
    case 2:
        cout << "Enter Product Number: ";
        cin >> pn;
        for (int i = 0; i < itemscount; ++i) {
            if (items[i].getProductNumber() == pn) {
                display(i);
                return;
            }
        }
        cout << "Error: Item not found.\n";
        break;
    default:
        cout << "Error: Unknown choice\n";
    }
}

void Inventory::transactions() {
    int choice, pn, quantity;
    double total;
    cout << "Select transaction type:\n";
    cout << "1. Sale\n2. Return\n";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Invalid choice\n";
        return;
    }

    cout << "Enter Product Number: ";
    cin >> pn;
    cout << "Enter Quantity: ";
    cin >> quantity;

    int index = findItemByProductNumber(pn);
    if (index == -1) {
        cout << "Item not found\n";
        return;
    }

    if (choice == 1) {  // Sale
        if (items[index].getQuantity() < quantity) {
            cout << "Insufficient stock for sale\n";
            return;
        }
        items[index].setQuantity(items[index].getQuantity() - quantity);
        total = items[index].getPrice() * quantity;
        cout << "Total: $" << total << endl;
        cout << "Sale completed successfully\n";
    } else if (choice == 2) {
        items[index].setQuantity(items[index].getQuantity() + quantity);
        total = items[index].getPrice() * quantity;
        cout << "Total refund: $" << total << endl;
        cout << "Return completed successfully\n";
    }
    display(index);
}

void Inventory::dataManagementStorage() const {
    for (int i = 0; i < itemscount; ++i) {
        display(i);
    }
}

void Inventory::display(int i) const {
    cout << items[i].getProductNumber() << " "
         << items[i].getName() << " "
         << items[i].getPrice() << " "
         << items[i].getQuantity() << endl;
}

int Inventory::findItemByProductNumber(int pn) const {
    for (int i = 0; i < itemscount; ++i) {
        if (items[i].getProductNumber() == pn) {
            return i;
        }
    }
    return -1;
}

int main() {
    Inventory i1;
    int choice;
    string itemName;
    int quantity;
    double price;
    int pn;

    cout << "\tInventory Management System\n" << endl;

    do {
        cout << "\tMain Menu\n" << endl;
        cout << "1. Data Management and Storage" << endl;
        cout << "2. Add New Items" << endl;
        cout << "3. Update Item Quantities" << endl;
        cout << "4. Calculating Total Inventory Values" << endl;
        cout << "5. Generating Reports on Stock Levels" << endl;
        cout << "6. Facilitating Sales Transactions" << endl;
        cout << "7. Exit\n" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "1. Data Management and Storage" << endl;
            i1.dataManagementStorage();
            break;
        case 2:
            cout << "2. Add New Items" << endl;
            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter item price: ";
            cin >> price;
            cout << "Enter item quantity: ";
            cin >> quantity;
            pn = i1.itemscount + 1;
            i1.addNewItem(itemName, price, quantity, pn);
            break;
        case 3:
            cout << "3. Update Item Quantities" << endl;
            cout << "Enter Product Number: ";
            cin >> pn;
            cout << "Enter quantity: ";
            cin >> quantity;
            i1.updateItemQuantities(pn, quantity);
            break;
        case 4:
            cout << "4. Calculating Total Inventory Values" << endl;
            i1.calculateTotalValue();
            break;
        case 5:
            cout << "5. Generating Reports on Stock Levels" << endl;
            i1.generateReport();
            break;
        case 6:
            cout << "6. Facilitating Sales Transactions" << endl;
            i1.transactions();
            break;
        case 7:
            cout << "7. Exit" << endl;
            cout << "Thank you for using Inventory Management System" << endl;
            return 0;
        default:
            cout << "Error: Unknown choice" << endl;
            break;
        }

    } while (choice != 7);

    return 0;
}
