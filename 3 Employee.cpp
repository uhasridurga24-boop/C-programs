#include <iostream>
using namespace std;

class Employee
{
public:
    int basicPay, hra, da;

    int calculateGrossSalary()
    {
        return basicPay + hra + da;
    }

    void displaySalary()
    {
        cout << "Gross Salary = " << calculateGrossSalary() << endl;
    }
};

int main()
{
    Employee e1, e2, e3;
    
    e1.basicPay = 10000;
    e1.hra = 2000;
    e1.da = 1500;

    e2.basicPay = 12000;
    e2.hra = 2500;
    e2.da = 1800;

    e3.basicPay = 15000;
    e3.hra = 3000;
    e3.da = 2000;

    cout << "Employee 1 ";
    e1.displaySalary();

    cout << "Employee 2 ";
    e2.displaySalary();

    cout << "Employee 3 ";
    e3.displaySalary();

    return 0;
}
