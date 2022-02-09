#include <iostream>
using namespace std;

class Person{

    public:
        string name;
        int age;
        void setSalary(int salary){
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

    Person one = Person();
    one.name = "Kushang Shah";
    one.age = 21;
    one.setSalary(230);
    one.printDetails();
    return 0;

}