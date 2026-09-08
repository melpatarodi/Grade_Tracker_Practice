#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector <float>grades;
    int size;
    float grade;
    
    cout << "How many students are there?: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> grade;
        grades.push_back(grade);
    }

    float average = 0;
    float lowest = grades[0];
    float highest = grades[0];

    for (int i = 0; i < size; i++) {
        average+=grades[i];
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
        if (grades[i] > highest) {
            highest  = grades[i];
        }
    }
    cout << "===============================\n";
    cout << "The average grade is: " << fixed << setprecision(1) <<  average / size << "\n";
    cout << "The lowest grade is: " << lowest << "\n";
    cout << "The highest grade is: " << highest << "\n";

    return 0;
}
