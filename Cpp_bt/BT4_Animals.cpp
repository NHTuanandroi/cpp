#include<iostream>
#include<math.h>

using namespace std;

// _________________________INIT CLASS ANIMALS__________________________________
class Animal
{
    private:
        string name;
        int age;
        double weight;
        double hight;
    public:
        Animal(string name, int age, double weight, double hight){
            this->name = name;
            this->age = age;
            this->hight = hight;
            this->weight = weight;
            
        }
        //--------------GETTER------------
        string Get_name(){return this->name;}
        int Get_age(){return this->age;}
        double Get_weight(){return this->weight;}
        double Get_hight(){return this->hight;}
        //------------INIT METHOD-----------
        double Calc_BMI();
        void Compare_Age( Animal Other_Animal);
        void Compare_Weight(Animal Other_Animal);

};

// ------------------DEFINE METHOD--------------
double Animal::Calc_BMI(){
    return weight/(pow(hight,2));
}
void Animal::Compare_Age(Animal Other_Animal){
    if (Animal::Get_age() > Other_Animal.Get_age())
    {
        /* code */
        cout<<Animal::Get_name() << " is older than" << Other_Animal.Get_name() << endl;
    }
    else{
        cout<<Animal::Get_name() << " is younger than" << Other_Animal.Get_name()<< endl;
        }
    
}
void Animal::Compare_Weight(Animal Other_Animal){
    if (Animal::Get_weight()> Other_Animal.Get_weight())
    {
        /* code */
     cout<<Animal::Get_name() << "is heavier than " << Other_Animal.Get_name() << endl;
    }
    else{
        cout<<Animal::Get_name() << "is less heavier than " << Other_Animal.Get_name(); 
    
    }
}
int main()
{
    Animal Dog("Dog",3,17.2,90);
    Animal Cat("Cat",4,15,70);
    cout<< " Value BMI index:" << Dog.Calc_BMI()<<endl;
    Dog.Compare_Age(Cat);
    Dog.Compare_Weight(Cat);

    return 0;
}