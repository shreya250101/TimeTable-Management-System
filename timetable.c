#include<stdio.h>
#include<stdlib.h>
struct table
{
	char subject[30];
	char faculty[30];
}t[30];

int main()
{
 int semester,total;
 char section[20];
 int sub1[20],sub2[20],sub3[20],sub4[20],sub5[20],sub6[20];
 FILE *fp;
 printf("\n Enter the semester:");
 scanf("%d",&semester);
 printf("\n Enter section name:");
 scanf("%s",&section);
 printf("\n Enter total no.of subjects:");
 scanf("%d",&total);
 for(int i=1;i<=total;i++)
 {
	printf("\n Enter subject name and faculty name:");
    scanf("%s %s",t[i].subject,t[i].faculty);	
 }
 printf("\n\t\t\tTIME TABLE GENERATOR\n");
 //Monday Timetable
 printf("\n Enter timetable for Monday ");
 printf("\n Choose the subject from the list:\n");
 for(int i=1;i<=total;i++)
 {
	 printf(" %d.%s  ",i,t[i].subject);
 }
printf("\n");
    for(int i=1;i<=5;i++)
	{
		printf("\n Enter subject for period %d:",i);
		scanf("%d",&sub1[i]);
		if(sub1[i]>total)
		{
			printf("\nError: Invalid input\n");
		}
	}
//Tuesday Timetable
printf("\n Enter timetable for Tuesday");
printf("\n Choose the subject from the list:\n");
 for(int i=1;i<=total;i++)
 {
	 printf(" %d.%s  ",i,t[i].subject);
 }
 printf("\n");
    for(int i=1;i<=3;i++)
    {
		printf("\n Enter subject for period %d:",i);
		scanf("%d",&sub2[i]);
		if(sub2[i]>total)
		{
			printf("\n Error: Invalid input\n");
		}
		if(i==3)
		{
			printf("\n Period 4 and 5 are reserved for special topic\n");
		}	
    }
//Wednesday Timetable
printf("\n Enter timetable for Wednesday");
printf("\n Choose the subject from the list:\n");
 for(int i=1;i<=total;i++)
 {
	 printf(" %d.%s  ",i,t[i].subject);
 }
 printf("\n");
    for(int i=1;i<=3;i++)
	{
		printf(" Enter subject for period %d:",i);
		scanf("%d",&sub3[i]);
		if(sub3[i]>total)
		{
			printf("\n Error: Invalid input\n");
		}
    }
//Thursday Timetable
printf("\n Enter timetable for Thursday");
printf("\n Choose the subject from the list:\n");
 for(int i=1;i<=total;i++)
 {
	 printf(" %d.%s  ",i,t[i].subject);
 }
 printf("\n");
	for(int i=1;i<=5;i++)
    {
		printf("\n Enter subject for period %d:",i);
		scanf("%d",&sub4[i]);
		if(sub4[i]>total)
		{
			printf("\n Error: Invalid input\n");
		}
   }	
//Friday Timetable
printf("\n Enter timetable for Friday");	
printf("\n Choose the subject from the list:\n");
 for(int i=1;i<=total;i++)
 {
	 printf("%d.%s  ",i,t[i].subject);
 }
 printf("\n");
	for(int i=1;i<=5;i++)
	{
		printf("\n Enter subject for period %d:",i);
		scanf("%d",&sub5[i]);
		if(sub5[i]>total)
		{
			printf("\n Error: Invalid input\n");
		}
    }
//Saturday Timetable
printf("\n Enter timetable for Saturday");	
printf("\n Choose the subject from the list:\n");
 for(int i=1;i<=total;i++)
 {
	 printf("%d.%s  ",i,t[i].subject);
 }
 printf("\n");
    for(int i=1;i<=5;i++)
	{
		printf("\n Enter subject for period %d:",i);
		scanf("%d",&sub6[i]);
		if(sub6[i]>total)
		{
			printf("\nError: Invalid input\n");
		}
    }
//Opening the file
fp = fopen("timetable.txt","w");
if(fp == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
fprintf(fp,"\n\t\t\t\t\t\t\t\t\t TIME TABLE");
fprintf(fp,"\n B.Tech Semester:%d\t\t\t SECTION : %s",semester,section);
fprintf(fp,"\n===================================================================================================================================================================");
fprintf(fp,"\nDay\t\t\tPeriod 1\t\tPeriod 2\t\tPeriod 3\t\tInterval\t\t Period 4\t\t\tPeriod 5");
fprintf(fp,"\n\t\t\t08:00-09.00am\t\t09.00-10.00am\t\t10.00-11.00am\t\t11.00-11.30am\t\t 11.30-12.30pm\t\t\t12.30-1.30pm");
fprintf(fp,"\nMonday");
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub1[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
fprintf(fp,"\t\t\tB\t");
for(int i=4;i<=5;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub1[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
fprintf(fp,"\nTuesday");
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub2[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
fprintf(fp,"\t\t\tR\t\t");
for(int i=4;i<=5;i++)
{
	fprintf(fp,"\t\tReserved");
}
fprintf(fp,"\nWednesday");
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub3[i]==j)
		{
			fprintf(fp,"\t\t%s",t[j].subject);
		}
	}
	fprintf(fp,"\t");
}
fprintf(fp,"\t\tE\t\t");
fprintf(fp,"\nThursday");
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub4[i]==j)
		{
			fprintf(fp,"\t\t%s",t[j].subject);
		}
	}
	fprintf(fp,"\t");
}
fprintf(fp,"\t\tA\t");
for(int i=4;i<=5;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub4[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
fprintf(fp,"\t\nFriday");
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub5[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
fprintf(fp,"\t\t\tK\t");
for(int i=4;i<=5;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub5[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
fprintf(fp,"\t\nSaturday");
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub6[i]==j)
		{
			fprintf(fp,"\t\t%s",t[j].subject);
		}
	}
	fprintf(fp,"\t");
}
fprintf(fp,"\t\t \t");
for(int i=4;i<=5;i++)
{
	for(int j=1;j<=total;j++)
	{
		if(sub6[i]==j)
		{
			fprintf(fp,"\t\t\t%s",t[j].subject);
		}
	}
}
 fprintf(fp,"\n\n\tSubject\t\t\t\tFaculty");
 for(int i=1;i<=total;i++)
 {
  fprintf(fp,"\n\t%s\t\t\t\t%s",t[i].subject,t[i].faculty);
 }

fclose(fp);
//Closing the file
 return 0;
}