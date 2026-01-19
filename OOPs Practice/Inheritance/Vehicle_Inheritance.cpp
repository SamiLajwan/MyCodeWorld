#include<bits/stdc++.h>
using namespace std;

class Vehicle{
protected: 
    string name;
    string model;
    int noOfTyres;
public:
    //Parameterised Cnstrutor....
    Vehicle(string _name, string _model, int _noOfTyres){
        cout << "Inside Vehicle contructor.." << endl;
        name = _name;
        model = _model;
        noOfTyres = _noOfTyres;
    }

    //Functions
    void start_Engine(){
        cout << name << " Engine is Starting.. of this model -> " << model << endl; 
    }

    void stop_Engine(){
        cout << name << " Engines is now Stopped.. of This Model -> " << model << endl;
    }

    //Distructor 
    virtual ~Vehicle(){
        cout << "Inside Vehicle Destructor.." << endl;
    }
};

class Car: public Vehicle{
protected:
    int Doors;
    string transmissionType;

public:
    Car(string _name, string _model, int _noOfTyres, int _Doors, string _transmissionType) : Vehicle(_name,_model,_noOfTyres){
        cout << "Inside Car's contructor.." << endl;
        Doors = _Doors;
        transmissionType = _transmissionType;
    }

    void start_Ac(){
        cout << name << " AC is starting" << endl;
    }

    virtual ~Car(){
        cout << "Inside Car Destructor.." << endl;
    }

};

class MotorCycle: public Vehicle{
protected: 
    string handleBarStyle;
    string suspensionType;

public:
    MotorCycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType) : Vehicle(_name, _model, _noOfTyres){
        cout << "Inside MotorCycle contructor.." << endl;
        handleBarStyle = _handleBarStyle;
        suspensionType = _suspensionType;
    }

    void wheelie(){
        cout << name << " is doing Wheelie" << endl;
    }

    virtual ~MotorCycle(){
        cout << "Inside MotorCycle Destructor.." << endl;
    }
};

int main(){
    Car A("Maruti", "Swift", 4, 4, "AutoMatic TransMission");
    A.start_Engine();
    A.start_Ac();
    A.stop_Engine();

    MotorCycle B("Yamaha", "MT-15", 2, "Small", "Hard Suspension");
    B.start_Engine();
    B.wheelie();
    B.stop_Engine();
    return 0;
}