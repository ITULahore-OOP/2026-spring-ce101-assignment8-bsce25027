#include "Department.h"
#include <iostream>
using namespace std;

Department::Department(string departmentName) {
    this->departmentName = departmentName;
    memberCount = 0;
}
void Department::addMember(UniversityMember* member) {
    if (memberCount < 50) {
          members[memberCount] = member;
        memberCount++;
     cout << "Added " << member->getName() << " to " << departmentName << " department" << endl;
    }
}
void Department::displayAllRoles() {
    cout << "\n=== " << departmentName << " Department Members ===" << endl;
    for (int i = 0; i < memberCount; i++) {
  members[i]->displayRole();
        cout << "------------------------" << endl;
    }
}