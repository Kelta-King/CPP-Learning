#include <iostream>
using namespace std;

class Person{

    public:
        string name;
        int age;

};

int main(){

    Person one = Person();
    one.name = "Kushang Shah";
    one.age = 21;

    cout << "The name of first person is: " << one.name << " and the age is: " << one.age;
    
    return 0;

}