using namespace std;
#include<iostream>
#include<math.h>  
#include<stdlib.h>  

void Addition();  
void Subtraction();  
void Multiplication();  
void Division();   
 
int main()  
{    
	int ch;  
	// display different operation of the calculator  
	do  
	{  
	cout << "Select any operation from the C++ Calculator"  
	     "\n1: Addition"  
	     "\n2: Subtraction"  
	     "\n3: Multiplication"  
	     "\n4: Division"    
	     "\n5: Exit"  
	     "\n \n Enter a choice: ";  
	     cin >> ch;  
	  
	   switch (ch)  
	    {  
		    case 1:
			    Addition();   // call Addition() function to find the Addition  
			    break;  
		    case 2:  
			    Subtraction();   // call Subtraction() function to find the subtraction  
			    break;  
		    case 3:  
			    Multiplication(); // call Multiplication() function to find the multiplication  
			    break;  
		    case 4:  
			    Division(); // call Division() function to find the division  
			    break;    
		    case 5:   
		    	break;  
		    default:  
			    cout <<"Something is wrong..!!";  
			    break;  
	    }  
	    cout <<" \n------------------------------\n";  
	}while(ch != 6);  

}  
	  
void Addition()  
{  
	int n, sum = 0, i, number;  
	cout <<"How many numbers you want to add: ";  
	cin >> n;  
	cout << "Please enter the number one by one: \n";  
	for (i = 1; i <= n; i++)  
	{  
		cin >> number;  
		sum = sum + number;  
	}  
	cout << "\n Sum of the numbers = "<< sum;  
}  
	
void Subtraction()  
{  
	int num1, num2, z;  
	cout <<" \n Enter the First number : ";  
	cin >> num1;  
	cout << "\n Enter the Second number : ";  
	cin >> num2;  
	z = num1 - num2;  
	cout <<"\n Subtraction of the number = " << z;  
}  
	
void Multiplication()  
{  
	int num1, num2, mul;  
	cout <<" \n Enter the First number : ";  
	cin >> num1;  
	cout << "\n Enter the Second number : ";  
	cin >> num2;  
	mul = num1 * num2;  
	cout <<"\n Multiplication of two numbers = " << mul;  

}  

void Division()  
{  
	int num1, num2, div = 0;  
	cout <<" \n Enter the First number : ";  
	cin >> num1;  
	cout << "\n Enter the Second number : ";  
	cin >> num2;  
	while ( num2 == 0)  
	{  
	    cout << "\n Divisor canot be zero"  
	         "\n Please enter the divisor once again: ";  
	    cin >> num2;  
	}  
	div = num1 / num2;  
	cout <<"\n Division of two numbers = " << div;  
}  
	

