#include <iostream>
#include "Person.h"
#include "Student.h"
#include <vector>

using namespace std;

int main()
{
    Person David = Person("David", "California");
    Person John = Person("John","Texas");

    // Setting David age
    David.setAge(33);
    // Printing his data
    David.showMessage();
    David.showData();

    // Setting John 10 years older than David
    John.setAge(David.getAge() + 10);
    // Printing his data
    John.showMessage();
    John.showData();

    // Modifying parameters using a vector
    vector<Person> people; // People vector
    people.push_back(David); // Add David to the vector
    people.push_back(John); // Add John to the vector
    cout << endl << "Modifying parameters" << endl;
    for(int i=0; i<2; i++)
    {
        people.at(i).setAge((i+2)*10);
        cout << people.at(i).getName() << " new age: " << people.at(i).getAge() << endl;
    }

    Student Richard = Student(2,427051,9.3);
    Richard.setAge(19);
    Richard.setName("Richard");
    Richard.setAddress("New York");
    Richard.showMessage();
    Richard.showData();
    Richard.haveTest();

    return 0;
}
