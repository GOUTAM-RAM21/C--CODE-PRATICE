#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerWorker() {
    string name, skill, location, availability;
    cout << "\n--- Worker Registration ---\n";
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter skill (e.g., plumber, painter): ";
    getline(cin, skill);
    cout << "Enter your location (city/town): ";
    getline(cin, location);
    cout << "Enter availability (e.g., morning, full-day): ";
    getline(cin, availability);

    ofstream file("workers.txt", ios::app);
    file << name << "," << skill << "," << location << "," << availability << "\n";
    file.close();

    cout << "\n✅ Worker registered successfully!\n";
}

void postJob() {
    string workType, location, date;
    cout << "\n--- Post a Job ---\n";
    cout << "What type of work? (e.g., electrician, painting): ";
    getline(cin, workType);
    cout << "Location: ";
    getline(cin, location);
    cout << "Preferred Date (e.g., 10 July): ";
    getline(cin, date);

    ofstream file("jobs.txt", ios::app);
    file << workType << "," << location << "," << date << "\n";
    file.close();

    cout << "\n✅ Job posted successfully!\n";
}

int main() {
    int choice;
    do {
        cout << "\n==== LabourConnect Menu ====\n";
        cout << "1. Register as Worker\n";
        cout << "2. Post a Job\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To handle getline after cin

        switch (choice) {
            case 1:
                registerWorker();
                break;
            case 2:
                postJob();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
