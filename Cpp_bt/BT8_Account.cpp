#include<iostream>
#include<vector>

using namespace std;

//___________________________CLASS ACCOUNT_______________________
class Account{
    private:
        string Acc_name;
        int balance = 0;
    public:
        static int Acc_number;
        Account(string Acc_name = " ", int balance = 0){
            this->Acc_name = Acc_name;
            this->balance = balance;
            ++Acc_number;
        }
        int Get_Balace(){
            cout<<"The remaining balance: "
            return this->balance;}
        void Set_Account();
        void Send_money(int send);
        void Take_money();
        

};
vector<Account> List_Acc;

int Account::Acc_number = 0;

// ---------------DEFINE METHOD---------------
void Account::Send_money(int send){
    cout <<endl<< " Enter money you want to send: "; cin>> send;
    balance = balance + send; 
}
void Account::Set_Account(){
    cout << "Your name: "<< endl;
    cin >> Acc_name;
    cout<<"Your acc_number: "<< Acc_number << endl;
}
void Account::Take_money(){
    int Take;
    cout<<"Enter number you want to take: "; cin>> Take;
    if (Take > balance)
    {
        /* code */
        cout<<"You do not enough money in your account!" << endl;
    }
    else{
       cout<<"Remaining money: " << balance -= Take;
    }
    
}

int main()
{
    Account Acc1(" ");
    Acc1.Set_Account();
    Acc1.Send_money(500);
    cout<< Acc1.Get_Balace();
    List_Acc.push_back(Acc1);

    Account Acc2(" ",100);
    Acc2.Set_Account();
    Acc2.Send_money(200);
    Acc2.Get_Balace();
    Acc2.Take_money();
    List_Acc.push_back(Acc2);


    return 0;
}