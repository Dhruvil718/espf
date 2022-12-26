#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:

printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"Dhruvil")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have entered an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

 if(strcmp(pass,"")==0)//Dhruuvil Patel son of my FAther Shri Patel Paresh PAtel

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.Choose Criminal For Information\n");
	printf("2.Choose Criminal For Crime\n");
	printf("3.Get information about Law \n");
	printf("4.Get help for Other Services \n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE:");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice;	
	}
	  char a,b;
	a:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&b);
	if(b=='y' || b=='Y')
	{
		goto choice2;
	}
	else
	{
	    goto choice;	
	}
		
		
	case 1: {
				printf("\nPLEASE SELECT Crminal TO GET INFO\n\n");
			printf("1.Hitler\n");
			printf("2.Joseph Kony\n");
			printf("3.Alimzhan Tokhtakhounov\n");
		
		    int choice1;
		    choice1:
		    printf("ENTER YOUR CHOICE for Crminal:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("\nBirth and rise:\n");
				printf("Criminal offences\n");
				printf("Current Scenario\n");
				goto hlo;
			 } 
			 else if(choice1==2)
			 {
				printf("\nBirth and rise: Born on 1st March 1933\n");
				printf("Criminal offences: He also provided them with logistic support by supplying them with weapons, uniforms, transport vehicles, etc. to terrists	\n");
				printf("Current Scenario:  May 2020, Felicien was finally arrested in Paris, France.\n");
				goto hlo;
			 }
			  else if(choice1==3)
			 {
			 		printf("\nBirth and rise: Born on 1st January 1949 	\n");
				printf("Criminal offences: This organisation was responsible for laundering billions of dollars from illegal international gambling operations running out of Russia and Ukraine\n");
				printf("Current Scenario: Currently, Alimzhan is still at large and is believed to be living a free life in Russia\n");
				goto hlo;
			 }
			  
		    else
		    {
				
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            	printf("\n\n");
				printf("1.\n");
				printf("2.\n");
				printf("3.\n");
				printf("4.\n");
				printf("5.\n");
				printf("6.\n\n");
				int choice2;
				choice2:
		        printf(":");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {
                	
					printf("\n\n\n");
					goto a;
				 }
				  if(choice2==2)
                {
                	
					printf(".\n\n");
					goto a;
				 }
				  if(choice2==3)
                {
                	
					printf("\n\n");
					goto a;
				 }
				  if(choice2==4)
                {
                	
					printf("\n\n");
					goto a;
				 }
				  if(choice2==5)
                {
                	
					printf(".\n\n");
					goto a;
				 }
				  if(choice2==6)
                {
                	
					printf("\n\n");
					goto a;
				 }
				  else
		    {
		    	printf("SORRY WRONG CHOICE");
			}
				 
				 break;
		
		
	}
	
	default:
		printf("wrong Input\n");
	}





return 0;
}


int input(){

    int number;
    scanf("%d", &number);
    return(number);
}