#include <iostream>

using namespace std;

class Ship {
private:
    string name;
    string yearBuilt;

public:
    Ship(string, string);
    void setName(string);
    void setYearBuilt(string);
    string getName();
    string getYearBuilt();
    virtual void print() { cout << "Name: " << name << ", Year Built: " << yearBuilt << endl;
    cout << endl;
    };
};

Ship::Ship(string nam, string yearb) {
    name = nam;
    yearBuilt = yearb;
}

void Ship::setName(string nam) {
    name = nam;
}

void Ship::setYearBuilt(string yearb) {
    yearBuilt = yearb;
}

string Ship::getName(){
    return name; 
}


string Ship::getYearBuilt(){
    return yearBuilt;
}

class CruiseShip : public Ship {
private:
   int numofpass;
public:
    CruiseShip(string, string, int);
    int getNumOfPass() ;
    void setNumOfPass(int);
    void print();
};

int CruiseShip::getNumOfPass()  {
    return numofpass;
}

void CruiseShip::setNumOfPass(int pass) {
    numofpass = pass;
}

void CruiseShip::print() {
    cout << "The name of the ship is: " << getName() << endl;
    cout << endl;
    cout << "The Year this ship was built: " << getYearBuilt() << endl;
    cout << endl;
    cout << "The amount of passengers this ship can hold is 3000 people. " << endl;
    cout << endl;
    cout << "The number of passengers in the ship currently are: " << numofpass << endl;
}

CruiseShip::CruiseShip(string nam, string yearb, int pass) : Ship(nam, yearb) {
    numofpass = pass;
}

 class CargoShip : public Ship {
 private:
     int tonnage;
 public:
     CargoShip(string, string, int);
     int getTonnage();
     void setTonnage(int);
     void print();
};

 int CargoShip::getTonnage() {
     return tonnage;
 }

 void CargoShip::setTonnage(int ton) {
     tonnage = ton;
 }

 void CargoShip::print() {
     cout << "The name of the ship is: " << getName() << endl;
     cout << endl;
     cout << "The Year this ship was built: " << getYearBuilt() << endl;
     cout << endl;
     cout << "The Maximum tonnage capacity of this ship is 20,000 tons: " << endl;
     cout << endl;
     cout << "The current weight of the ship is: " << tonnage << endl;
 }

 CargoShip::CargoShip(string nam, string yearb, int ton) : Ship(nam, yearb) {
     tonnage = ton;
 }


int main()
{
    const int NUM_ELEMENTS = 3;
  
    Ship *array[3];
    
    array[0] = new Ship("USS Marshell", "1956");
    array[1] = new CruiseShip("USS Queens","2001", 2500);
    array[2] = new CargoShip("USS Markham", "2002", 9000);

    for (int i = 0; i < NUM_ELEMENTS; i++) {
        array[i]->print();
    }
    cout << "This program has ended successfully. " << endl;

    
}

