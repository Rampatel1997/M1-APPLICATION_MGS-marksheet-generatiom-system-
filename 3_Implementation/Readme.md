PROGRAM CODE OF THE MARKSHEET:>


#include<stdio.h>

#include<stdlib.h>

int main()

{
  int rollno, std, maths, science, english, hindi, computer;
  
  char name[30], school_name[30];

  printf("Enter your Roll No:");
  
  scanf("%d", &rollno);

  printf("Enter your name:");
  scanf(" %s", name);
  
  //gets(name);

  printf("Enter your School name:");
  
  scanf(" %s", school_name);
  
  //gets(school_name);

  printf("Enter your Standard:");
  
  scanf("%d", &std);

  printf("Enter marks of maths:");
  
  scanf("%d", &maths);

  printf("Enter marks of science:");
  
  scanf("%d", &science);

  printf("Enter marks of english:");
  
  scanf("%d", &english);

  printf("Enter marks of hindi:");
  
  scanf("%d", &hindi);

  printf("Enter marks of computer:");
  
  scanf("%d", &computer);

  printf("===================================================\n");
  
  printf("MARKSHEET OF STANDARD:%d, %s\n", std, school_name);
  
  printf("===================================================\n");
  
  printf("Roll No.: %d Student Name: %s\n", rollno, name);
  
  printf("---------------------------------------------------\n");
  
  printf("SUBJECT\t\t\tMARKS\n");
  
  printf("---------------------------------------------------\n");
  
  printf("Maths\t\t\t %d \n", maths);
  
  printf("Science\t\t\t %d \n", science);
  
  printf("English\t\t\t %d \n", english);
  
  printf("Hindi\t\t\t %d \n", hindi);
  
  printf("Computer\t\t %d \n", computer);
  
  printf("---------------------------------------------------\n");
  
  printf("Total Marks:\t\t%d\n", maths+science+english+hindi+computer);
  
  printf("===================================================\n");
  
  

  return 0;
 
}


OUTPUT OF THE PROGRAM MARKSHEET:>


Enter your Roll No:101

Enter your name:RAMPOOJAN PATEL

Enter your School name:PRAYAGRAJHIGHSCHOOL

Enter your Standard:10

Enter marks of maths:90

Enter marks of science:80

Enter marks of english:95

Enter marks of hindi:85

Enter marks of computer:90

===================================================

MARKSHEET OF STANDARD:7, PRAYAGRAJHIGHSCHOOL

===================================================

Roll No.: 101   Student Name: RAMPOOJAN PATEL

---------------------------------------------------

SUBJECT                 MARKS

---------------------------------------------------

Maths                    90

Science                  80

English                  95

Hindi                    85

Computer                 90

---------------------------------------------------

Total Marks:            440

===================================================

