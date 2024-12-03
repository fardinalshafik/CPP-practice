// 3. Design a TimeTraveler class that holds the year a person is from. Overload the &gt; operator to
// compare two time travelers and determine who comes from a more distant past.

#include <iostream>
#include <string>
using namespace std;

class TimeTraveler {
private:
    int year;
public:
    TimeTraveler(int y) {
        year = y;
    }

    bool operator>(TimeTraveler &other) {
        return year > other.year;
    }
};

int main() {
    TimeTraveler t1(2000);
    TimeTraveler t2(1000);

    if (t1 > t2) {
        cout << "t1 is older than t2" << endl;
    } else {
        cout << "t2 is older than t1" << endl;
    }

    return 0;
}