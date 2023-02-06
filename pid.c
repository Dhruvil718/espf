#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");//Dhruvil
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

 if(strcmp(pass,"7283")==0)//7283

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.Choose Criminal For Information\n");
	printf("2.Choose Criminal For Crime\n");
	printf("3.Get information about Criminal Law \n");
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
	char x, y;
	x:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s", &y);
	if (y == 'y' || y == 'Y')
	{
		goto choice3;
	}
	else
	{
		goto choice;
	}

	case 1: {
				printf("\nPLEASE SELECT Crminal TO GET INFO\n\n");
				printf("1.Doku Khamatovich Umarov\n");
				printf("2.Joseph Kony\n");
				printf("3.Alimzhan Tokhtakhounov\n");
				printf("4.Felicien Kabuga\n");
				printf("5.Nasir al-Wuhayshi\n");
				printf("6.Matteo Messina Denaro\n");
				printf("7.James Whitey Bulger\n");
				printf("8.Rafael Caro Quintero\n");
				printf("9.Omid Tahvili\n");
				printf("10.Pedro Antonio Marin\n");

				int choice1;
		    choice1:
		    printf("ENTER YOUR CHOICE for Crminal:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
		printf("\nBirth and rise : Born on April 13, 1964, Doku Umarov identified himself as a separatist leader of Checheno-Ingushetia, U.S.S.R., currently known as Chechnya, Russia.\n");
		printf("\n\n\nCriminal offences : In 2009, he called in a battalion of suicide bombers and declared Russia as his target. These bombers were responsible for killing more than 24 people on board a train from Moscow. In 2010, he released a video claiming culpability for multiple attacks on Russian soil and threatened that there were more to come. In 2011, he released yet another video claiming responsibility for a suicide bomber attack on the Moscow airport that led to the deaths of over 30 people. In 2012, he sought support from his followers to disrupt the 2014 Winter Olympic Games that were to be held in Russia. However, no attacks occurred during the event\n");
		printf("\n\n\nCurrent Scenario : In 2014, a website linked to the Islamic insurgency in Russia declared that Doku had died and a new President was appointed as his successor. It was later alleged that he was poisoned in August 2013. However, Russia has claimed on multiple occasions that its secret forces were responsible for his assassination.\n");
		goto hlo;
			 } 
			 else if(choice1==2)
			 {
				printf("\nBirth and rise: Born on 1st March 1933\n");
				printf("\\n\n\nnCriminal offences: He also provided them with logistic support by supplying them with weapons, uniforms, transport vehicles, etc. to terrists	\n");
				printf("\n\n\n\nCurrent Scenario:  May 2020, Felicien was finally arrested in Paris, France.\n");
				goto hlo;
			 }
			  else if(choice1==3)
			 {
			 		printf("\nBirth and rise : Born on 1st January 1949 	\n");
					printf("\n\n\nCriminal offences : This organisation was responsible for laundering billions of dollars from illegal international gambling operations running out of Russia and Ukraine\n");
					printf("\n\n\nCurrent Scenario : Currently, Alimzhan is still at large and is believed to be living a free life in Russia\n");
					goto hlo;
			 }
			 else if (choice1 == 4)
			 {
				printf("\nBirth and rise : Born on 1st March 1933, Felicien was one of the richest men in Rwanda prior to the 1994 Rwandan genocide.\n");
				printf("\n\n\nCriminal offences : He also provided them with logistic support by supplying them with weapons, uniforms, transport vehicles, etc. The US Department of State had declared a 5 million dollar reward for any information that would have led to the arrest, transfer, or conviction of Felicien.\n");
				printf("\n\n\nCurrent Scenario : In May 2020, Felicien was finally arrested in Paris, France. During the trial in the French Court, he refuted the charges and argued against extradition to the United Nations Tribunal in Tanzania on the grounds of COVID-19 and other health reasons.In September 2020, France's top appeal court ordered the extradition of Felicien and for him to face trial at the UN Tribunal in Tanzania. On June 13, 2022, the UN Tribunal ruled that Felicien is fit to stand trial and that the trial should commence at the earliest.\n");
				goto hlo;
			 }
			 else if (choice1 == 5)
			 {
				printf("\nBirth and rise : Born 1st October 1976, in Yemen, he was part of multiple religious institutions in Yemen before joining Al-Qaeda in 1988\n");
				printf("\n\n\nCriminal offences : Its rise began with the 2003 Riyadh bombings, and it gained significant attention after the 2008 attack on the US embassy in Sanaa. In 2009, the AQAP claimed responsibility for the attempted bombing of a US passenger jet. In 2015, it claimed responsibility for a terrorist attack in the offices of a weekly newspaper, Charlie Hebdo, in Paris, which led to the deaths of 12 people and injured over 11 people. The AQAP was also accused of attempting to sneak bombs through US cargo planes in 2010.\n");
				printf("\n\n\nCurrent Scenario : On June 12, 2015, Wuhyashi was killed in a drone strike in Yemen carried out by the American Central Intelligence Agency (CIA). However, this does not mark an end to the AQAP as a new leader was announced soon after the death of Wuhyashi.\n");
				goto hlo;
			 }
			 else if (choice1 == 6)
			 {
				printf("\nBirth and rise : Born on 26 April 1962, in Sicily, the path towards the mafia commission of Trapani was pre-set for Denaro as the same was headed by his father.\n");
				printf("\n\n\nCriminal offences : He was involved in multiple crimes, starting from extorting money from businessmen in the name of protection and taking over public construction contracts. He was also part of drug trafficking cartels that were spread across Germany and Belgium. In 1993, he was responsible for the bombing of the Uffizi Gallery in Florence, Italy, which killed 6 people and wounded over 26 others. He was also the mastermind behind multiple terrorist bombings throughout Italy that led to the deaths of 10 people and injured over 93 others. In total, he is wanted for over 50 murders.\n");
				printf("\n\n\nCurrent Scenario : After the 1993 bombings, Denaro went into hiding and is still at large. He is still one of Europe's most wanted fugitives and has been convicted for life imprisonment on the grounds of murder, grievous bodily injury and participation in criminal organisations.\n");
				goto hlo;
			 }
			 else if (choice1 == 7)
			 {
				printf("\nBirth and rise : Whitey Bulger aka James Joseph Bulger, Jr. born on 3rd September 1929, Massachusetts, was one of the most feared American crime lords from 1960-1990.\n");
				printf("\n\n\nCriminal offences : He was convicted of a 20 years sentence in 1956 on account of multiple bank robberies. However, he was out on parole in 1965, and thereafter he joined the Winter Hill Gang as an enforcer. He later became an informant for the Federal Bureau of Investigation (FBI). However, instead of him providing information to the FBI, he started controlling FBI agents and used them to his own advantage. He soon took over the gang and began extorting money from businessmen, drug dealers, and other criminals. Due to his connection to the FBI, his name never came up. During this time, he committed 19 murders. After his FBI connection was exposed, he fled Boston and started living under a false identity.\n");
				printf("\n\n\nCurrent Scenario : In June 2011, he was arrested by the FBI and charged with 19 murders. Post-trial, he was found guilty of participating in 11 murders and was given two consecutive life sentences plus 5 years as punishment.  In 2018, he was transferred to U.S. Penitentiary Hazelton in northern West Virginia, where he was killed by the prison inmates.\n");
				goto hlo;
			 }
			 else if (choice1 == 8)
			 {
				printf("\nBirth and rise : Born on 24th October 1952, in Sinaloa, he left his hometown at the age of 20 and got involved in drug trafficking operations in Chihuahua.\n");
				printf("\n\n\nCriminal offences : He was primarily involved in the activity of drug trafficking into the US and Mexico borders in large quantities. He combined multiple cartels to form one giant drug trafficking cartel in Mexico and became the leader of the same. He kidnapped a US Drug Enforcement Agent because of his involvement in the raid and seizure of his marijuana, resulting in a 160-million-dollar loss. He also murdered 3 other people.\n");
				printf("\n\n\nCurrent Scenario : Following the murders, he was arrested in 1985 and was sentenced to 40 years in prison. However, he came out of prison in 2013 on the grounds of an improper trial. Although another warrant was issued by a Mexican court soon after, he fled the scene and is at large to date and has a 20 million dollar reward for any information that could lead to his arrest or conviction.\n");
				goto hlo;
			 }
			 else if (choice1 == 9)
			 {
				printf("\nBirth and rise : Born 31st October 1970, in Iran, Omid arrived in Canada in 1994.\n");
				printf("\n\n\nCriminal offences : He is mainly accused of running a fraudulent telemarketing business in the USA through which he defrauded hundreds of victims for a sum of over 3 million dollars over a period of 3 years, i.e., from 1999-2002. In 2003, the District Court of South California charged him with mail fraud, wire fraud, telemarketing fraud, and aiding and abetting.\n");
				printf("\n\n\nCurrent Scenario : In 2005, Omid was arrested by the FBI. However, before his trial could begin, he escaped from the prison by bribing the security guard. The guard was arrested and convicted later. However, Omid is still at large and remains an international fugitive\n");
				goto hlo;
			 }
			 else if (choice1 == 10)
			 {
				printf("\n\n\nBirth and rise : Born on 13th May 1930, in Colombia, following the massacre of his town and family.\n");
				printf("\n\n\nCriminal offences : He established FARC with the aim of usurping the then Colombian government. Soo, the organisation, saw support from the local rural villages and towns and grew in size with over 12,000 fighters and thousands of supporters. It primarily indulged in raising attacks against the Colombian military and government. Also, it was involved in drug trafficking, extortion, murders, and other terrorist activities. Marin was single-handedly responsible for the production and distribution of drugs in the US, taxation of the drug trade in Colombia and killing anyone who opposed his policies.\n");
				printf("\n\n\nCurrent Scenario : In 2008, Marin died due to natural causes.\n");
				goto hlo;
			 }

				else
				{

					printf("SORRY WRONG CHOICE");
				}
			 }
	case 2: {
            	printf("\n\n");
				printf("1.Omid Tahvili (Persia)\n");
				printf("2.James “Whitey” Bulger (America)\n");
				printf("3.Al Capone (America)\n");
				printf("3.Matteo Messina Denaro\n");
				printf("3.Joseph Kony (Uganda)\n");
				printf("3.Alimzhan Tokhtakhounov (Russia)\n");
				printf("3.Felicien Kabuga (Rwanda)\n");
				printf("8.Pedro Antonio Marin (Colombia)\n");
				printf("9.Dawood Ibrahim Kaskar (India)\n");
				printf("10.Joaquin Guzman (Mexico)\n");

				int choice2;
				choice2:
		        printf("");
                scanf("%d",&choice2);
  
                
                if(choice2==1)
                {

				printf("Bigwig of an Iranian crime association, he was blamed for mail extortion, wire misrepresentation, selling, and abetting. He got away from a high-security jail in November 2007 subsequent to paying off a gatekeeper. Because of his sturdy connections in Europe and the Middle East, he is as yet evading insight offices and filling in as a worldwide wrongdoing administrator.\n\n\n");
				goto a;
				 }
				  if(choice2==2)
                {

				printf("An admirer of history books and Adolf Hitler, he is on the FBI's most needed rundown since 1995. In the beginning years, he was captured for taking, fabrication, attack, and equipped theft. He is known for his trusting and gainful relationship with criminals.\n\n");
				goto a;
				 }
				  if(choice2==3)
                {

				printf("Keeping the equation 'cash is the game' as a top priority, a kid joined a road group and later turned into an encapsulation of pulverization in the United States. He started his wrongdoing chronicle with rackets of betting, coercion, assurance, and prostitution. His hazardous temper made him the supervisor of American criminal endeavors\n\n");
				goto a;
				 }
				  if(choice2==4)
                {

				printf("Also called 'Boss of all Bosses,' this artistically credited 'Playboy Don' is partial to costly Porsche sports vehicle, Rolex watches, Rayban shades, extravagant garments from Giorgio Armani, Versace, and young ladies. Brought into the world in a Mafia family, this head of Cosa Nostra (Mafia) figured out how to utilize the weapon at the early age of 14. He, himself, concedes - 'I filled a burial ground without anyone else.'\n\n");
				goto a;
				 }
				  if(choice2==5)
                {

				printf("Enemy of the Ugandan Government, Kony framed a disobedience bunch called Lord's Resistance Army (LRA) in 1987. Attached to wearing ladies' dresses, he is denounced in gigantic criminal cases like homicide, grabbing, subjugation, assault, unfeeling demonstrations with regular folks, and so on Truly, an unpleasant face of humans!.\n\n");
				goto a;
				 }
				  if(choice2==6)
                {

				printf("An impressive footballer at a time, he proceeded Moscow to turn into a major firearm of betting existence where cash matters. The ostensible head of Russian coordinated wrongdoing, arms managing, pirating and other infamous exercises, he once presented himself just like 'an effective financial specialist, a benefactor of expressions of the human experience, a local area laborer. That is the thing that I call myself today.'\n\n");
				goto a;
				 }
				 if (choice2 == 7)
				 {

				printf("An unmistakable money manager and multimillionaire of Rwanda, Kabuga is supposed to be the excellent blamed for the Rwandan decimation of 1994, which asserted assessed lives of 800,000 individuals. Aside from this terrible demonstration, he is likewise associated with bankrolling and different violations.\n\n");
				goto a;
				 }
				 if (choice2 == 8)
				 {

				printf("Otherwise called Tirofijo, he is the novice of FARC, a fear-based oppressor association dependent on Marxist tenet. This association is engaged with drug dealing, murder, blackmail, abducting, and different crimes. With its own military and a large number of allies, FARC's principal targets are governmental issues, financial aspects, and the military of Colombia.\n\n");
				goto a;
				 }
				 if (choice2 == 9)
				 {

				printf("A motivation of Bollywood's hidden world subject and the proprietor of D-Company, his wrongdoing period began subsequent to killing Karim Lala (Godfather of Mumbai's wrongdoing during the 1980s). Before long he turned into the fire machine of Bombay's roads. Mumbai bomb impact in March 1993 made him the kingpin. Child of a police officer, this hotshot of wrongdoing world is a significant cerebral pain for knowledge organizations.\n\n");
				goto a;
				 }
				 if (choice2 == 10)
				 {

				printf("You can get this 5'6' medication ruler (or one of the best 10 crooks of the world) in the Forbes rundown of “The World's Billionaires” however knowledge organizations are as yet scouring their hands to get him vis-à-vis. He possesses the most impressive medication corporate in Mexico. He is the following Robin Hood for his darlings as he contributes a ton to social government assistance.\n\n");
				goto a;
				 }
				else
				{
					printf("SORRY WRONG CHOICE");
				}
	case 3:
				{
				printf("There are two criminal law \n\n");
				printf("1.misdemeanors \n");
				printf("2.felonies\n");


				int choice3;
				choice3:
				printf("");
				scanf("%d", &choice3);

				if (choice3 == 1)
				{

					printf("A misdemeanor is an offense that is considered a lower level criminal offense, such as minor assaults, traffic offenses, or petty thefts. Moreover, in most states, the penalty for the misdemeanor crime is typically one year or less.\n\n\n");
					goto x;
				}
				if (choice3 == 2)
				{

					printf("In contrast, felony crimes involve more serious offenses. Some examples of felonies include murder, manslaughter, dealing drugs, rape, robbery, and arson. In virtually every state in the U.S., felonies carry a penalty of one year or more, depending upon the particular nature of the offense and the jurisdiction where the felony crime was committed. In addition, every state has a different body of criminal laws which vary from state to state. There are also federal criminal law statutes which apply to every state in the U.S.\n\n");
					goto x;
				}
				else
				{
					printf("SORRY WRONG CHOICE");
				}}

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