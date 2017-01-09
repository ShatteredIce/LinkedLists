//C++ Project 7 - Nathan Purwosumarto - 1/8/2017
//LinkedLists Part 1 - Demonstration of Linked Lists to hold Student*'s

#include <iostream>
#include "Student.h"
#include "Node.h"

using namespace std;

int main()
{
  Student* s = new Student(2);
  Student* t = new Student(50);
  Student* u = new Student(99);
  Node* one = new Node(s);
  Node* two = new Node(t);
  Node* three = new Node(u);
  one->setNext(two);
  two->setNext(three);
  cout << "Printing id of Student* in Node three: ";
  cout << one->getNext()->getNext()->getStudent()->getId() << endl;

}
