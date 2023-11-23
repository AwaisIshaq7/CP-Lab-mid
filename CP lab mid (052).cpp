#include<iostream>
using namespace std;
int main()

{
	int current_salary,years, new_salary,i=0;
	char choice;

	cout << "Enter The Current Salary of an Employee: ";
	cin>>current_salary;
	cout << "For how any years do you want to calculate the increment for(e.g. 1,2,3): ";
    cin>>years;
    
    for(i=0;i<=years;i++)
    {
	cout<<"Choose b or B for additional 2% Bonus increment for exceptional performance: ";
	cin>>choice;
	{
	
	if(choice=='b'||choice=='B'){
	
	new_salary=current_salary+5*current_salary/100 + 2*current_salary/100;
	cout<<new_salary;}
	
   else{
    new_salary=current_salary+5*current_salary/100 ;
    cout<<new_salary;}
}
return 0;
}

}
