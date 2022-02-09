// See GFG for inheritance

#include <iostream>
using namespace std;

class Person{

    public:
        string name;
        int age;
        // Person(string name, int age, int salary){
        //     this->name = name;
        //     this->age = age;
        //     this->salary = salary;
        // }
        void printDetails(){
            cout << "The name of first person is: " << this->name << " and the age is: " << this->age << " and salary is: " << this->salary;
        }

    private:
        int salary;

};

class Doctor : public Person {

    public:
        Doctor(string name, int age){
            // super();
            this->name = name;
            this->age = age;
        }
        int practiceYear = 2;

};

int main(){

    Doctor one = Doctor("Kushang", 23);
    one.printDetails();
    return 0;

}