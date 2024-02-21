#include <iostream>
#include <cmath>
using namespace std;
inline double AreaSquare(double side) {
    return side * side;
}
inline double PerimeterSquare(double side) {
    return 4 * side;
}
inline double AreaCircle(double radius) {
    return M_PI * radius * radius;
}
inline double PerimeterCircle(double radius) {
    return 2 * M_PI * radius;
}
inline double VolumeCube(double side) {
    return side * side * side;
}
int main() {
    int choice;
    cout << "Select an option:\n";
    cout << "1. Calculate area of a square\n";
    cout << "2. Calculate perimeter of a square\n";
    cout << "3. Calculate area of a circle\n";
    cout << "4. Calculate perimeter of a circle\n";
    cout << "5. Calculate volume of a cube\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch(choice) {
        case 1:
        case 2: {
            double side;
            cout << "Enter the side length: ";
            cin >> side;
            if (choice == 1)
                cout << "Area of the square: " << AreaSquare(side) << endl;
            else
                cout << "Perimeter of the square: " << PerimeterSquare(side) << endl;
            break;
        }
        case 3:
        case 4: {
            double radius;
            cout << "Enter the radius: ";
            cin >> radius;
            if (choice == 3)
                cout << "Area of the circle: " << AreaCircle(radius) << endl;
            else
                cout << "Perimeter of the circle: " << PerimeterCircle(radius) << endl;
            break;
        }
        case 5: {
            double side;
            cout << "Enter the side length: ";
            cin >> side;
            cout << "Volume of the cube: " << VolumeCube(side) << endl;
            break;
        }
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}
