#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    string collegeName;
    Student(int r, int m)
    {
        rollNo = r;
        marks = m;
    }
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "College: " << collegeName << endl;
        cout << endl;
    }
};

int main()
{
    Student s1(1, 85);
    Student s2(2, 90);
    Student s3(3, 78);

    s1.collegeName = "College 1";
    s2.collegeName = "College 2";
    s3.collegeName = "College 3";

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
