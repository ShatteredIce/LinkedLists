#ifndef STUDENT_H
#define STUDENT_H

//Student class, stored in Node*'s
//Stores an integer id

#include <iostream>

using namespace std;

class Student {
 public:
  Student(int);
  int getId();
 protected:
  int id;
};

#endif
