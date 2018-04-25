#include <iostream>
using namespace std;

float tax (int salary);
int salary;
int taxedSalary;
int incomeTax;

float tax (int salary) {
		
		if (salary <= 10000) {
			
			incomeTax = (salary * 0.1);
			taxedSalary = salary - incomeTax;
			
		} else if (salary <= 20000) {
			
			incomeTax = (salary * 0.1) + (salary * 0.15);
			taxedSalary = salary - incomeTax;
			
		} else if (salary <= 30000) {
			
			incomeTax = (salary * 0.1) + (salary * 0.15) + (salary * 0.2);
			taxedSalary = salary - incomeTax;
			
		} else if (salary > 30000) {
			
			incomeTax = (salary * 0.3);
			taxedSalary = salary - incomeTax;
			
		}
		
		return taxedSalary;
	}
	

int main()
{
	int hours;
	
	cout<< "Please enter the total number of hours you worked per last month\n";
	cin>> hours;
	
	int gradeA = 300 * hours;
	int gradeB = 500 * hours;
	int gradeC = 700 * hours;
	
	cout<< "Please input your pay Grade\n";
	cout<< "1. Grade A\n";
	cout<< "2. Grade B\n";
	cout<< "3. Grade C\n";
	cin>> salary;
	
	
	
	switch(salary) {
		case 1:
			
			cout<<"**********************************************************"<<endl;
  			cout<<"*                       PAYSLIP                          *"<<endl;
			cout<<"*                                                        *"<<endl;
			cout<<"*                                                        *"<<endl;  
  			cout<<"*        NO. OF HOURS PER MONTH:   " << hours <<       " hours             *"<<endl;
			cout<<"*        EMPLOYEE PAY GRADE:       Grade A               *"<<endl;
			cout<<"*        GROSS INCOME:             KSH. " << gradeA <<      "            *"<<endl;
		  	cout<<"*        TAX PAYED:                KSH. " << (gradeA - tax(gradeA)) <<   "            *"<<endl;
		  	cout<<"*        NET INCOME:               KSH. " << tax(gradeA) << "            *"<<endl; 
		  	cout<<"*                                                        *"<<endl;
		  	cout<<"*                                                        *"<<endl;
		  	cout<<"*     Thank you for using our services.                  *"<<endl; 
		  	cout<<"**********************************************************"<<endl;
		  	
			break;
		case 2:
			
			cout<<"**********************************************************"<<endl;
  			cout<<"*                       PAYSLIP                          *"<<endl;
			cout<<"*                                                        *"<<endl;
			cout<<"*                                                        *"<<endl;  
  			cout<<"*        NO. OF HOURS PER MONTH:   " << hours <<       " hours             *"<<endl;
			cout<<"*        EMPLOYEE PAY GRADE:       Grade B               *"<<endl;
			cout<<"*        GROSS INCOME:             KSH. " << gradeB <<      "            *"<<endl;
		  	cout<<"*        TAX PAYED:                KSH. " << (gradeB - tax(gradeB)) <<   "            *"<<endl;
		  	cout<<"*        NET INCOME:               KSH. " << tax(gradeB) << "            *"<<endl; 
		  	cout<<"*                                                        *"<<endl;
		  	cout<<"*                                                        *"<<endl;
		  	cout<<"*     Thank you for using our services.                  *"<<endl; 
		  	cout<<"**********************************************************"<<endl;
			
			break;
		case 3:
			
			cout<<"**********************************************************"<<endl;
  			cout<<"*                       PAYSLIP                          *"<<endl;
			cout<<"*                                                        *"<<endl;
			cout<<"*                                                        *"<<endl;  
  			cout<<"*        NO. OF HOURS PER MONTH:   " << hours <<       " hours             *"<<endl;
			cout<<"*        EMPLOYEE PAY GRADE:       Grade C               *"<<endl;
			cout<<"*        GROSS INCOME:             KSH. " << gradeC <<      "            *"<<endl;
		  	cout<<"*        TAX PAYED:                KSH. " << (gradeC - tax(gradeC)) <<   "            *"<<endl;
		  	cout<<"*        NET INCOME:               KSH. " << tax(gradeC) << "            *"<<endl; 
		  	cout<<"*                                                        *"<<endl;
		  	cout<<"*                                                        *"<<endl;
		  	cout<<"*     Thank you for using our services.                  *"<<endl; 
		  	cout<<"**********************************************************"<<endl;
			
			break;	
		default:
			cout<< "Please choose a number\n";
	}
	
	system("pause");
	
	return 0;
}



