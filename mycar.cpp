/* 
NAME:Yvonne Karimi
REG NO:BSCIT-05-0072/2024
DATE:2/11/2025
YEAR: 1
*/
#include<iostream>
#include<string>
using namespace std;

class Car{
	public:
    string brand;
    string model;
    int price;
    int mileage;

    void display(){
        cout<<"Brand:"<<brand<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"Price ksh:"<<price<<endl;
        cout<<"m,ileage:"<<mileage<<"miles"<<endl;
    }

        void  drive(int distance){

            mileage+=distance;
            cout<<"updated mileage:"<< mileage<<"miles"<<endl;
        }


};

int main(){
Car car1;
car1.brand = "toyota";
car1.model = "corolla";
car1.price =2000;
car1.mileage =5000;

car1.display();


    cout<<"driving for 150 miles:"<<endl;
   car1.drive(150);

    cout<<"driving for 300 miles: "<<endl;
    car1.drive(300);






return 0;
}