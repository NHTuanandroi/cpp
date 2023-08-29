#include<iostream>

// write class get information of people
using namespace std;

class Person
{
    private:
        string name;
        int YoB;
        string Add;
    public:
        Person(string name   ,int YoB, string Add ){
            this->name = name;
            this->YoB = YoB;
            this->Add = Add;
        }
        string Get_name(){return this->name;}
        string Get_Add(){return this->Add;}
        void Infor();
        int Get_age(){
            return 2023 - this->YoB;}
};
void Person::Infor(){
    cout <<"Name: "<< Get_name()<<endl;
    cout <<"Age: " <<Get_age()<< endl;
    cout <<"Add: "<<Get_Add()<<endl;
}
int main()
{
    Person P1("AAAB",1999,"Ha Tinh");
    P1.Infor();

    return 0;
}