// 8: Design a C++ class to represent a Product. The class should have the following attributes:
// product name, product code, product price. The class should also have the following methods:
// getProductName(), getProductCode(), getProductPrice(), setProductName(), setProductCode(),
// setProductPrice(). The class should have a constructor that initializes the product name, product
// code and product price. Write a C++ program to create a Product object and show the information.

#include <iostream>
#include <string>

using namespace std;

class Product
{
    private:
    string productName;
    string productCode;
    double productPrice;
    public:
    Product(){};
    Product(string n, string c, double p){
        productName = n;
        productCode = c;
        productPrice = p;
    }
    string getProductName(){
        return productName;
    }
    string getProductCode(){
        return productCode;
    }
    double getProductPrice(){
        return productPrice;
    }
    void setProductName(string n){
        productName = n;
    }
    void setProductCode(string c){
        productCode = c;
    }
    void setProductPrice(double p){
        productPrice = p;
    }
    void showProduct(){
        cout << "Product Name: " << productName << endl;
        cout << "Product Code: " << productCode << endl;
        cout << "Product Price: " << productPrice << endl;
    }
    ~Product(){};
};

int main(){
    Product p1("Rice","A001",75);
    p1.showProduct();

    Product p2;
    p2.setProductName("Lentils");
    p2.setProductCode("A002");
    p2.setProductPrice(120);
    p2.showProduct();

    return 0;
}