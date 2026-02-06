#include <iostream>
#include <string>
using namespace std;
class AcademicRecord {
public:	
    int rollNo;
    int marks;
    void setAcademic(int r, int m) {
        rollNo = r;
        marks = m;
    }
    int getMarks() { return marks; }
    int getRollNo() { return rollNo; }
};
class SportsRecord {
    string sportName;
    int sportScore;
public:
    void setSports(string s, int sc) {
        sportName = s;
        sportScore = sc;
    }
    int getSportScore() { return sportScore; }
    string getSportName() { return sportName; }
};
class Student : public AcademicRecord, public SportsRecord {
public:
    void display()
	 {
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Marks: " << getMarks() << endl;
        cout << "Sport: " << getSportName() << endl;
        cout << "Sport Score: " << getSportScore() << endl;
        cout << "Total Score: " << (getMarks() + getSportScore()) << endl;
    }
};
int main() 
{
    Student s;
    s.setAcademic(101, 85);     
    s.setSports("Cricket", 15);  
    s.display();
    return 0;
}
