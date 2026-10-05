class BankAccount
{
  private double balance =0;
  public void deposit(double damount)
  {
    if(damount > 0)
    {
       balance = balance + damount;
    }
  }
  public double getBalance()
  {
    return balance;
  }
}
class Main
{
  public static void main(String[]args)
  {
    BankAccount account = new BankAccount();
    account.deposit(50000);
    System.out.println(account.getBalance());
   }
}
