#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include "prog5.h"

using namespace std;

int main() 
{
    string name;
    int value;

    vector<Name_value> nv;
    Name_value user;

    cin >> name >> value;
    
    while (name != "NoName" && value != 0) {
        user.name = name;

        if (std::any_of(nv.begin(), nv.end(), [name](Name_value user){ return user.name == name; })) {
            cout << name << " already has a score." << endl;
            exit(0);
        }

        user.value = value;
        nv.push_back(user);

        cin >> name >> value;
    }

    int i = 0;
    for (int i = 0; i < nv.size(); i++) {
        cout << nv[i].name << " " << nv[i].value << endl;
    }
}