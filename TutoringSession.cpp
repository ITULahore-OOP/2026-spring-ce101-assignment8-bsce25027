#include "TutoringSession.h"
#include <iostream>
using namespace std;

TutoringSession::TutoringSession(int sessionID, double durationMinutes, 
                                 TeachingAssistant* ta, Student* student) {
    this->sessionID = sessionID;
        this->durationMinutes = durationMinutes;
      this->ta = ta;
    this->student = student;
}
double TutoringSession::getDuration() {
    return durationMinutes;
}
void TutoringSession::displaySession() {
 cout << "Session " << sessionID << " - Duration: " << durationMinutes 
         << " minutes" << endl;
    cout << "TA: " << ta->getName() << ", Student: " << student->getName() << endl;
}
TutoringSession TutoringSession::operator+(const TutoringSession& other) {
    int newID = sessionID + other.sessionID;
       double newDuration = durationMinutes + other.durationMinutes;
 return TutoringSession(newID, newDuration, ta, student);
}
bool operator>(TutoringSession s1, TutoringSession s2) {
    return s1.getDuration() > s2.getDuration();
}