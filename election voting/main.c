#include<stdio.h>

#define CANDIDATE_COUNT

#define NOMINEE1 "Walter White"
#define NOMINEE2 "Jesse"
#define NOMINEE3 "Jon Snow"
#define NOMINEE4 "Tyrion"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

void castVote(){
int choice;
printf("\n\n ***** Please choose your Candidate *****\n\n");
printf("\n 1. %s", NOMINEE1);
printf("\n 2. %s", NOMINEE2);
printf("\n 3. %s", NOMINEE3);
printf("\n 4. %s", NOMINEE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice from 1 to 4 : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n !xxx Error: Wrong Choice !! Please retry xxx!");

}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n ***** Voting Results *****");
printf("\n %s - %d ", NOMINEE1, votesCount1);
printf("\n %s - %d ", NOMINEE2, votesCount2);
printf("\n %s - %d ", NOMINEE3, votesCount3);
printf("\n %s - %d ", NOMINEE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes);
}

void getLeadingCandidate(){
    printf("\n\n  ***** Leading Candiate *****\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("%s",NOMINEE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("%s",NOMINEE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("%s",NOMINEE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("%s",NOMINEE4);
    else
    printf("----- Warning !!! No-win situation----");



}

int main()
{
int i;
int choice;

do{
printf("\n\n ***** Welcome to  Online Election/Voting 2022 *****");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);


return 0;
}

