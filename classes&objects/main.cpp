#include <iostream>

using namespace std;
//defining the class's atributes
class Car
{
public:
    string name;
    int hp;
    int torque;
    string owner;
};

int main()
{
    Car car1;
    car1.name = "Subaru";
    car1.hp = 900;          //objects
    car1.torque = 2100;
    car1.owner = "Karari";


    cout << "Name of car :" << car1.name << endl;
    cout << "Name of owner :" << car1.owner << endl;
    cout << "Horse power :" << car1.hp << endl;

    return 0;
}
