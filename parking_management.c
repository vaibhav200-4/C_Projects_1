#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int menu();
void bus();
void cycle();
void riksha();
void Delete();
void showdetail();
int nor=0,noc=0,nob=0,amount=0,count=0;
//MAIN FUNCTION
int main()
{
	
  {
	do
		switch (menu())
   {
 	case 1:
 		bus();
 		break;
 	case 2:
 		cycle();
 		break;
 	case 3:
 		riksha();
 		break;
 	case 4:
 		showdetail();
 		break;
 	case 5:
 		Delete();
 		break;
 	case 6:
 		exit(0);
 	default :
 		printf("\nInvalid choice: XXX");
    }
  while(1);
return 0;
  }

}
//MENU FUNCTION
int menu()
{
	int ch;
	printf("\n1. Enter Bus:- ");
	printf("\n2. Enter Cycle:- ");
	printf("\n3. Enter Riksha:- ");
	printf("\n4. Show Status:- ");
	printf("\n5. Delete Data:- ");
	printf("\n6. Exit:- ");
	printf("\n\nEnter your choice:-\n\n");
	scanf("%d",&ch);
	return(ch);
}
//DELETE FUNCTION
void Delete()
{
 nob=0;
 noc=0;
 nor=0;
 amount=0;
 count=0;
}
//SHOW DETAIL FUNCTION
void showdetail()
{
 printf("\nNumber of Bus=%d",nob);
 printf("\nNumber of Cycle=%d",noc);
 printf("\nNumber of Riksha=%d",nor);
 printf("\nTotal number of Vehicle=%d",count);
 printf("\nTotal gain amount=%d\n\n",amount);
}
//RIKSHAW FUNCTION
void riksha()
{
 printf("\nENTRY SUCCESSFUL\n");
 nor++;
 if(nor>=3)
 {
     printf("parking full for Riksha \n");
 }
 else
 
 {
     amount=amount+50;
     count++;
 }
}
//CYCLE FUNCTION
void cycle()
{
 printf("\nENTRY SUCCESSFUL\n");
 noc++;
 if(noc>=5){
     printf("parking full for cycle");
 }
 else {
 amount=amount+20;
 count++;	
 }
}
//BUS FUNCTION
void bus()
{
 printf("\nENTRY SUCCESSFUL\n");
 nob++;
 if(nob>=3){
     printf("Now parking full for bus\n");
 }
 else {
 amount=amount+100;
 count++;	
 }
}
