#include<stdio.h>
#include<string.h>
#include<conio.h>
#define LIMIT 2
#define over 500
clrscr();
struct people
{
    char name[20];
    int pid, i,overtime;
    int salary;
};
//display all list 
 void display(struct people t) 
 {
        printf("%d \t\t%s \t%d\t\t\t%d \n",t.pid,t.name, t.salary,t.overtime);
        return;
		};
		
		
		
		void print(struct people t)
		{
		int a;
		printf("\n\n SR GROUP \n\t\t\t");
		printf("\n The %s's salary of april is as given below\n",t.name);
		printf("\nTeacher id\t\tName of people\t\ttusion amount\t\t\ttotal Amount\n");
		printf("___________________________________________________________________________________\n");
		printf("%d\t\t%s\t\t%d\t\t\t%d\n",t.pid,t.name,(t.overtime*over),(t.salary+(t.overtime*over)));
		printf("________________________________________________________________________________________\n");
		a=(t.salary+(t.overtime*over));
		printf("total with  vat = %d",(a-(a/100)));
}
int main()
{
    struct people t[LIMIT];
    int i;
    int choice;
int check;
int month;

int num;

printf("\t\t\t\n NAVACHETANA SHAIKSHIK BOARDIND SCHOOL\n\n\tTEACHERS SALARY\n");
    for(i = 0; i < LIMIT; i++ )
    {
        printf("\nEnter details of people %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", t[i].name);

        printf("\nEnter people id: ");
        scanf("%d", &t[i].pid);

        printf("\nEnter salary: ");
        scanf("%d", &t[i].salary);
        
        printf("\Eenter the total  tution taken period:-");
        scanf("%d",&t[i].overtime);
    }
    {
 
       printf("1) SHOW ALL RECORDS\n");
        printf("2) Individual Salary\n");
 printf("Enter your choice : ");
                scanf("%d", &choice);
            }
               
                 if (choice != 5) {
                switch(choice)
    {
                        case 1 :
    printf("\n");

    printf("temploye id\t Name \t Basic salary\t over Periods\n");

    for(i = 0; i < LIMIT; i++ )
    {
       display(t[i]);
    }

                                                           
                 break;
                 case 2:
                  printf("Whose salary report you want to see please enter his/her tloy id\n");
                  scanf("%d",&check);
                  
              
                                        
                                        for (i = 0; i < LIMIT; i++) {
                                                if (check == t[i].pid) {
                                                        print(t[i]);
                                                        
                                                }}
                                    break;
																		   
} }
   getch();
	}


