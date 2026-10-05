#include<iostream>
using namespace std;

class BankAccount
{
  private:
        double dbalance;
  public:
       void setBalance(double amount)
       {
            if(amount>=0)
              dbalance=amount;
       }
       double getBalance()
       {
            return dbalance;
       }
};
int main()
{
  BankAccount account;
  account.setBalance(500000);
  cout<<account.getBalance();
  return 0;
}
