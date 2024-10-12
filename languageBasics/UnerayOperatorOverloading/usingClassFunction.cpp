// syntax using class function
// returntype operator symbol()

// An operator which contain only one operand is known as unary operator overloading

// syntax using class function
// returntype operator symbol(argument1)

#include<iostream>
using namespace std;

class Increment{
    public:
        int value;

    Increment(){
        value =10;
    }

    void operator ++(){
        value+= 5;
    }
};

int main()
{
    Increment obj;
    cout<<"Before increment: "<<obj.value<<endl;
    ++obj;
    cout<<"After increment: "<<obj.value<<endl;
    return 0;
}