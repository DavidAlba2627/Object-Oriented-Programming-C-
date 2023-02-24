#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"


class Student : public Person
{
    private:
        int m_Semester;
        int m_NUA; // Student identification number
        float m_GradeAverage;

    public:
        Student(); // Builder without parameters
        Student(int Semester, int NUA, float GradeAverage); // Builder with parameters
        ~Student(); // Destructor
        // Methods
        void showData();
        void showMessage(){ cout << endl << "Hello! my name is "<< m_name << ". I'm an student, nice to meet you"<< endl;}
        void haveTest();
        // getters
        int getNUA();
        int getSemester();
        float getGradeAverage();
        // setters
        void setNUA(int NUA);
        void setSemester(int Semester);
        void setGradeAverage(float GradeAverage);
};

#endif // STUDENT_H
