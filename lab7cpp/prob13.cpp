// We want to store the information about different vehicles. Create a class named
// Vehicle with two data members named mileage and price. Create its two subclasses
// *Car with data members to store ownership cost, warranty (by years), seating
// capacity, and fuel type (diesel or petrol).
// *Bike with data members to store the number of cylinders, number of gears, cooling
// type (air, liquid, or oil), wheel type (alloys or spokes) and fuel tank size (in inches)
// Make another two subclasses, Audi and Ford of Car, each having a data member to
// store the model type. Next, make two subclasses, Bajaj and TVS, each having a data
// member to store the make-type.
// Now, store and print the information of an Audi and a Ford car (i.e., model type,
// ownership cost, warranty, seating capacity, fuel type, mileage, and price.) Do the
// same for a Bajaj and a TVS bike.

#include<iostream>
#include<string>

using namespace std;

class Vehicle{
protected:
    int mileage;
    int price;
public:
    Vehicle (int m,int p): mileage(m), price(p) {}
};

class Car: public Vehicle{
protected:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;
public:
    Car(int m, int p, int oc, int w, int sc, string ft): Vehicle(m,p), ownership_cost(oc), warranty(w), seating_capacity(sc), fuel_type(ft) {}

};

class Bike: public Vehicle{
protected:
    int number_of_cylinders;
    int number_of_gears;
    string cooling_type;
    string wheel_type;
    int fuel_tank_size;
public:
    Bike(int m, int p, int nc, int ng, string ct, string wt, int fts): Vehicle(m,p), number_of_cylinders(nc), number_of_gears(ng), cooling_type(ct), wheel_type(wt), fuel_tank_size(fts) {}

};

class Audi: public Car{
    string model_type;
public:
    Audi(int m, int p, int oc, int w, int sc, string ft, string mt): Car(m,p,oc,w,sc,ft), model_type(mt) {}
    void print(){
        cout << "Model Type: " << model_type << endl;
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty: " << warranty << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Ford: public Car{
protected:
    string model_type;
public:
    Ford(int m, int p, int oc, int w, int sc, string ft, string mt): Car(m,p,oc,w,sc,ft), model_type(mt) {}
    void print(){
        cout << "Model Type: " << model_type << endl;
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty: " << warranty << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Bajaj: public Bike{
    protected:
    string make_type;
    public:
    Bajaj(int m, int p, int nc, int ng, string ct, string wt, int fts, string mt): Bike(m,p,nc,ng,ct,wt,fts), make_type(mt) {}
    void print(){
        cout << "Make Type: " << make_type << endl;
        cout << "Number of Cylinders: " << number_of_cylinders << endl;
        cout << "Number of Gears: " << number_of_gears << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel Type: " << wheel_type << endl;
        cout << "Fuel Tank Size: " << fuel_tank_size << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class TVS: public Bike{
    protected:
    string make_type;
    public:
    TVS(int m, int p, int nc, int ng, string ct, string wt, int fts, string mt): Bike(m,p,nc,ng,ct,wt,fts), make_type(mt) {}
    void print(){
        cout << "Make Type: " << make_type << endl;
        cout << "Number of Cylinders: " << number_of_cylinders << endl;
        cout << "Number of Gears: " << number_of_gears << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel Type: " << wheel_type << endl;
        cout << "Fuel Tank Size: " << fuel_tank_size << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Creating an instance of Audi
    Audi audi(22, 50000, 1500, 3, 5, "petrol", "Audi Q7");
    cout << "Audi Car Details:" << endl;
    audi.print();
    cout << endl; 


    Ford ford(18, 45000, 1200, 2, 4, "diesel", "Ford Mustang");
    cout << "Ford Car Details:" << endl;
    ford.print();
    cout << endl;


    Bajaj bajaj(60, 2000, 1, 5, "air", "spokes", 10, "Bajaj Pulsar");
    cout << "Bajaj Bike Details:" << endl;
    bajaj.print();
    cout << endl;


    TVS tvs(55, 1800, 1, 4, "liquid", "alloys", 8, "TVS Apache");
    cout << "TVS Bike Details:" << endl;
    tvs.print();
    cout << endl;

    return 0;
}


