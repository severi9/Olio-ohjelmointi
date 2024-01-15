#include <functional>
#include <iostream>

using namespace std;

void game(int &i){
    int luku1 = 0;
    int luku2 = 0;
    cout << "Anna korkein luku: ";
    cin >> luku1;
    int x = rand() % luku1 + 1;
    while (x != luku2){
        cout << "Arvaa luku 1-" << luku1 << ": ";
        cin >> luku2;
        i++;
    }
}

int main()
{
    int i = 0;
    game(i);
    cout << "Oikein!! arvauksia meni " << i << "\n";
    return 0;
}

