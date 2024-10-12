// syntax using friend function
// friend returntype operator symbol(argument)

#include <iostream>
using namespace std;

class Counter {
    private:
        int count;

    public:
        // Constructor to initialize count
        Counter(int x = 0) {
            count = x;
        }

        // Friend function to overload the prefix ++ operator
        friend Counter& operator++(Counter& obj);

        // Function to display the count
        void display() const {
            cout << "Count: " << count << endl;
        }
};

// Definition of the friend function to overload prefix ++ operator
Counter& operator++(Counter& obj) {
    // Increment the count
    obj.count += 1;
    // Return the updated object (returning by reference to avoid copying)
    return obj;
}

int main() {
    Counter c1(5);

    // Before increment
    c1.display();

    // Using overloaded prefix ++ operator
    ++c1;

    // After increment
    c1.display();

    return 0;
}
