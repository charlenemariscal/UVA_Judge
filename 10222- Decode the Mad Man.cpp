//10222 decode the mad man
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	
	while(getline(cin,a)){
		int leen = a.size();
		
		for (int i=0;i<=leen; i++){
			a[i]=tolower(a[i]);
			if(a[i]=='e'){
				a[i] = 'q';
			}
			else if (a[i]=='r')
				a[i]='w';
			else if (a[i]=='t')
				a[i]='e';
			else if (a[i]=='y')
				a[i]='r';
			else if (a[i]=='u')
				a[i]='t';
			else if (a[i]=='i')
				a[i]='y';
			else if (a[i]=='o')
				a[i]='u';
			else if (a[i]=='p')
				a[i]='i';	
			else if (a[i]=='[')
				a[i]='o';
			else if (a[i]==']')
				a[i]='p';
			else if (a[i]=='\\')
				a[i]='[';
				
			else if (a[i]=='d')
				a[i]='a';
			else if (a[i]=='f')
				a[i]='s';
			else if(a[i]=='g')
				a[i]='d';
			else if(a[i]=='h')
				a[i]='f';
			else if(a[i]=='j')
				a[i]='g';	
			else if(a[i]=='k')
				a[i]='h';	
			else if(a[i]=='l')
				a[i]='j';	
			else if(a[i]==';')
				a[i]='k';
			else if(a[i]=='\'')
				a[i]='l';
				
			else if(a[i]=='c')
				a[i]='z';
			else if(a[i]=='v')
				a[i]='x';
			else if(a[i]=='b')
				a[i]='c';
			else if(a[i]=='n')
				a[i]='v';
			else if(a[i]=='m')
				a[i]='b';
			else if(a[i]==',')
				a[i]='n';
			else if(a[i]=='.')
				a[i]='m';
			else if(a[i]=='/')
				a[i]=',';	
				
			else if(a[i]=='3')
				a[i]='1';
			else if(a[i]=='4')
				a[i]='2';
			else if(a[i]=='5')
				a[i]='3';
			else if(a[i]=='6')
				a[i]='4';
			else if(a[i]=='7')
				a[i]='5';
			else if(a[i]=='8')
				a[i]='6';
			else if(a[i]=='9')
				a[i]='7';	
			else if(a[i]=='0')
				a[i]='8';
			else if(a[i]=='-')
				a[i]='9';
			else if(a[i]=='=')
				a[i]='0';	
					
		}
		cout<<a<<endl;
	}
	return 0;
}

