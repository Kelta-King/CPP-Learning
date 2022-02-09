#include <iostream>
using namespace std;

class Person{

    public:
        string name;
        int age;
        Person(string name, int age, int salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }
        void printDetails(){
            cout << "The name of first person is: " << this->name << " and the age is: " << this->age << " and salary is: " << this->salary;
        }

    protected:
        string occupation;

    private:
        int salary;

};

int main(){

    Person one = Person("Kushang Shah", 21, 345);
    one.printDetails();
    return 0;

}