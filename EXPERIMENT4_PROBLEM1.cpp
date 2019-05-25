#include <iostream>
#include <cstdlib>
using namespace std;

int x, num1, num2;
char choice;

int main(){

	cout<<"Calculator Program"<<endl;
	cout<<"1.)ADD"<<endl;
	cout<<"2.)SUBTRACT"<<endl;
	cout<<"3.)MULTIPLY"<<endl;
	cout<<"4.)DIVIDE"<<endl;
	cout<<"5.)MODULUS"<<endl;
	cout<<endl;
	cout<<"Enter desired Operation [1-5]: ";
	cin>>x;
	cout<<endl;
	cout<<"Enter two(2) desired numbers: ";
	cin>>num1>>num2;
	
	switch(x){
	
		case 1:
		cout<<"Chosen Operation: ADD"<<endl;
		cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now terminate. Thank You!"<<endl;
				return 0;
		}
		
		case 2:
		cout<<"Chosen Operation: SUBTRACTION"<<endl;
		cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now terminate. Thank You!"<<endl;
				return 0;
		}
		
		case 3:
		cout<<"Chosen Operation: MULTIPLY"<<endl;
		cout<<"The product of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now terminate. Thank You!"<<endl;
				return 0;
		}
		
		case 4:
		cout<<"Chosen Operation: DIVIDE"<<endl;
		cout<<"The quotient of "<<num1<<" and "<<num2<<" is "<<num1/num2<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
		
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now terminate. Thank You!"<<endl;
				break;
				return 0;
		}
		
		case 5:
		cout<<"Chosen Operation: MODULUS"<<endl;
		cout<<"The remainder of "<<num1<<" and "<<num2<<" is "<<abs(num1%num2)<<endl;
		cout<<endl;
		cout<<"Do you want to continue? [Y/N]: ";
		cin>>choice;
	
		switch(choice){
			
			case 'Y':
			case 'y':
				return main();
				
			case 'N':
			case 'n':
				cout<<"The program will now terminate. Thank You!"<<endl;
				break;
				return 0;
		}
		
	}
	
	return 0;

}
