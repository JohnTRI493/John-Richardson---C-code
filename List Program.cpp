
// List Program
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> todos{ "Clean", "Garbage", "Lawn", "Laundry", "Dishes" };

    string var;

    int num = 0;

    auto iter = todos.begin();
    for (auto iter = todos.begin(); iter != todos.end(); iter++) {

    }

    while (num != 1) {
        
        cout << endl; 

        cout << "If you would like to exit this prompt please enter 1 " << endl;
        cout << "If you would like to enter an item onto the list please press 2 " << endl;
        cout << "If you would like to delete an item off of the list please press 3 " << endl;
        
        cout << endl;

        cin >> num;

        if (num == 2) {
            cout << "Enter an item: " << endl;
            cin >> var;
            todos.push_back(var);

            for (string todo : todos) {
                cout << todo << " " << endl;
            }


        }
        else if (num == 3) {
            cout << "Which item will you delete: " << endl;

            cout << endl;

            for (string todo : todos) {
                cout << todo << " " << endl;
            }

            cout << endl;

            cin >> var;

            cout << endl;
	    iter = todos.begin();
            while (*iter != var) {
                iter++;


            }
            todos.erase(iter);

            for (string todo : todos) {
                cout << todo << " " << endl;
            }
        }
    }


}

