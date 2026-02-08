#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    double grade;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Calculate Average\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Grade: ";
            cin >> s.grade;
            students.push_back(s);
        }
        else if (choice == 2) {
            for (const auto& s : students) {
                cout << "ID: " << s.id << " Grade: " << s.grade << endl;
            }
        }
        else if (choice == 3) {
            double sum = 0;
            for (const auto& s : students) sum += s.grade;
            cout << "Average: " << sum / students.size() << endl;
        }

    } while (choice != 4);

    return 0;
}
