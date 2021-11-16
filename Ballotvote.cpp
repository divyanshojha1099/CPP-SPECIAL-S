using namespace std;
#include <bits/stdc++.h>
class Ballot{
	int v[50];
	int cand;
	int ball[5];
	public:
		void check(){
			cout<<"PLease Enter the Number of Candidates.."<<endl;
			cin>>cand;
			static int a,b,c,d,e,s;
	        a=0;
	        a=b=c=d=e;
			for (int i=0;i<cand;i++){
				cout<<"Select any number from 1 to 5 "<<endl;
				cin>>v[i];
				switch(v[i]){
					case 1:ball[a];
					    a++;
					    break;
					case 2:ball[b];
                        b++;
                        break;
                    case 3:ball[c];
                        c++;
                        break;
                    case 4:ball[d];
                        d++;
                        break;
                    case 5:ball[e];
                        e++;
                        break;
                default    :s++;
               }
            }
    int ch;
   do
   {
    cout<<"Candidates Available"<<endl;
    cout<<"Which Candidate Score Do you want to view?"<<endl;
      cout<<"Press 1 For View Scored By Ballot A"<<endl;
      cout<<"Press 2 For View Scored By Ballot B"<<endl;
      cout<<"Press 3 For View Scored By Ballot C"<<endl;
      cout<<"Press 4 For View Scored By Ballot D"<<endl;
      cout<<"Press 5 For View Scored By Ballot E"<<endl;
      cout<<"Press 6 For View Spoilt Ballot"<<endl;
      cout<<"Press 7 For View For Ending"<<endl;
      cout<<"Enter Your Choice :"<<endl;
      cin>>ch;
      switch(ch){
      case 1:    cout<<"Scored By Ballot A is.."<<a<<endl;
                  break;
      case 2:    cout<<"Scored By Ballot B is.. "<<b<<endl;
                  break;
      case 3:    cout<<"Scored By Ballot C is.."<<c<<endl;
                  break;
      case 4:    cout<<"Scored By Ballot D is.. "<<d<<endl;
                 break;
      case 5:    cout<<"Scored By Ballot E is.."<<e<<endl;
                  break;
      case 6:    cout<<"Spoil Ballot were.."<<s<<endl;
                  break;
      case 7:   goto end;
	        }
	}while(1);
	end:			
	cout<<"The number of spoil ballots are.."<<s<<endl;
}
};

int main(){
	Ballot b1;
	b1.check();
	return 0;
}
