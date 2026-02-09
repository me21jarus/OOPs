#include<iostream>
using namespace std;

class Vehicle{
    public:
        virtual void start(){
            cout<<"Vehicle is starting..."<<endl;
        }
};

class Bike : public Vehicle{
    public:
        void start() override{
            cout<<"Bike is starting..."<<endl;
        }
};

class Car : public Vehicle{
    public:
        void start() override{
            cout<<"Car is starting"<<endl;
        }
};

int main(){

    Vehicle* v1 = new Bike();
    Vehicle* v2 = new Car ();
    Vehicle* v3 = new Vehicle();

    v1->start();
    v2->start();
    v3->start();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}