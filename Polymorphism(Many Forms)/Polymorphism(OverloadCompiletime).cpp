#include<iostream>
using namespace std;

class Vehicle{
    public:
        void start(){
            cout<<"Vehicle is starting"<<endl;
        }
        void start(int speed){
            cout<<"Vehicle is moving at "<<speed<<"Km/h"<<endl;
        }
        void start(int speed,string mode){
            cout<<"Vehicle is moving at "<<speed<<"Km/h in "<<mode<<" mode"<<endl;
        }
};

int main(){

    Vehicle v;

    v.start();
    v.start(80);
    v.start(120,"RAIN");

    return 0;
}