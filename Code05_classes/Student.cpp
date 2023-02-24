#include "Student.h"

Student::Student(){}

Student::Student(int Semester, int NUA, float GradeAverage)
{
    m_NUA = NUA;
    m_Semester = Semester;
    m_GradeAverage = GradeAverage;
}

Student::~Student(){}

void Student::haveTest()
{
    cout << "The student " << m_name << " is having a test" << endl;
}

void Student::showData()
{
    cout <<  "I live in " << m_address << endl;
    cout <<  "I am " << m_age << " years old"<<endl;
    cout <<  "I'm in the " << m_Semester << " semester"<<endl;
    cout <<  "My grade average is " << m_GradeAverage <<endl;
    cout <<  "My NUA is " << m_NUA << endl;
}

int Student::getNUA(){return m_NUA; }
int Student::getSemester() {return m_Semester;}
float Student::getGradeAverage() {return m_GradeAverage;}

void Student::setNUA (int NUA ) {m_NUA = NUA;}
void Student::setSemester(int Semester) {m_Semester=Semester;}
void Student::setGradeAverage(float GradeAverage) {m_GradeAverage=GradeAverage;}
