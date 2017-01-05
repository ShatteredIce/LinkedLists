//C++ Project 7 - Nathan Purwosumarto - 12/2/2017
//LinkedLists - StudentList program that uses linked lists

#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main(){
  Student* s = new Student(1);
  Student* t = new Student(99);
  Node* one = new Node(s);
  Node* two = new Node(t);
  one->setNext(two);
  cout << one->getNext()->getStudent()->getId();
  return 0;
}
