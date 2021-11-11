using namespace std;
#include <iostream>

class Account{
	public:
	string cname;
	int accno;
	int type;
	double bal;
	public:
	void getdel(){
		cout<<"Welcome in our Bank If you are our Customer please Enter some details.. "<<endl;
		cout<<"Enter your name..."<<endl;
		cin>>cname;
		cout<<"Enter your Account Number.."<<endl;
		cin>>accno;
		cout<<"Your Account balance.."<<endl;
		cin>>bal;
		cout<<"Your Account type\n1. Saving Account \n2. Current Account"<<endl;
		cin>>type;
		}
	int dep(){
		double p;
		cout<<"How many amount do you want to deposit?"<<endl;
		cin>>p;
		bal+=p;
		cout<<"Now Your updated Balance is.."<<endl;
		cout<<bal<<endl;
	}
	int opt(){
			int exp;
			cout<<"Now Please perform what u want"<<endl;
			cout<<"1. For deposit"<<endl;
			cout<<"0. For Nothing" <<endl;
			cout<<"Please choice one.."<<endl;
			cin>>exp;
			while (exp!=0&exp!=1){
				cout<<"Please Type only from 0 or 1.."<<endl;
				cin>>exp;
			}
			if (exp==1)
			    dep();
			else if (exp==0){
			    cout<<"Ok sir you don't want to deposit any Amount Now We will go to other procedure..'"<<endl;
			}
			
		}
				
		
	
	
	
};
class Sav_acct :virtual public Account{
	string as;
    public:
	int with(){
		if (type==1){
		cout<<"Do you want to withdraw any Amount?? yes or no"<<endl;
		cin>>as;
		while (as!="yes"&as!="no"){
			cout<<"Please Input Only from Yes or no..Try Again"<<endl;
			cin>>as;
		}
		if (as=="yes")	{
		
		double d;
		cout<<"How many amount do you want to Withdraw?"<<endl;
		cin>>d;
		while (bal<d){
			cout<<"Please enter Valid Amount again that comes under your Total Balance.."<<bal<<endl;
			cin>>d;
		}
		bal-=d; 
		cout<<"Now Your updated Balance is.."<<endl;
		cout<<bal<<endl;}
		else if (as=="no"){
			cout<<"Ok sir This time You are not withdrawing any amount you can withdraw whenever you want..."<<endl;
			
		}
	}
		
	}
	int intrest(){
		int i;
		if (type==1){
		
		cout<<"Your Balance is.."<<endl;
		cout<<bal<<endl;
		cout<<"You are our New user so Please listen we will give you intrest on the base of your Balance.."<<endl;
		cout<<"Please Enter Interval time in Days.."<<endl;
		cin>>i;
		double k=(bal*i/365.23*5.40)/100;
		bal+=k;
		cout<<"Your Balance after Adding Intrest..."<<bal<<"\nAnd the Intrest which is Given By Bank On your Balance is.."<<k<<endl;
	}
		
	}
};

class Curr_acct :virtual public Account,public Sav_acct{
	public:
	int bm;
	int cheque(){
		if (type==2){
		    cout<<"you are our Current Account Customer WE have cheque Book Facility for you"<<endl<<"Please Enter Account number and submit Some documents.."<<endl;
		    cin>>bm;
         	while (bm!=accno){
	         	cout<<"Try Again..PLease Enter Your Right Account Number"<<endl;
		        cin>>bm;}
		    if (bm==accno){
		        cout<<"Our Employee will provide you a cheque Book and then You can use it for pay goods and services Tax..or other purposes"<<endl;
	        }    
	       }
	   
	}
	void panelty(){
		string tran;
		if (type==2){
		cout<<"Did Your any Cheque Transaction fail? yes or no "<<endl;
		cin>>tran;
		while (tran!="yes"&tran!="no"){
			cout<<"Please Write Only From yes or no.."<<endl;
			cin>>tran;
		}	
		if (tran=="yes"&type==2){
			int dk;
			cout<<"please Enter your Transaction delay days..."<<endl;
			cin>>dk;
			bal+=52.3*dk;
			cout<<"Your Balance after Given Panelty.."<<endl;
			cout<<bal;
			}
		if(type==2 & tran=="no"){
			cout<<"Ok Sir Thanks for Informing Hope Our Services are very well"<<endl;
		}	
			
		}
	}
};
int main(){
	Curr_acct s1;
	s1.getdel();
	s1.opt();
	s1.with();
	s1.intrest();
	s1.cheque();
	s1.panelty();
	return 0;
}
