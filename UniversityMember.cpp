#include "UniversityMember.h"
using namespace std;

UniversityMember::UniversityMember(string name, int memberID) {
    this->name = name;
    this->memberID = memberID;
}
UniversityMember::~UniversityMember() {
    
}
string UniversityMember::getName() {
    return name;
}
int UniversityMember::getMemberID() {
    return memberID;
}