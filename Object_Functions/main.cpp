#include <iostream>

using namespace std;
class cars
{
public :
    int hp;
    string name;
    string owner;

    cars(int ahp , string aName , string anOwner)
    {
        hp = ahp;
        name = aName;           //constructor function
        owner = anOwner;

    }
    bool hpCheck()
    {
        if(hp > 700)
        {
            cout << "Qualified track car" << endl;          //Object function
            return true;
        }
        else{
            cout << "Car not qualified for track" << endl;
            return false;
        }
    return hp;

    }
};

int main()
{

   cars car1(900 , "Subaru" , "Karari");
   cout << car1.name << endl;
   cout << "Horse power : " << car1.hp << endl;
   cout << car1.hpCheck() << endl;






    return 0;
}
