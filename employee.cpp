#include <string>
#include <iostream>
using namespace std;

class Employee {
public:
    // Constructors
    Employee(string name, int idNumber, string department, string position) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }
    
    Employee(string name, int idNumber) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }
    
    Employee() {
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    }
    
    // Mutator functions
    void setName(string name) {
        this->name = name;
    }
    
    void setIdNumber(int idNumber) {
        this->idNumber = idNumber;
    }
    
    void setDepartment(string department) {
        this->department = department;
    }
    
    void setPosition(string position) {
        this->position = position;
    }
    
    // Accessor functions
    std::string getName() const {
        return name;
    }
    
    int getIdNumber() const {
        return idNumber;
    }
    
    std::string getDepartment() const {
        return department;
    }
    
    std::string getPosition() const {
        return position;
    }
    
private:
    string name;
    int idNumber;
    string department;
    string position;
};

int main() {
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");
    
    // Display employee data
    cout << "Name\t\tID Number\tDepartment\tPosition"<<endl;
    cout << emp1.getName() << "\t" << emp1.getIdNumber() << "\t\t" << emp1.getDepartment() << "\t\t" << emp1.getPosition() << "endl";
    cout << emp2.getName() << "\t" << emp2.getIdNumber() << "\t\t" << emp2.getDepartment() << "\t\t\t" << emp2.getPosition() << "endl";
    cout << emp3.getName() << "\t\t" << emp3.getIdNumber() << "\t\t" << emp3.getDepartment() << "\t" << emp3.getPosition() << "endl";
    
    return 0;
}