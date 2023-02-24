#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
  protected:
      string m_name;
      string m_address;
      int m_age;
  public:
      Person(); // Builder without parameters
      Person(string nombre, string direccion); // Builder with parameters
      ~Person(); // Destructor
      // Methods
      virtual void showData();
      virtual void showMessage(){ cout << endl << "Hello! I'm "<< m_name << ". Nice to meet you"<< endl;}
      //getters
      int getAge();
      string getName();
      string getAddress();
      //setters
      void setAge(int age);
      void setName(string name);
      void setAddress(string address);
};

#endif // PERSON_H
