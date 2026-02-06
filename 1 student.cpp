#include <iostream>
using namespace std;

class Student
{
public:
    int a, b, c;

    int average()
    {
        return (a + b + c) / 3;
    }

    int percentage()
    {
        return (a + b + c) / 3;
    }
};
int main()
{
    Student s1, s2, s3;

    cout << "Enter marks for student s1: ";
    cin >> s1.a >> s1.b >> s1.c;
    cout << "Average = " << s1.average() << endl;
    cout << "Percentage = " << s1.percentage() << endl;

    cout << "Enter marks for student s2: ";
    cin >> s2.a >> s2.b >> s2.c;
    cout << "Average = " << s2.average() << endl;
    cout << "Percentage = " << s2.percentage() << endl;

    cout << "Enter marks for student s3: ";
    cin >> s3.a >> s3.b >> s3.c;
    cout << "Average = " << s3.average() << endl;
    cout << "Percentage = " << s3.percentage() << endl;

    return 0;
}
