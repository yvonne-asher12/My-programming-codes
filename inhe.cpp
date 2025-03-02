 /* NAME:Yvonne Karimi
   REG NO:BSCIT-05-0072/2024
   DATE:3/2/2025
*/
#include <iostream>
using namespace std;

class Person{
	protected:
		string name;
	public:
		void setName(string n){
			name= n;
		}	
	string getName(){
		return name;
	}
};

class LibraryMember :public Person{
	private:
		int memberID;
		int booksBorrowed;
	public:
		LibraryMember(string n,int id,int borrowed){
			name =n;
			memberID=id;
			booksBorrowed=borrowed;
		}	
	public:
		int getMemberID(){
			return memberID;
		}	

        int getBooksBorrowed(){
			return booksBorrowed;
		}
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int borrowed, double fee)
        : LibraryMember(n, id, borrowed), membershipFee(fee) {}

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    PremiumMember member("yvonne", 450100, 7, 170.85);

    
    cout << "Name: " << member.getName() << endl;
    cout << "Member ID: " << member.getMemberID() << endl;
    cout << "Books Borrowed: " << member.getBooksBorrowed() << endl;
    cout << "Membership Fee: ksh" << member.getMembershipFee() << endl;

    return 0;
}		 
