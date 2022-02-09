#include <iostream>
using namespace std;

class Person{

    public:
        string name;
        int age;
        void printDetails(){
            cout << "The name of first person is: " << this->name << " and the age is: " << this->age << endl;
        }

};

int main(){

    Person one = Person();
    one.name = "Kushang Shah";
    one.age = 21;
    one.printDetails();
    return 0;

}