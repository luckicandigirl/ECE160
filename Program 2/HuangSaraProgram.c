#include <stdio.h>
#include <string.h> 

#define SIZE (60)

	struct employee {
	char last_name [30];
	char first_name[35];
	float salary;
	int year_hired;
	};

	struct employee employees[20];

void save(){
	FILE *f; 
	f = fopen("company.db", "wb"); 
	fwrite(employees, sizeof(employees[0]), (sizeof(employees)/sizeof(employees[0])), f);
	fclose(f);
}

void retrieve() {
    FILE *f;
	f = fopen("company.db", "rb");
	fread(employees, sizeof(employees[0]), (sizeof(employees)/sizeof(employees[0])), f);
	fclose(f);
}

int main()

{
		
	//initialization
	for (int i = 0; i < 20; i++)
	{
		employees[i].last_name[0] = 0;
		employees[i].first_name[0] = 0;
		employees[i].salary = -1;
		employees[i].year_hired = -1;
	};
	
	char last_name[SIZE];
	char first_name[SIZE];
	float salary[SIZE];
	int year_hired[SIZE];
	
	FILE *infile;
	char *inname = "company.db";
	
	char cmd[SIZE] = "";
	while (strcmp(cmd,"quit")) {
		if (!strcmp(cmd,"display")) {
			int i = 0;
			printf("Type in record number: ");
			scanf("%d",&i);
			printf("%s, %s: %f, %d\n",employees[i].last_name, employees[i].first_name, employees[i].salary, employees[i].year_hired);
		} else if (!strcmp(cmd,"modify")) {
			int i = 0;
			printf("Type in record number: ");
			scanf("%d",&i);
			printf("Type in last name: ");
			scanf("%s",employees[i].last_name);
			printf("Type in first name: ");
			scanf("%s",employees[i].first_name);
			printf("Type in salary: ");
			scanf("%f",&employees[i].salary);
			printf("Type in year hired: ");
			scanf("%d",&employees[i].year_hired);
		} else if (!strcmp(cmd,"save")) {
			save();
		} else if (!strcmp(cmd, "retrieve")) {
			retrieve();
		}
			
		scanf("%s",cmd);
	}
	return 0;	
}
