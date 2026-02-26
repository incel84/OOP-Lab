#include <iostream>
using namespace std;

class MedicationEntry {
public:
    string drugName;
    string dose;
    string timeGiven;

    MedicationEntry(string d, string ds, string t) {
        drugName = d;
        dose = ds;
        timeGiven = t;
    }
};

class VitalSignsCheck {
public:
    float temperature;
    int heartRate;
    string timeChecked;

    VitalSignsCheck(float temp, int hr, string t) {
        temperature = temp;
        heartRate = hr;
        timeChecked = t;
    }
};

class DiagnosisNote {
public:
    string noteText;
    string doctorName;
    string date;

    DiagnosisNote(string n, string d, string dt) {
        noteText = n;
        doctorName = d;
        date = dt;
    }
};

class PatientRecord {
public:
    int patientId;
    string name;
    string dob;

    MedicationEntry* med;
    VitalSignsCheck* vitals;
    DiagnosisNote* diagnosis;

    PatientRecord(int id, string n, string d) {
        patientId = id;
        name = n;
        dob = d;
        med = new MedicationEntry("Paracetamol", "500mg", "10:00 AM");
        vitals = new VitalSignsCheck(98.6, 72, "10:30 AM");
        diagnosis = new DiagnosisNote("Flu", "Dr. Ahmed", "26-02-2026");
    }

    ~PatientRecord() {
        delete med;
        delete vitals;
        delete diagnosis;
    }

    void displayRecord() {
        cout << "Patient ID: " << patientId << endl;
        cout << "Name: " << name << endl;
        cout << "DOB: " << dob << endl;

        cout << "Drug: " << med->drugName << endl;
        cout << "Dose: " << med->dose << endl;
        cout << "Time Given: " << med->timeGiven << endl;

        cout << "Temperature: " << vitals->temperature << endl;
        cout << "Heart Rate: " << vitals->heartRate << endl;
        cout << "Time Checked: " << vitals->timeChecked << endl;

        cout << "Diagnosis: " << diagnosis->noteText << endl;
        cout << "Doctor: " << diagnosis->doctorName << endl;
        cout << "Date: " << diagnosis->date << endl;
    }
};

int main() {
    PatientRecord p1(101, "Lily Smith", "01-01-2000");
    p1.displayRecord();
    return 0;
}