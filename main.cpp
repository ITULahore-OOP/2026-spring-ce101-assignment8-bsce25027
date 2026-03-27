#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

using namespace std;

int main() {
    cout << "=== University Management System ===\n" << endl;
    AccessCard card1("CARD001", 1);
     AccessCard card2("CARD002", 2);
      AccessCard card3("CARD003", 3);

    Student student1("Alice Johnson", 1001, 3.5);
    Student student2("Bob Smith", 1002, 3.2);
    
    Staff staff1("Dr. Brown", 2001, 75000.0, card1);
    
    
    TeachingAssistant ta1("Charlie Davis", 3001, 3.8, 25000.0, card2, 20);
     TeachingAssistant ta2("Diana Evans", 3002, 3.9, 26000.0, card3, 15);
    
    
    Department csDept("Computer Science");
    csDept.addMember(&student1);
    csDept.addMember(&student2);
    csDept.addMember(&staff1);
    csDept.addMember(&ta1);
    csDept.addMember(&ta2);
    csDept.displayAllRoles();

    ta1.gradeAssignment(95);      
    ta1.gradeAssignment("A+");    
    
    cout << "\n=== Tutoring Sessions ===" << endl;
    TutoringSession session1(1, 45.0, &ta1, &student1);
    TutoringSession session2(2, 30.0, &ta1, &student2);
    
    session1.displaySession();
    session2.displaySession();
    
    if (session1 > session2) {
        cout << "Session 1 is longer than Session 2" << endl;
    } else {
        cout << "Session 2 is longer than Session 1" << endl;
    }
    TutoringSession merged = session1 + session2;
    cout << "\nMerged Session:" << endl;
    merged.displaySession();
    cout << "\n=== Program Completed Successfully ===" << endl;
    
    return 0;
}