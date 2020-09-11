#include<iostream>
using namespace std;
int main() {
  int num1,num2,ans,ch;
  
  cout<<"Enter the Numbers";
  cin>>num1>>num2;
  
	  do {
	  
	  cout<<"MENU\n";
	  cout<<"1. Addition\n";
	  cout<<"2. Subtraction\n";
	  cout<<"3. Multiply\n";
	  cout<<"4. Division\n";
	  cout<<"5. Quit";
	  cout<<"Enter Your Choice: ";
	  cin>>ch;
	  
		  switch(ch) {
		  	
		  	case 1: ans= num1 + num2;
		  			cout<<"Addition = "<<ans;
		  		break;
		  	case 2: ans= num1 - num2;
		  			cout<<"Subtraction = "<<ans;
		  		break;
			case 3: ans= num1 * num2;
		  			cout<<"Multiply = "<<ans;
		  		break;
			case 4: ans= num1 / num2;
		  			cout<<"Division = "<<ans;
		  		break; 	
		  }
	}while(!5);
	  
}
