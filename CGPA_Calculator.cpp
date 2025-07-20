#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numSemesters;
    cout << "Enter the number of semesters: ";
    cin >> numSemesters;

    float totalGradePointsAll = 0;
    int totalCreditsAll = 0;

    for (int sem = 1; sem <= numSemesters; sem++) {
        cout << "\n--- Semester " << sem << " ---\n";
        int numCourses;
        cout << "Enter number of courses in Semester " << sem << ": ";
        cin >> numCourses;

        float totalGradePointsSem = 0;
        int totalCreditsSem = 0;

        for (int course = 1; course <= numCourses; course++) {
            float grade;
            int credit;
            cout << "\nCourse " << course << ":\n";
            cout << "Enter grade (e.g., 8.5): ";
            cin >> grade;
            cout << "Enter credit hours: ";
            cin >> credit;

            totalGradePointsSem += grade * credit;
            totalCreditsSem += credit;
        }

        float gpa = totalGradePointsSem / totalCreditsSem;
        cout << fixed << setprecision(2);
        cout << "GPA for Semester " << sem << ": " << gpa << endl;

        totalGradePointsAll += totalGradePointsSem;
        totalCreditsAll += totalCreditsSem;
    }

    float cgpa = totalGradePointsAll / totalCreditsAll;
    cout << "\n=====================================\n";
    cout << "Total Grade Points: " << totalGradePointsAll << endl;
    cout << "Total Credits: " << totalCreditsAll << endl;
    cout << "Final CGPA (Overall): " << cgpa << endl;

    return 0;
}
