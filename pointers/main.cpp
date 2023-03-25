#include <iostream>

using namespace std;

int main()
{

    int age = 33;
    string name = "Kelvin";
    cout << &age << endl;//Accesing the memory adress of a variable....the memory adress is called a pointer

    //creating a pointer variable
    int *pAge = &age;
    string *pName = &name;

    //derreferencing a pointer

    cout << *pAge ;//printing out the pointer name using the asteric is dereferencing...
                  //i,e printing out the content of that memory adress
    cout << &*pAge << endl;
    cout << *pName << endl;
    cout << &*pName ;


    return 0;
}
