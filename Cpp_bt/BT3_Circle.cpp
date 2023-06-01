#include<iostream>

using namespace std;

const double PI = 3.1412;
class Circle
{
    private:
        double  Radius;
    public:
        Circle(double R){
            this->Radius = R;
        }
        double Calc_Peri();
        double Calc_Area();

};
double Circle::Calc_Peri(){
    return Radius*2*PI;
}
double Circle::Calc_Area(){
    return Radius*Radius*PI;
}
int main(){
    Circle O(5);
    cout<<"Perimeter of O: "<< O.Calc_Peri()<< endl;
    cout<<"Area of O: "<< O.Calc_Area();
    return 0;
}