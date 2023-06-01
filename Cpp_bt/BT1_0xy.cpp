#include<iostream>
#include<math.h>

using namespace std;

class Oxy{
    private:
        int x;
        int y;
    public:
        Oxy(int x = 0,int y = 0){
            x = x;
            y = y;
        }
        int Get_x(){return x;}
        int Get_y(){return y;}
};

class Distance_2D{
    private:
        Oxy p1;
        Oxy p2;
        Oxy p3;
    public:
        Distance_2D(Oxy p1, Oxy p2);
        Distance_2D(Oxy p1, Oxy p2, Oxy p3);
        Oxy Get_p1();
        Oxy Get_p2();
        Oxy Get_p3();
        double Calc_Distance();
        double Calc_Area();
};
Distance_2D::Distance_2D(Oxy p1, Oxy p2){
    this->p1 = p1;
    this->p2 = p2;
}
Distance_2D::Distance_2D(Oxy p1, Oxy p2, Oxy p3){
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}
Oxy Distance_2D::Get_p1(){
    return this->p1;
}
Oxy Distance_2D::Get_p2(){
    return this->p2;
}
Oxy Distance_2D::Get_p3(){
    return this->p3;
}

double Distance_2D::Calc_Distance(){
    return (double)sqrt(pow(this->p1.Get_x()-this->p2.Get_x(),2)\
    (pow(this->p1.Get_y() - this->p2.Get_y(),2)));
} 
double Distance_2D::Calc_Area(){
    double distance_a = sqrt(pow(p1.Get_x()-  p2.Get_x()),2)\
    + pow(p1.Get_y()-p2.Get_y(),2);
    double distance_b = sqrt(pow(p3.Get_x()-  p1.Get_x(),2) + pow( p3.Get_y() -   p1.Get_y(),2));
    double distance_c = sqrt(pow( p3.Get_x() -  p1.Get_x(),2) + pow( p3.Get_y()-  p1.Get_y(),2));
    double p = (distance_a + distance_b + distance_c)/2;
    return (double)sqrt(p*(p - distance_a) * (p - distance_b)* (p -distance_c));
}
int main(){

    Oxy X(1,2);
    Oxy Y(1,3);
    Oxy Z(3,4);
    Distance_2D D1(X, Y);
    Distance_2D D2(X, Y, Z);
 //----------Print O(x,y)---------------
    cout<<" Xx = "<<X.Get_x() << "\tXy = "<<X.Get_y()<< endl;
    cout<<" Yx = "<<Y.Get_x() << "\tYy = "<<Y.Get_y()<< endl;
    cout<<" Zx = "<<Z.Get_x() << "\tZy = "<<Z.Get_y()<< endl;
//-----------------Caculate---------------------------



    return 0;
}