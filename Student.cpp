#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(int newId){
  id = newId;
}

int Student::getId(){
  return id;
}
