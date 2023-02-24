#include "Person.h"

Person::Person(){}

Person::Person(string name, string address)
{
    m_name = name;
    m_address = address;
}
Person:: ~Person(){}

void Person::showData()
{
    cout <<  "I live in " << m_address << endl;
    cout <<  "I am " << m_age << " years old"<<endl;
}

int Person:: getAge(){ return m_age; }
string Person::getName() {return m_name;}
string Person::getAddress() {return m_address;}

void Person::setAge(int age ) {m_age = age;}
void Person::setName(string name) {m_name = name;}
void Person::setAddress(string address) {m_address = address;}
