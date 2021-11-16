using namespace std;
#include <bits/stdc++.h>
int main(){
	int num,gn;
	srand(time(0));
	gn=rand()%1000+1;
    char ask='y';
    while(num!=gn){
    	cout<<"Welcome in our Guesss game ,here you can Guesss a number and with the base of number WE will give some result so Lets get started.."<<endl;
		cout<<"I have a number between 1 to 1000 "<<endl;
		cout<<"Can you guess my number?"<<endl;
		while(ask=='y'){
			cout<<"Enter your guess.."<<endl;
		    cin>>num;
		    if (num>gn){
		    	cout<<"Too high :try agian"<<endl;
			}
			else if (num<gn){
				cout<<"Too low : try again"<<endl;
			}
			if (num==gn){
				cout<<"Excellent work! do you want to play again yes or no"<<endl;
				cin>>ask;
			}
		}
	}
}
