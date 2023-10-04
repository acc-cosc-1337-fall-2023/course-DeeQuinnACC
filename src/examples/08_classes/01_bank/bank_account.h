//bank_account.h
class BankAccount
{
    public:
        BankAccount(int b) : balance(b) //constructor
        {

        } 
        int get_balance(){ return balance; }

    private:
        int balance{0}; //{0} initializes the value
};
