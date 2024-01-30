#include <iostream>
#include <string>
using namespace std;
class Chef {
protected:
    string name;

public:
    Chef(const string& chefName) : name(chefName) {
        cout << name << " konstruktori" << endl;
    }

    ~Chef() {
        cout << name <<  " destruktori" << endl;
    }

    void makeSalad() {
        cout << name << " makes salad" << endl;
    }

    void makeSoup() {
        cout << name << " makes soup" << endl;
    }
};

class ItalianChef : public Chef {
private:
    int vesi;
    int jauhot;
public:
    ItalianChef(const string& chefName, int vesi, int jauhot) : Chef(chefName), vesi(vesi), jauhot(jauhot) {
       cout << name << " konstrktcori" << endl;
    }

    ~ItalianChef() {
       cout << name << " destruktori" << endl; 
    }
    
    string getName() {
        return name;
    }

    void makePasta() {
        cout << name << " makes pasta with special recipe " << endl;
        cout << name << " uses jauthot = " <<  jauhot << endl;
        cout << name << " uses vesi = " << vesi << endl;
    }
};

int main() {
    ItalianChef m("Mario", 100 , 250);
    m.makePasta();
    return 0;
}