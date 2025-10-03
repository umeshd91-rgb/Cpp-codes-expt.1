#include <iostream>
#include <string>  
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;  
    if(name == "om") {  
        cout << "Welcome om" << endl;
        cout << "Hello Robotics" << endl;
    } else {
        cout << "Hello " << name << endl;
    }

    return 0;
}