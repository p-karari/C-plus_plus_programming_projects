#include <iostream>

using namespace std;

class Chef
{
public:

    void NormalDish()
    {
        cout << "Chiken stew" << endl;
    }
    void specialDish()
        {
            cout << "Grilled chicken" << endl;
        }


};
class ItalianChef :
    public Chef
{

    public:
        void specialDish()
        {
            cout << "Grilled pork" << endl;
        }
};

int main()
{

    Chef chef;
    chef.NormalDish();
    chef.specialDish();
    ItalianChef chef1;
    chef1.specialDish();

    return 0;
}
