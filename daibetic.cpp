#include<iostream>
using namespace std;

void checkDiabetes(float bloodSugarLevel, string timeOfDay) {
    if (timeOfDay == "before") {
        // Check for fasting (before meal) blood sugar level
        if (bloodSugarLevel < 70) {
            cout << "Before meal: Low blood sugar. Consult a doctor immediately." << endl;
        } else if (bloodSugarLevel >= 70 && bloodSugarLevel <= 99) {
            cout << "Before meal: Normal blood sugar level. The patient is not diabetic." << endl;
        } else if (bloodSugarLevel >= 100 && bloodSugarLevel <= 125) {
            cout << "Before meal: Prediabetic range. The patient should monitor their health." << endl;
        } else {
            cout << "Before meal: Diabetic range. The patient should consult a doctor for diagnosis and treatment." << endl;
        }
    }
    else if (timeOfDay == "after") {
        if (bloodSugarLevel < 140) {
            cout << "After meal: Normal blood sugar level. The patient is not diabetic." << endl;
        } else if (bloodSugarLevel >= 140 && bloodSugarLevel <= 199) {
            cout << "After meal: Prediabetic range. The patient should monitor their health." << endl;
        } else {
            cout << "After meal: Diabetic range. The patient should consult a doctor for diagnosis and treatment." << endl;
        }
    }
    else {
        cout << "Invalid input for time of day. Please enter 'before' or 'after'." << endl;
    }
}

int main() {
    float bloodSugarLevel;
    string mealTime;
    cout << "Enter the time of day (before/after meal): ";
    cin >> mealTime;
    cout << "Enter the patient's blood sugar level (mg/dL): ";
    cin >> bloodSugarLevel;
    checkDiabetes(bloodSugarLevel, mealTime);

    return 0;
}
