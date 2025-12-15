#include <iostream>
using namespace std;

int readLineSensor()
{
    int sensorValue;
    cout << "Enter sensor value (0=off line, 1=on line): ";
    cin >> sensorValue;
    return sensorValue;
}

int main()
{
    char command;
    cout << "Line Following Robot Control System" << endl;
    cout << "Press 'q' to quit." << endl;

    while (true) {
        int sensor = readLineSensor();

        if (sensor == 1) {
            cout << "On line: Move forward" << endl;
        }
        else {
            cout << "Off line: Turn to find line" << endl;
        }

        cout << "Continue? (y/n): ";
        cin >> command;
        if (command == 'n' || command == 'q') {
            break;
        }
    }

    cout << "System stopped." << endl;
    return 0;
}