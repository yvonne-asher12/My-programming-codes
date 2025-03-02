/*NAME:Yvonne Karimi
  REG NO:BSCIT-05-0072/2024
  BATE:3/2/2025
  */

#include <iostream>
using namespace std;

class AccountHolder{
protected:
	string name;
	public:
		void setName(string n){
		name =n;
		}
		string getName(){
			return name;
		}
};
			
				
		
class BankAccount:public AccountHolder{
	private:
		int accountNumber;
		double balance;
	

public:
	BankAccount(string n, int accNum, double bal ){
		
		name =n;
		accountNumber= accNum;
		balance =bal;
	}
	
	public:
		int getAccountNumber(){
			return accountNumber;

		}
		double getBalance(){
			return balance;
		}
};		
		
class SavingsAccount:public BankAccount{
	private:
		double interestRate;
		public:
	SavingsAccount(string n,int accNum, double bal, double rate)
      :BankAccount(n, accNum, bal ) ,interestRate (rate){}

	double getInterestRate(){
		return interestRate;
	}
};	
	
	
	int main(){
		SavingsAccount saveacc("asher" ,1234,12387.5, 2.4);
		
		cout<<"Account Holder:" <<saveacc.getName()<<endl;
		cout<<"Account Number:"<<saveacc.getAccountNumber()<<endl;
		cout<<"Balance:"<<saveacc.getBalance()<<endl;
		cout<<"Interest Rate:"<<saveacc.getInterestRate()<<endl;

	



	return 0;	
	}
	