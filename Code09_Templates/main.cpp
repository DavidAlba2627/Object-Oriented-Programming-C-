#include <iostream>

using namespace std;

template <class Any> // Equivalent to typenname
void swapping(Any &a, Any &b)
{
    Any temp = a;
    a = b;
    b = temp;
}

template <class A>
void printArray(A arr[], int n)
{
    for(int i=0; i<n;i++)
        cout<<arr[i]<<" ";
    cout<<""<<endl;
}

template <class T>
void bubbleSort(T arr[], int n)
{
    cout <<"Size of the array: \t"<<n<<" items"<<endl;
    cout <<"Original array:\t\t";
    printArray(arr,n);

    cout <<"Ordered array:\t\t";
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n;j++)
            if(arr[i]>arr[j])
                swapping(arr[i],arr[j]);

    printArray(arr,n);
}

int main()
{
    int x1 = 5, y1 = 8;
    float x2 = 32.12, y2 = 15.96;
    char x3 = 'a', y3 = 'b';

    cout<< "******** Swapping ints ********"<<endl;
    cout<< "Before the swapping"<<endl;
    cout<< "x has the value of:\t"<<x1<<endl;
    cout<< "y has the value of:\t"<<y1<<endl;
    swapping(x1,y1);
    cout<< "\nAfter the swapping"<<endl;
    cout<< "x has the value of:\t"<<x1<<endl;
    cout<< "y has the value of:\t"<<y1<<endl<<endl;

    cout<< "******** Swapping floats ********"<<endl;
    cout<< "Before the swapping"<<endl;
    cout<< "x has the value of:\t"<<x2<<endl;
    cout<< "y has the value of:\t"<<y2<<endl;
    swapping(x2,y2);
    cout<< "\nAfter the swapping"<<endl;
    cout<< "x has the value of:\t"<<x2<<endl;
    cout<< "y has the value of:\t"<<y2<<endl<<endl;

    cout<< "******** Swapping chars ********"<<endl;
    cout<< "Before the swapping"<<endl;
    cout<< "x has the value of:\t"<<x3<<endl;
    cout<< "y has the value of:\t"<<y3<<endl;
    swapping(x3,y3);
    cout<< "\nAfter the swapping"<<endl;
    cout<< "x has the value of:\t"<<x3<<endl;
    cout<< "y has the value of:\t"<<y3<<endl;

    cout<< "\n******** Bubble Sort with floats ********"<<endl;
    float arr1[6] = {4.2,-3.6,11.2,-2.7,8.2,9.1};
    bubbleSort(arr1,6);

    cout<< "\n******** Bubble Sort with chars ********"<<endl;
    char arr2[6] = {'a','s','-','@','e','b'};
    bubbleSort(arr2,6);

    cout<< "\n******** Bubble Sort with strings ********"<<endl;
    string arr3[3] = {"Pear","Banana","Apple"};
    bubbleSort(arr3,3);

    return 0;
}
