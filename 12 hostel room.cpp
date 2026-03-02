#include <iostream>
using namespace std;

class HostelRoom {
private:
    int roomNumber;
    string studentName;
    bool isOccupied;

public:
    HostelRoom(int rno) {
        roomNumber = rno;
        studentName = "";
        isOccupied = false;
    }
    void allocateRoom(string name) {
        if (isOccupied == false) {
            studentName = name;
            isOccupied = true;
            cout << "Room allocated to " << studentName << endl;
        } else {
            cout << "Room is already occupied!" << endl;
        }
    }
    void vacateRoom() {
        if (isOccupied == true) {
        	
            studentName = "";
            isOccupied = false;
            cout << "Room vacated successfully." << endl;
        } else {
            cout << "Room is already empty!" << endl;
        }
    }

    // Display room status
    void displayStatus() {
        cout << "Room Number: " << roomNumber << endl;
        if (isOccupied == true) {
            cout << "Status: Occupied" << endl;
            cout << "Student Name: " << studentName << endl;
        } else {
            cout << "Status: Vacant" << endl;
        }
        cout << "----------------------" << endl;
    }
};

int main() {
    HostelRoom room1(101);

    room1.displayStatus();
    room1.allocateRoom("Rahul");
    room1.displayStatus();
    room1.vacateRoom();
    room1.displayStatus();

    return 0;
}
