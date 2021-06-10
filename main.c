 #include<stdio.h>

       struct Employee
       {
              char Name[25];
              int Id;
              float Experience;
              int Salary;
       };
       int main()
       {
              int i;
              struct Employee Emp[ 5 ];

              for(i=0;i<5;i++)
              {

              printf("\nEnter details of %d Employee",i+1);

                    printf("\nEnter Employee Name : ");
                    scanf("%s",&Emp[i].Name);

                    printf("\nEnter Employee Id : ");
                    scanf("%d",&Emp[i].Id);

                    printf("\nEnter Employee Experience : ");
                    scanf("%f",&Emp[i].Experience);

                    printf("\nEnter Employee Salary : ");
                    scanf("%d",&Emp[i].Salary);
              }
              printf("\nDetails of Employees");
              for(i=0;i<5;i++)
              printf("\n%s\t%d\t%f\t%d",Emp[i].Name,Emp[i].Id,Emp[i].Experience,Emp[i].Salary);
           return 0;
       }
