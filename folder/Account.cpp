#include <iostream>
#include<string>
#include <vector>

using namespace std;

class Bank;
class Account
{
    private:
        string name;
        int balance;
    
    public:
        string get_name(){
            return this->name;
        }
        int get_balance(){
            return this->balance;
        }
        friend Bank;
};

class Bank
{
    private:
        vector<Account> accounts;
    public:
    /*Method add_account add into vector*/
        void add_acount(string name, int balance){
            Account new_account;
            new_account.name = name;
            new_account.balance = balance;
            accounts.push_back(new_account);
        }
        void get_account(string name){
            for(int i = 0; i<accounts.size(); i++){
                if(name == accounts[i].name){
					cout << "Name: " <<accounts[i].name <<" , Balance: " << accounts[i].balance;
					cout<<endl;
                }
            	// else{
                // 	cout << "Not Found!!!";
            	// }
            }
        
        }
};

int main()
{
    Bank bank;
    bank.add_acount("Tuan", 1000);
    bank.add_acount("Nghia",10000);
    bank.add_acount("Tuan",100);


    bank.get_account("Tuan");

    return 0;
}
