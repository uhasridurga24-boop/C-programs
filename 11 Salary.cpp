#include <iostream>
#include <string>
using namespace std;
class Employee 
{
	public:
    int empId;
    string name;
    int basicSalary;
    int totalSalary;
    void setEmployee(int id, string n, int b) {
        empId = id;
        name = n;
        basicSalary = b;
    }
    int getBasic()
	 { return basicSalary;
	  }
    void setTotal(int t)
	 { totalSalary = t;
	  }
    void show()
	 {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};
class Manager : public Employee
 {
    int allowance;
public:
    void setAllowance(int a) { allowance = a; }
    void calcSalary() { setTotal(getBasic() + allowance); }
    void showManager() { show(); }
};

int main()
 {
    Manager m;
    m.setEmployee(101, "Sirisha", 50000);  
    m.setAllowance(20000);                
    m.calcSalary();
    m.showManager();
    return 0;
}
