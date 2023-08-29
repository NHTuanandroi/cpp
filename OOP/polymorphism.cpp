#include<iostream>

using namespace std;

class Animal
{
    public:
    /* su dung ham ao de the hien tinh da hinh*/
    virtual void Sound() 
    {
        cout<<"Animal sound";
    }
};
/*ke thua class dog tu class animal*/
class Dog : public Animal 
{
    public: 
    /*Overridding Sound Method*/
    void Sound()
    {
        cout<<"Go go";
    }
};

class Cat : public Animal
{
    public:
        void Sound()
        {
            cout<<"Meow meow";
        }
};

int main()
{
    /* neu trong class animal k su dung Virtual thi ket qua la Animal Sound
        Neu dung Virtual function thi se tro den phuong thuc cua class Dog*/
	
    Animal *animal = new Dog;
    animal->Sound();


    return 0;

}
