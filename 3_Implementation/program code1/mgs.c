#incude<stdio.h>
include<string.h>
int main()
{
// CREATING MARKSHEET IN C PROGRAMMING 
// OBTAIN MARKS
// PERCENTAGE 
// GRADE 
// REMARKS
// SUPPLY OR FAIL

char name[30],fname[30];
int rollno, standard, math, urdu, english, physics, chemistry, obtsined, percentsge;

//taking user details

printf("Enter your name !! \n");
scanf("%s",&name);
printf("Enter your Father name !! \n");
scanf("%s",&fname);
printf("Enter your rollno !! \n");
scanf("%d",&rollno);
printf("Enter your class !! \n");
scanf("%d",&standard);
 
 //taking user marks

printf("Enter math marks !! \n");
scanf("%d",&math);
printf("Enter urdu marks !! \n");
scanf("%d",&urdu);
printf("Enter english marks !! \n");
scanf("%d",&english);
printf("Enter physics marks !! \n");
scanf("%d",&physics);
printf("Enter chemistry marks !! \n");
scanf("%d",&chemistry);

//calculating obtain marks and percentage
obtained = math + urdu + english + physics + chemistry;
percentage = obtained*100/500;

//printing marksheet

printf("--------MARKSHEET-------- \n");

printf("your name is %s \n",name);
printf("your father name is %s \n",fname);
printf("your roll Number is %d \n",rollno);
printf("your class is %d \n",standard);
printf("your obtained marks are %d \n",obtained);
printf("your percentage is %d \n",percentage);

//if else for if for grade

if(percentage >= 80)
{
    printf("Grade: A-1 \n");
}
else if(percentage >= 70)
{
    printf("Grade: A \n");
}
else if(percentage >= 50)
{
    printf("Grade: B \n");
}
else if(percentage >= 50)
{
    printf("Grade: C \n");
}
else if(percentage >= 40)
{
    printf("Grade: D \n");
}
else if (percentage >=33)
{
    printf("Grade: E \n");
}
else
{
    printf("Grade: F --Fail \n");
}
/if else for if for grade

//if else if for remarks 

if(percentage >= 80)
{
    printf("Remarks: Excellent \n");
}
else if(percentage >= 70)
{
    printf("Remarks: Very Good \n");
}
else if(percentage >= 50)
{
    printf("Remarks: Good \n");
}
else if(percentage >= 50)
{
    printf("Remarks: Fair \n");
}
else if(percentage >= 40)
{
    printf("Gremarks: poor \n");
}
else if (percentage >=33)
{
    printf("Remarks: Needs improvement \n");
}
else
{
    printf("Remarks: Bring your parents tomorrow \n");
}

int supply = 0;

if(math < 33)
{
    printf("You have supply in maths");
    //supply++;
}
if(urdu < 33)
{
    printf("You have supply in urdu");
    //supply++;
}
if(english < 33)
{
    printf("You have supply in english");
   //supply++
}
if(physics < 33)
{
    printf("You have supply in physics");
    //supply++;
}
if(chemistry)
{
    printf("You have supply in chemistry");
    //supply++;
}

//printf("You have %d supply",supply);
}







