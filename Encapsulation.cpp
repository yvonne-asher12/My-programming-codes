/*Name:Yvonne Karimi
  Reg No:BSCIT-05-0072/2024
  Date:10/02/2024
  
*/#include <iostream>
#include <string>
using namespace std;

class BankAccount{
private:
	string accountholder;
	int balance;
	
	public:
	void setAccountholder(string a){
		accountholder= a;
		
	}
	string getAccountholder(){
		return accountholder;
		
	}
	void setBalance(int b){
		balance=b;	

	}
	int getBalance(){
		return balance;
	}
};
int main() {
    BankAccount ba1;
    ba1.setAccountholder("Yvonne");
    ba1.setBalance(1000);

    cout << "Account Holder: " << ba1.getAccountholder() << endl;
    cout << "Balance: " << ba1.getBalance() << endl;

    return 0;
}