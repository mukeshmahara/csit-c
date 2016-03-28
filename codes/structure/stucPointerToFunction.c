#include <stdio.h>

struct employee
	{
		char name[20];
		int id;
		float salary;
	};

void display(struct employee e){
	printf("Name: %s\n", e.name);
	printf("Employee id%d\n",e.id);
	printf("Salary: %.1f\n",e.salary);
}

void increaseSalary(struct employee *ee){
	ee->salary=ee->salary+1000;
}

void main(){
	
	struct employee emp;
	
	printf("Employee Name:\t");
	scanf("%s",emp.name);

	printf("Employee id:\t");
	scanf("%d",&emp.id);

	printf("Salary of the Employee:\t");
	scanf("%f",&emp.salary);
	increaseSalary(&emp);
	display(emp);
}