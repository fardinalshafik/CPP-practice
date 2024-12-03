// 3. Charlie is working on a database application in C++. He wants to allow users to query
// the database using different data types, such as integers, strings, and dates. He uses
// function overloading to define different versions of the query() function that take different
// parameter types.

#include <iostream>
using namespace std;

class Database
{
    public:
    void query(int);
    void query(string);
    void query(string, string);
    
};

void Database::query(int x)
{
    cout << x << endl;
}

void Database::query(string x)
{
    cout << x << endl;
}

void Database::query(string x, string y)
{
    cout << x << " " << y << endl;
}

int main()
{
    Database db;
    db.query(10);
    db.query("Hello");
    db.query("Hello", "World");
    return 0;
}