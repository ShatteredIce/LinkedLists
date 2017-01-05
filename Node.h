#include <iostream>
#include "Student.h"

using namespace std;

class Node {
 public:
  Node(Student*);
  ~Node();
  Node* getNext();
  void setNext(Node*);
  Student* getStudent();
 protected:
  Student* student;
  Node* next;
};
