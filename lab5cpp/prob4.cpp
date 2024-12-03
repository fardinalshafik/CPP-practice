// Define a class Matrix with private members for the number of rows, number of columns, 
// and a two-dimensional array for the matrix elements. Write a friend function multiply 
// that takes two Matrix objects as parameters and returns their product.
#include<iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
public:
    int arr[10][10];
    void setdata(){
        cout << "Enter the number of rows and columns: ";
        cin >> rows >> cols;
        cout << "Enter the elements of the matrix: ";
        for (int i=0; i<rows; i++){
            for (int j=0; j<cols; j++){
                cout << "Value of " << i << "," << j << ": ";
                cin >> arr[i][j];
            }
        }
    }
    friend void multiply(Matrix a, Matrix b);
};
void multiply(Matrix a, Matrix b) {
    int c[10][10];
    for (int i=0; i<a.rows; i++){
        for (int j=0; j<b.cols; j++){
            int sum =0;
            for (int k=0; k<b.rows; k++){
                sum += a.arr[i][k] * b.arr[k][j];
            }
            c[i][j]= sum;
        }
    }
    cout << "The product of the two matrices is: \n";
    for (int i=0; i<a.rows; i++){
        for (int j=0; j<b.cols; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main() 
{
    Matrix m1, m2;
    m1.setdata();
    m2.setdata();

    multiply(m1, m2);
    return 0;
}