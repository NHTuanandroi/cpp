#include<iostream>

using namespace std;

class Car
{
    private:
        string Car_name;
        string Car_color;
        float Km;
        string type_engine;
    public:
        Car(string Car_name, string Car_color, float Km, string type_engine);
        float Get_Km(){return this->Km;}
        string Get_car_name(){return this-> Car_name;}
        string Get_car_color(){return this->Car_color;}
        string Get_type_engine(){return this->type_engine;}
        void Car_info();
        void Check_maintain();
};
Car::Car(string Car_name, string Car_color, float Km, string type_engine)
{
    this->Car_name = Car_name;
    this->Car_color = Car_color;
    this->Km = Km;
    this->type_engine = type_engine;
}
void Car::Car_info()
{
    cout <<"_________CAR INFORMATION________" <<endl;
    cout << "Car name: " << Get_car_name() << endl;
    cout << "Car color: " << Get_car_color() << endl;
    cout << "Type of engine: " << Get_type_engine() << endl;
    cout << "Number of KM: " << Get_Km() << endl;
}
void Car::Check_maintain(){
    if (Km>= 0 && Km <= 1000)
    {
        /* code */
        cout <<"Maintain lv1";
    }
    else if (Km >1000 && Km <= 5000)
    {
        /* code */
        cout <<"Maintain lv2";
    }
    else
    {
        cout<<"Maintain lv3";
    }
    
}

int main()
{
    //____CREAT OBJECT_____
    Car car1("Honda","Yellow",150.3,"Fire");
    Car car2("Mazda","Black",1500,"Petrol");

    car1.Car_info();
    car1.Check_maintain();


    return 0;
}