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
#include<vector>
#include <string>


using namespace std;

class Items
{
private:
    string itemName;
    int itemPrice;
    int itemQuantity;

public:
    void setItemName(string name){ itemName = name; }
    string getItemName(){ return itemName; }
    void setItemPrice(int price){ itemPrice = price; }
    int getItemPrice(){ return itemPrice; }
    void setItemQuantity(int quantity){ itemQuantity = quantity; }
    int getItemQuantity(){ return itemQuantity; } 

};

class Transaction 
{
    public:

    void process_sale();
    void data_management_and_storage();

};

class InventoryManager : public Items , public Transaction
{
    public:

    void add_items();
    void update_quantities();
    void calculate_inventory_values();
    void generate_report();

};


int main(){
    int choice;

    InventoryManager i1;
    cout << "\tInventory Management System\n" << endl;

    do
    {
        
        cout << "\n1. Add New Items\n" << endl;
        cout << "2. Update Item Quantities\n" << endl;
        cout << "3. Calculating Total Inventory Values\n" << endl;
        cout << "4. Generating Reports on Stock Levels\n" << endl;
        cout << "5. Facilitating Sales Transactions\n" << endl;
        cout << "6. Data Management and Storage\n" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
    
        if (choice == 1){
            i1.add_items();
        }else if (choice == 2){
            i1.update_quantities();
        }else if (choice == 3){
            i1.calculate_inventory_values();
        }else if (choice == 4){
            i1.generate_report();
        }else if (choice == 5){
            i1.process_sale();
        }else if (choice == 6){
            i1.data_management_and_storage();
        }else {
            cout << "Invalid Choice" << endl;
        }
     
    } while (choice != 6);

    return 0;
}


void InventoryManager::add_items(){
    cout << "Add New Items" << endl;
    string name;
    cout << "Enter Item Name: " ;
    cin>> name;
    this->setItemName(name);
    int price;
    cout << "Enter Item Price: ";
    cin>> price;
    this->setItemPrice(price);
    int quantity;
    cout << "Enter Item Quantity: " ;
    cin>> quantity;
    this->setItemQuantity(quantity);
    cout << "Successfully Item Added" << endl;

}

void InventoryManager::update_quantities(){
    cout << "Update Item Quantities" << endl;
    int quantity;
    cout << "Enter Item Quantity" << endl;
    cin>> quantity;
    this->setItemQuantity(quantity);
    cout << "Successfully Item Quantity Updated" << endl;

}

void InventoryManager::calculate_inventory_values()
{
    cout << "Calculating Total Inventory Values" << endl;
    int total_value = this->getItemPrice() * this->getItemQuantity();
    cout << "Total Value of Inventory: " << total_value << endl;

}

void InventoryManager::generate_report(){
    cout << "Generating Reports on Stock Levels" << endl;
    int total_quantity = this->getItemQuantity();
    cout << "Total Quantity of Inventory: " << total_quantity << endl;

}

void Transaction::process_sale(){
    cout << "Facilitating Sales Transactions" << endl;
    int quantity;

}
void Transaction::data_management_and_storage(){
    cout << "Data Management and Storage" << endl;

}