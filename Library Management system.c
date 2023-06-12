#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// addBook function
void printMessageCenter();
void headMessage();
void welcomeMessage();
void login();
void meinMenu();
void addBook();
void displayList();
void editBook();
void deleteBook();
void thank();

// files use for add a books

FILE *ict;
FILE *science;
FILE *physics;
FILE *engineering;
FILE *novel;

// structure for Book Details
typedef struct
{
  char book_id[200];
  char book_name[200];
  char author_name[200];
  int no_of_pages;
  int cost;
  int count;

} Book;


// other functions under addBook function
void ictf();
void sciencef();
void physicsf();
void engineeringf();
void novelf();

// other functions under addBook function
void icts();
void sciences();
void physicss();
void engineerings();
void novels();

// other functions under displayList function
void  ict_cg();
void  science_cg();
void  physics_cg();
void  engineering_cg();
void  novel_cg();
int isEmpty(char *filename);


// other functions under deleteBook function
void deleteict();
void deletescience();
void deletephysics();
void deleteengineering();
void deletenovel();


// other functions under editBook function
void ict_edit();
void science_edit();
void physics_edit();
void engineering_edit();
void novel_edit();
int Empty(char *filename);

Book book;

  int  choice;
  char book_id[200];
  char author_name[200];

  FILE *ict ;
  FILE *temp_ict;

  FILE *science ;
  FILE *temp_science;

  FILE *physics ;
  FILE *temp_physics;

  FILE *engineering ;
  FILE *temp_engineering;

  FILE *novel ;
  FILE *temp_novel;

  void clearInputBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
    }



// fonction of printMessageCenter
void printMessageCenter(const char* message)
{
    int len =0;
    int pos = 0;
    //calculate how many space need to print
    len = (78 - strlen(message))/2;
    printf("\t\t\t");
    for(pos =0 ; pos < len ; pos++)
    {
        //print space
        printf(" ");
    }
    //print message
    printf("%s",message);
}

//fonction of headmessage
void headMessage(const char *message)
{
    system("clear");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t************                                                   ************");
    printf("\n\t\t\t************      Library management System Project in C       ************");
    printf("\n\t\t\t************                                                   ************");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printMessageCenter(message);
    printf("\n\t\t\t----------------------------------------------------------------------------\n");
}


//fonction of wellcome
void welcomeMessage()
{
    headMessage("University of Ruhuna FOT");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t                            *------------------*\n");
    printf("\n\t\t\t           <*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>");
    printf("\n\t\t\t           **                                                   **");
    printf("\n\t\t\t           **                      WELCOME                      **");
    printf("\n\t\t\t           **                        TO                         **");
    printf("\n\t\t\t           **                      LIBRARY                      **");
    printf("\n\t\t\t           **                    MANAGEMENT                     **");
    printf("\n\t\t\t           **                      SYSTEM                       **");
    printf("\n\t\t\t           **                                                   **");
    printf("\n\t\t\t           <*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>");
    printf("\n\n\t\t\t                           *------------------*\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getchar();
}


//fonction of login
void login()
{
system("clear");
    char username[20];
    char password[20];
    int attempts = 3;
    int auth = 0;
    headMessage("Login");

    printf("\n\t\t\tPlease enter your username and password to log in.\n");

    while(attempts > 0 && auth == 0)
    {
        printf("\n\t\t\t\t\tUsername: ");
        scanf("%s", username);
        printf("\n\t\t\t\t\tPassword: ");
        scanf("%s", password);

        // Check username and password
        if(strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0)
        {
            printf("\n\n\n\t\t\t\t\tLogin successful. Welcome, %s.\n", username);
            printf("\n\n\n\t\t\t\t*******************thank you!*********************\n");
            auth = 1;
        }
        else
        {
            attempts--;
            printf("\n\n\n\t\t\t\t\tInvalid username or password. You have %d attempts left.\n", attempts);
             printf("\n\t\t\t\t\t Please try again later.\n");
        }
    }

    if(attempts == 0 && auth == 0)
    {

    }
}

//gihan
// addBook function for add books
// addBook function for add books
void addBook()
{
  int a;

  system("clear");

  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***************************  |SELECT CATEGOIES|  ************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

  printf("\n");
  printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t||                                             ||");
	printf("\n\t\t\t\t\t\t||         [01].ICT                            ||");
	printf("\n\t\t\t\t\t\t||         [02].SCIENCE                        ||");
	printf("\n\t\t\t\t\t\t||         [03].PHYSICS                        ||");
	printf("\n\t\t\t\t\t\t||         [04].ENGINEERING                    ||");
	printf("\n\t\t\t\t\t\t||         [05].NOVEL                          ||");
	printf("\n\t\t\t\t\t\t||         [06].EXIT                           ||");
	printf("\n\t\t\t\t\t\t||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _||");
	printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n");

  printf("\n\n\t\t\t\t\tEnter your choice from the categories : ");
	scanf("%d", &a);
	printf("\n");

  switch (a)
  {
    case 1:
           ictf();
           break;

    case 2:
           sciencef();
           break;

    case 3:
           physicsf();
           break;

    case 4:
           engineeringf();
           break;

    case 5:
           novelf();
           break;

    case 6:
          system("clear");
          printf("\n\n\n\n\t\t\t\t\t\t\t\t ********|THANK YOU|********");
          char rep;
          printf("\n\n\t\t\t\t\t\tDo you want go to the main menu..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	        printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	         scanf(" %c",&rep);
          switch(rep) {
		                case 'Y':
		                case 'y': {
			                       system("clear");
			                       meinMenu();
			                       break;
		                       }
		                case 'N':
		                case 'n': {
			                       system("clear");
			                       thank();

		                       }

		                default:
			                     printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
                           break;

	                }

          break;


    default:
           system("clear");
           printf("\n\n\t\t\t\t\tPlease enter valid choice\n\n\t\t\t\t\tPlease try again...\n");
           break;
  }



}

//ict category
void ictf()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   **********************  |Add Your Book Details Now|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  getchar();
  Book ict_book;

  printf("\n\n\t\t\t\t\tEnter the book ID : ");
  scanf("%199[^\n]", ict_book.book_id);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the book name : ");
  scanf("%199[^\n]", ict_book.book_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the author name : ");
  scanf("%199[^\n]", ict_book.author_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the number of pages : ");
  scanf("%d", &ict_book.no_of_pages);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the cost of the book : ");
  scanf("%d", &ict_book.cost);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the count of the books : ");
  scanf("%d", &ict_book.count);
  getchar(); // To consume the newline character left by scanf()

  ict = fopen("ict.txt", "a");

  fprintf(ict, " %s, %s, %s, %d, %d, %d \n", ict_book.book_id, ict_book.book_name, ict_book.author_name, ict_book.no_of_pages, ict_book.cost, ict_book.count);
  fclose(ict);

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***********************  |Book Added Successfully|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  char rep;
  printf("\n\n\t\t\t\t\t\tDo you want to add  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

  switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			ictf();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			addBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

}

//science category
void sciencef()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   **********************  |Add Your Book Details Now|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  getchar();
  Book sci_book;

  printf("\n\n\t\t\t\t\tEnter the book ID : ");
  scanf("%199[^\n]", sci_book.book_id);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the book name : ");
  scanf("%199[^\n]", sci_book.book_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the author name : ");
  scanf("%199[^\n]", sci_book.author_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the number of pages : ");
  scanf("%d", &sci_book.no_of_pages);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the cost of the book : ");
  scanf("%d", &sci_book.cost);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the count of the books : ");
  scanf("%d", &sci_book.count);
  getchar(); // To consume the newline character left by scanf()

  science = fopen("science.txt", "a");

  fprintf(science, " %s, %s, %s, %d, %d, %d \n", sci_book.book_id, sci_book.book_name, sci_book.author_name, sci_book.no_of_pages, sci_book.cost, sci_book.count);
  fclose(science);

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***********************  |Book Added Successfully|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  char rep;
  printf("\n\n\t\t\t\t\t\tDo you want to add  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

  switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			sciencef();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			addBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//physics category
void physicsf()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   **********************  |Add Your Book Details Now|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  getchar();
  Book phy_book;

  printf("\n\n\t\t\t\t\tEnter the book ID : ");
  scanf("%199[^\n]", phy_book.book_id);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the book name : ");
  scanf("%199[^\n]", phy_book.book_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the author name : ");
  scanf("%199[^\n]", phy_book.author_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the number of pages : ");
  scanf("%d", &phy_book.no_of_pages);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the cost of the book : ");
  scanf("%d", &phy_book.cost);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the count of the books : ");
  scanf("%d", &phy_book.count);
  getchar(); // To consume the newline character left by scanf()

  physics = fopen("physics.txt", "a");

  fprintf(physics, " %s, %s, %s, %d, %d, %d \n", phy_book.book_id, phy_book.book_name, phy_book.author_name, phy_book.no_of_pages, phy_book.cost, phy_book.count);
  fclose(physics);

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***********************  |Book Added Successfully|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  char rep;
  printf("\n\n\t\t\t\t\t\tDo you want to add  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

  switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			physicsf();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			addBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//engineering category
void engineeringf()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   **********************  |Add Your Book Details Now|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  getchar();
  Book eng_book;

  printf("\n\n\t\t\t\t\tEnter the book ID : ");
  scanf("%199[^\n]", eng_book.book_id);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the book name : ");
  scanf("%199[^\n]", eng_book.book_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the author name : ");
  scanf("%199[^\n]", eng_book.author_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the number of pages : ");
  scanf("%d", &eng_book.no_of_pages);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the cost of the book : ");
  scanf("%d", &eng_book.cost);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the count of the books : ");
  scanf("%d", &eng_book.count);
  getchar(); // To consume the newline character left by scanf()

  engineering = fopen("engineering.txt", "a");

  fprintf(engineering, " %s, %s, %s, %d, %d, %d \n", eng_book.book_id, eng_book.book_name, eng_book.author_name, eng_book.no_of_pages, eng_book.cost, eng_book.count);
  fclose(engineering);

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***********************  |Book Added Successfully|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  char rep;
  printf("\n\n\t\t\t\t\t\tDo you want to add  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

  switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			engineeringf();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			addBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//novel category
void novelf()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   **********************  |Add Your Book Details Now|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  getchar();
  Book nvl_book;

  printf("\n\n\t\t\t\t\tEnter the book ID : ");
  scanf("%199[^\n]", nvl_book.book_id);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the book name : ");
  scanf("%199[^\n]", nvl_book.book_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the author name : ");
  scanf("%199[^\n]", nvl_book.author_name);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the number of pages : ");
  scanf("%d", &nvl_book.no_of_pages);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the cost of the book : ");
  scanf("%d", &nvl_book.cost);
  getchar(); // To consume the newline character left by scanf()

  printf("\n\n\t\t\t\t\tEnter the count of the books : ");
  scanf("%d", &nvl_book.count);
  getchar(); // To consume the newline character left by scanf()

  novel = fopen("novel.txt", "a");

  fprintf(novel, " %s, %s, %s, %d, %d, %d \n", nvl_book.book_id, nvl_book.book_name, nvl_book.author_name, nvl_book.no_of_pages, nvl_book.cost, nvl_book.count);
  fclose(novel);

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***********************  |Book Added Successfully|  ********************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  char rep;
  printf("\n\n\t\t\t\t\t\tDo you want to add  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&rep);

  switch(rep) {
		case 'Y':
		case 'y': {
			system("clear");
			novelf();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			addBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}


//all addbook additional functions end here....!

//delete fonction start in imal

void deleteBook()
{
  int b;

  system("clear");

  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
	printf("\t\t\t\t   ***************************  |SELECT CATEGOIES TO DELETE BOOKS|  ************************** \n");
	printf("\t\t\t\t---------------------------------------------------------------------------------\n");

    printf("\n");
    printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t||                                           ||");
	printf("\n\t\t\t\t\t\t||         01.ICT                            ||");
	printf("\n\t\t\t\t\t\t||         02.SCIENCE                        ||");
	printf("\n\t\t\t\t\t\t||         03.PHYSICS                        ||");
	printf("\n\t\t\t\t\t\t||         04.ENGINEERING                    ||");
	printf("\n\t\t\t\t\t\t||         05.NOVEL                          ||");
	printf("\n\t\t\t\t\t\t||         06.EXIT                           ||");
	printf("\n\t\t\t\t\t\t||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _||");
	printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n");

  printf("\n\n\t\t\t\t\tEnter your choice from the categories : ");
	scanf("%d", &b);
	printf("\n");

  switch (b)
  {
    case 1:
           deleteict();
           break;
    case 2:
           deletescience();
           break;
    case 3:
           deletephysics();
           break;
    case 4:
           deleteengineering();
           break;
    case 5:
           deletenovel();
           break;
    case 6:
          system("clear");
          printf("\n\n\n\n\t\t\t\t\t\t\t\t ********|THANK YOU|********");
          char rep;
          printf("\n\n\t\t\t\t\t\tDo you want go to the main menu..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	        printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	         scanf(" %c",&rep);
          switch(rep) {
		                case 'Y':
		                case 'y': {
			                       system("clear");
			                       meinMenu();
			                       break;
		                       }
		                case 'N':
		                case 'n': {
			                       system("clear");
			                       thank();

		                       }

		                default:
			                     printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
                           break;

	                }

          break;

    default:
           printf("\n\n\t\t\t\t\tPlease enter valid choice\n\n\t\t\t\t\tPlease try again...\n");
           break;
  }



}

//***********************************************************************************************************************************

//displayList function for display books
void displayList()
{
  system("clear");
  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t   ***************************  |VIEW BOOK DETAILS|  ************************** \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n");

  // book category selection menu
  printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
  printf("\t\t\t\t*                        BOOK CATEGORIES                        *\n");
  printf("\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n");

	printf("\n\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n\t\t\t\t\t|                                           |");
	printf("\n\t\t\t\t\t|         01.ICT                            |");
	printf("\n\t\t\t\t\t|         02.SCIENCE                        |");
	printf("\n\t\t\t\t\t|         03.PHYSICS                        |");
	printf("\n\t\t\t\t\t|         04.ENGINEERING                    |");
	printf("\n\t\t\t\t\t|         05.NOVEL                          |");
	printf("\n\t\t\t\t\t|         06.EXIT                           |");
	printf("\n\t\t\t\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|");

    printf("\n");

  printf("\n\n\t\t\t\t\tEnter your choice from the categories : ");

  // switch case to display book details category-wise
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
    case 1:
      ict_cg();
      break;
    case 2:
      science_cg();
      break;
    case 3:
      physics_cg();
      break;
    case 4:
      engineering_cg();
      break;
    case 5:
      novel_cg();
      break;
    case 6:
      system("clear");
          printf("\n\n\n\n\t\t\t\t\t\t\t\t ********|THANK YOU|********\n\n");
          char exi;
          printf("\n\n\t\t\t\t\t\tDo you want go to the main menu..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	        printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	         scanf(" %c",&exi);
          switch(exi) {
		                case 'Y':
		                case 'y': {
			                       system("clear");
			                       meinMenu();
			                       break;
		                       }
		                case 'N':
		                case 'n': {
			                       system("clear");
			                       thank();

		                       }

		                default:
			                     printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
                           break;

	                }


      default:
      printf("\n\t\t\t\t\t\t\tInvalid Choice\n");
      break;
  }
}


int isEmpty(char *filename)
{
  FILE *file = fopen(filename, "r");
  int size;

  if (file == NULL)
  {
    return 1;
  }

  fseek(file, 0, SEEK_END);
  size = ftell(file);
  fclose(file);

  if (size == 0)
  {
    return 1;
  }

  return 0;
}

// function to display ICT books
void ict_cg()

{
    int found = 0;

    system("clear");


  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t   ***************************  |ICT BOOK DETAILS|  *************************** \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty
  if (isEmpty("ict.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in ICT category!******\n\n\n\n");


    char ex;
    printf("\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // open the file for reading
  FILE *fp = fopen("ict.txt", "r");

   // print the table header
  // find the maximum length of book ID in the file
int max_id_length = 0;
char id[20], name[50], author[50];
int pages, cost, count;

    while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    int id_length = strlen(id);
    if (id_length > max_id_length) {
        max_id_length = id_length;
    }
}

// print the table header
printf("\t\t | %-*s| %-20s| %-20s| %-10s| %-10s| %-10s| \n", max_id_length, "Book ID", "Book Name", "Author Name", "Pages", "Cost", "Count");
printf("\t\t--------------------------------------------------------------------------------------------\n");

// reset the file pointer to the beginning of the file
rewind(fp);

// read the book details from the file and print them in the table format
while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    printf("\t\t | %-*s| %-20s| %-20s| %-10d| %-10d| %-10d| \n", max_id_length, id, name, author, pages, cost, count);
}



  // close the file
  fclose(fp);

  char ex;
    printf("\n\n\n\n\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }

}




// function to display Science books
void science_cg()
{
 system("clear");


  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |SCIENCE BOOK DETAILS|  *************************** \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty
  if (isEmpty("science.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in SCIENCE category!******\n\n\n\n");


    char ex;
    printf("\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // open the file for reading
  FILE *fp = fopen("science.txt", "r");

  // find the maximum length of book ID in the file
int max_id_length = 0;
char id[20], name[50], author[50];
int pages, cost, count;

    while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    int id_length = strlen(id);
    if (id_length > max_id_length) {
        max_id_length = id_length;
    }
}

// print the table header
printf("\t\t | %-*s| %-20s| %-20s| %-10s| %-10s| %-10s| \n", max_id_length, "Book ID", "Book Name", "Author Name", "Pages", "Cost", "Count");
printf("\t\t--------------------------------------------------------------------------------------------\n");

// reset the file pointer to the beginning of the file
rewind(fp);

// read the book details from the file and print them in the table format
while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    printf("\t\t | %-*s| %-20s| %-20s| %-10d| %-10d| %-10d| \n", max_id_length, id, name, author, pages, cost, count);
}

  // close the file
  fclose(fp);



  char ex;
    printf("\n\n\n\n\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }

}




// function to display Physics books
void physics_cg()
{
 system("clear");


  printf("\t\t\t----------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |PHYSICS BOOK DETAILS|  *************************** \n");
  printf("\t\t\t----------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty
  if (isEmpty("physics.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in PHYSICS category!******\n\n\n\n");

    char ex;
    printf("\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;

  }

  // open the file for reading
  FILE *fp = fopen("physics.txt", "r");

// find the maximum length of book ID in the file
int max_id_length = 0;
char id[20], name[50], author[50];
int pages, cost, count;

    while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    int id_length = strlen(id);
    if (id_length > max_id_length) {
        max_id_length = id_length;
    }
}

// print the table header
printf("\t\t | %-*s| %-20s| %-20s| %-10s| %-10s| %-10s| \n", max_id_length, "Book ID", "Book Name", "Author Name", "Pages", "Cost", "Count");
printf("\t\t--------------------------------------------------------------------------------------------\n");

// reset the file pointer to the beginning of the file
rewind(fp);

// read the book details from the file and print them in the table format
while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    printf("\t\t | %-*s| %-20s| %-20s| %-10d| %-10d| %-10d| \n", max_id_length, id, name, author, pages, cost, count);
}

// close the file
fclose(fp);

    char ex;
    printf("\n\n\n\n\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
}






// function to display Engineering books
void engineering_cg()
{
 system("clear");


  printf("\t\t\t-----------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |ENGINEERING BOOK DETAILS|  ************************\n");
  printf("\t\t\t-----------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty
  if (isEmpty("engineering.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in ENGINEERING category!******\n\n\n\n");




  char ex;
    printf("\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;

		}

		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
	}
  return;
  }
  // open the file for reading
  FILE *fp = fopen("engineering.txt", "r");

 // find the maximum length of book ID in the file
int max_id_length = 0;
char id[20], name[50], author[50];
int pages, cost, count;

    while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    int id_length = strlen(id);
    if (id_length > max_id_length) {
        max_id_length = id_length;
    }
}

// print the table header
printf("\t\t | %-*s| %-20s| %-20s| %-10s| %-10s| %-10s| \n", max_id_length, "Book ID", "Book Name", "Author Name", "Pages", "Cost", "Count");
printf("\t\t--------------------------------------------------------------------------------------------\n");

// reset the file pointer to the beginning of the file
rewind(fp);

// read the book details from the file and print them in the table format
while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    printf("\t\t | %-*s| %-20s| %-20s| %-10d| %-10d| %-10d| \n", max_id_length, id, name, author, pages, cost, count);
}

  // close the file
  fclose(fp);

    char ex;
    printf("\n\n\n\n\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
}

// function to display Novels books
void novel_cg()
{
 system("clear");


  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t  ***************************  |NOVEL BOOK DETAILS|  *************************** \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty
  if (isEmpty("novel.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in NOVEL category!******\n\n\n\n");


    char ex;
    printf("\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // open the file for reading
  FILE *fp = fopen("novel.txt", "r");

  // find the maximum length of book ID in the file
int max_id_length = 0;
char id[20], name[50], author[50];
int pages, cost, count;

    while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    int id_length = strlen(id);
    if (id_length > max_id_length) {
        max_id_length = id_length;
    }
}

// print the table header
printf("\t\t | %-*s| %-20s| %-20s| %-10s| %-10s| %-10s| \n", max_id_length, "Book ID", "Book Name", "Author Name", "Pages", "Cost", "Count");
printf("\t\t--------------------------------------------------------------------------------------------\n");

// reset the file pointer to the beginning of the file
rewind(fp);

// read the book details from the file and print them in the table format
while (fscanf(fp, "%19[^,],%49[^,],%49[^,],%d,%d,%d\n", id, name, author, &pages, &cost, &count) == 6) {
    printf("\t\t | %-*s| %-20s| %-20s| %-10d| %-10d| %-10d| \n", max_id_length, id, name, author, pages, cost, count);
}



  // close the file
  fclose(fp);


    char ex;
    printf("\t\t\t\tDo you want to add book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo add book        --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&ex);

    switch(ex)
    {
        case 'A':
        case 'a':{
          system("clear");
          addBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;

}

// end of the displayList function

//***************************************************************************************************************************************

void editBook()
{


  system("clear");
  printf("\n\t\t\t\t\t\t--------EDIT BOOKS RECORDS--------");
  printf("\n\t\t\t**************************************************************************");

  printf("\n");
  printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
  printf("\n\t\t\t\t\t\t   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
  printf("\n\t\t\t\t\t\t||                                           ||");
  printf("\n\t\t\t\t\t\t||         01.ICT                            ||");
  printf("\n\t\t\t\t\t\t||         02.SCIENCE                        ||");
  printf("\n\t\t\t\t\t\t||         03.PHYSICS                        ||");
  printf("\n\t\t\t\t\t\t||         04.ENGINEERING                    ||");
  printf("\n\t\t\t\t\t\t||         05.NOVEL                          ||");
  printf("\n\t\t\t\t\t\t||         06.EXIT                           ||");
  printf("\n\t\t\t\t\t\t||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _||");
  printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
  printf("\n");

  printf("\n\n\t\t\t\t\tEnter your choice from the categories : ");
  scanf("%d", &choice);
  printf("\n");


  switch (choice) {

  {
    case 1:
      ict_edit();
      break;
    case 2:
      science_edit();
      break;
    case 3:
      physics_edit();
      break;
    case 4:
      engineering_edit();
      break;
    case 5:
      novel_edit();
      break;
    case 6:
      system("clear");
          printf("\n\n\n\n\t\t\t\t\t\t\t\t ********|THANK YOU|********\n\n");
          char exi;
          printf("\n\n\t\t\t\t\t\tDo you want go to the main menu..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	        printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	         scanf(" %c",&exi);
          switch(exi) {
		                case 'Y':
		                case 'y': {
			                       system("clear");
			                       meinMenu();
			                       break;
		                       }
		                case 'N':
		                case 'n': {
			                       system("clear");
			                       editBook();

		                       }

		                default:
			                     printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
                           break;

	                }


      default:
      printf("\n\t\t\t\t\t\t\tInvalid Choice\n");
      break;
  }
  }
}

int Empty(char *filename)
{
  FILE *file = fopen(filename, "r");
  int size;

  if (file == NULL)
  {
    return 1;
  }

  fseek(file, 0, SEEK_END);
  size = ftell(file);
  fclose(file);

  if (size == 0)
  {
    return 1;
  }

  return 0;
}

 // ict_edit function***********************************

 void ict_edit()
 {
    system("clear");
    char book_id[200];


  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |EDIT FOR ICT BOOK DETAILS|  ********************* \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty

  if (isEmpty("ict.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in ICT category!******\n\n\n\n");


    char sd;
    printf("\t\t\t\tDo you want to another Book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo another book    --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
        case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

// start fill read ict


      ict = fopen("ict.txt", "r");
      temp_ict = fopen("ict_temp.txt", "w");
      printf("\t\t\t\t\tEnter the book id you want to edit : ");

      getchar();
      scanf("%199[^\n]", book_id);
      //fgets(book_id,199,stdin);

      Book book_item;

    while (fscanf(ict, "%[^,], %[^,], %[^,], %d, %d, %d\n", book_item.book_id, book_item.book_name, book_item.author_name, &book_item.no_of_pages, &book_item.cost, &book_item.count) != EOF)

    {


      int value =strcmp(book_item.book_id, book_id);

      if (value == 0) {

        int found = 1;
        printf("\n\t\t\t\t\t\t ----- Enter the new book details -----  \n");
        printf("\t\t\t\t\t\t\t\tBook ID: ");
        clearInputBuffer();
        // scanf("%199[^\n] ", book.book_id);
        fgets(book_item.book_id,200,stdin);
        book_item.book_id[strcspn(book_item.book_id, "\n")] = '\0'; // remove new line character



        printf("\t\t\t\t\t\t\t\tBook Name: ");

        fgets(book_item.book_name,200,stdin);
        book_item.book_name[strcspn(book_item.book_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tAuthor Name: ");
        // scanf("%199[^\n] ", book.author_name);
        fgets(book_item.author_name,200,stdin);
        book_item.author_name[strcspn(book_item.author_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tNo. of Pages: ");
        scanf("%d", &book_item.no_of_pages);


        printf("\t\t\t\t\t\t\t\tCost: ");
        scanf("%d", &book_item.cost);


        printf("\t\t\t\t\t\t\t\tEnter the new Count: ");
        scanf("%d", &book_item.count);

        // fseek(ict, -sizeof(book), SEEK_CUR);
       fprintf(temp_ict, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);


        printf("\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t******Book details updated successfully!..*****");
        printf("\n\t\t\t\t-------------------------------------------------------------");

  } else {

       fprintf(temp_ict, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);

    }
   }

    fclose(ict);
    fclose(temp_ict);
    remove("ict.txt");
    rename("ict_temp.txt","ict.txt");


    char sd;
    printf("\n\n\n\n\t\t\t\tDo you want to edit another book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo edit another book --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
 }


  // science_edit function***********************************

void science_edit()
{
  system("clear");
  char book_id[200];




  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |EDIT FOR SCIENCE BOOK DETAILS|  ***************** \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty
  if (isEmpty("science.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in science category!******\n\n\n\n");


    char sd;
    printf("\t\t\t\tDo you want to another Book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo another book    --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // start fill read science*******************************************

      science = fopen("science.txt", "r");
      temp_science = fopen("science_temp.txt", "w");
      printf("\t\t\t\t\tEnter the book id you want to edit : ");

      getchar();
      scanf("%199[^\n]", book_id);
      //fgets(book_id,199,stdin);


    Book book_item;

    while (fscanf(science, "%[^,], %[^,], %[^,], %d, %d, %d\n", book_item.book_id, book_item.book_name, book_item.author_name, &book_item.no_of_pages, &book_item.cost, &book_item.count) != EOF)

    {


      int value =strcmp(book_item.book_id, book_id);

      if (value == 0) {

        int found = 1;
        printf("\n\t\t\t\t\t\t ----- Enter the new book details -----  \n");
        printf("\t\t\t\t\t\t\t\tBook ID: ");
        clearInputBuffer();

        fgets(book_item.book_id,200,stdin);
        book_item.book_id[strcspn(book_item.book_id, "\n")] = '\0'; // remove new line character



        printf("\t\t\t\t\t\t\t\tBook Name: ");

        fgets(book_item.book_name,200,stdin);
        book_item.book_name[strcspn(book_item.book_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tAuthor Name: ");
        fgets(book_item.author_name,200,stdin);
        book_item.author_name[strcspn(book_item.author_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tNo. of Pages: ");
        scanf("%d", &book_item.no_of_pages);


        printf("\t\t\t\t\t\t\t\tCost: ");
        scanf("%d", &book_item.cost);


        printf("\t\t\t\t\t\t\t\tEnter the new Count: ");
        scanf("%d", &book_item.count);

       fprintf(temp_science, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);


        printf("\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t******Book details updated successfully!..*****");
        printf("\t\t\t\t-------------------------------------------------------------");


  }else{

       fprintf(temp_science, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);

    }
   }

      fclose(science);
      fclose(temp_science);
      remove("science.txt");
      rename("science_temp.txt","science.txt");


    char sd;
    printf("\n\n\n\n\t\t\t\tDo you want to edit another book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo edit another book --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
}

 // END SCE




 // physics_edit function***********************************

void physics_edit(){
  system("clear");
  char book_id[200];




  printf("\n\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |EDIT FOR PHYSICS BOOK DETAILS|  ***************** \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty

  if (isEmpty("physics.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in ICT category!******\n\n\n\n");


    char sd;
    printf("\t\t\t\tDo you want to another Book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo another book    --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // start fill read physics*******************************************8




      physics = fopen("physics.txt", "r");
      temp_physics = fopen("physics_temp.txt", "w");
      printf("\t\t\t\t\tEnter the book id you want to edit : ");

      getchar();
      scanf("%199[^\n]", book_id);


   Book book_item;

    while (fscanf(physics, "%[^,], %[^,], %[^,], %d, %d, %d\n", book_item.book_id, book_item.book_name, book_item.author_name, &book_item.no_of_pages, &book_item.cost, &book_item.count) != EOF)

    {


      int value =strcmp(book_item.book_id, book_id);

      if (value == 0) {

        int found = 1;
        printf("\n****Enter the new book details***** : \n");
        printf("\t\t\t\t\t\t\t\t\t\tBook ID: ");
        clearInputBuffer();
        // scanf("%199[^\n] ", book.book_id);
        fgets(book_item.book_id,200,stdin);
        book_item.book_id[strcspn(book_item.book_id, "\n")] = '\0'; // remove new line character



        printf("\t\t\t\t\t\t\t\tBook Name: ");

        fgets(book_item.book_name,200,stdin);
        book_item.book_name[strcspn(book_item.book_name, "\n")] = '\0'; // remove new line character

        printf("Author Name: ");
        // scanf("%199[^\n] ", book.author_name);
        fgets(book_item.author_name,200,stdin);
        book_item.author_name[strcspn(book_item.author_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tNo. of Pages: ");
        scanf("%d", &book_item.no_of_pages);


        printf("\t\t\t\t\t\t\t\tCost: ");
        scanf("%d", &book_item.cost);


        printf("\t\t\t\t\t\t\t\tEnter the new Count: ");
        scanf("%d", &book_item.count);


       fprintf(temp_physics, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);


        printf("\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t******Book details updated successfully!..*****");
        printf("\t\t\t\t-------------------------------------------------------------");


  } else {

       fprintf(temp_physics, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);

    }
   }
      fclose(physics);
      fclose(temp_physics);
      remove("physics.txt");
      rename("physics_temp.txt","physics.txt");


    char sd;
    printf("\n\n\n\n\t\t\t\tDo you want to edit another book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo edit another book --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
}


//end phy

// ENG_edit function***********************************

void  engineering_edit()
{

  system("clear");
  char book_id[200];




  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |EDIT FOR ENGINEERING BOOK DETAILS|  ************* \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty

  if (isEmpty("engineering.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in ICT category!******\n\n\n\n");


    char sd;
    printf("\t\t\t\tDo you want to another Book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo another book    --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // start fill read engineering*******************************************8


      engineering= fopen("engineering.txt", "r");
      temp_engineering = fopen("engineering_temp.txt", "w");
      printf("\t\t\t\t\tEnter the book id you want to edit : ");

      getchar();
      scanf("%199[^\n]", book_id);

     Book book_item;

    while (fscanf(engineering, "%[^,], %[^,], %[^,], %d, %d, %d\n", book_item.book_id, book_item.book_name, book_item.author_name, &book_item.no_of_pages, &book_item.cost, &book_item.count) != EOF)

    {


      int value =strcmp(book_item.book_id, book_id);

      if (value == 0) {

        int found = 1;
        printf("\n***Enter the new book details*****: \n");
        printf("\t\t\t\t\t\t\t\tBook ID: ");
        clearInputBuffer();

        fgets(book_item.book_id,200,stdin);
        book_item.book_id[strcspn(book_item.book_id, "\n")] = '\0'; // remove new line character



        printf("\t\t\t\t\t\t\t\tBook Name: ");

        fgets(book_item.book_name,200,stdin);
        book_item.book_name[strcspn(book_item.book_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tAuthor Name: ");
        // scanf("%199[^\n] ", book.author_name);
        fgets(book_item.author_name,200,stdin);
        book_item.author_name[strcspn(book_item.author_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tNo. of Pages: ");
        scanf("%d", &book_item.no_of_pages);


        printf("\t\t\t\t\t\t\t\tCost: ");
        scanf("%d", &book_item.cost);


        printf("\t\t\t\t\t\t\t\tEnter the new Count: ");
        scanf("%d", &book_item.count);


       fprintf(temp_engineering, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);


        printf("\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t******Book details updated successfully!..*****");
        printf("\n\t\t\t\t-------------------------------------------------------------");


  } else {

       fprintf(temp_engineering, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);

    }
   }
      fclose(engineering);
      fclose(temp_engineering);
      remove("engineering.txt");
      rename("engineering_temp.txt","engineering.txt");


    char sd;
    printf("\n\n\n\n\t\t\t\tDo you want to edit another book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo edit another book --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
}

//END ENG

// novel_edit function***********************************

void novel_edit()
{

  system("clear");
  char book_id[200];



  printf("\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t ***************************  |EDIT FOR NOVEL BOOK DETAILS|  ******************* \n");
  printf("\t\t\t---------------------------------------------------------------------------------\n\n\n");

  // check if the file is empty

  if (isEmpty("novel.txt"))
  {
    printf("\t\t\t\t\t ******ERROR: No books found in novel category!******\n\n\n\n");


    char sd;
    printf("\t\t\t\tDo you want to another Book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo another book    --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
  }
  return;
  }

  // start fill read novel*******************************************8


      novel = fopen("novel.txt", "r");
      temp_novel = fopen("novel_temp.txt", "w");
      printf("t\t\t\t\tEnter the book id you want to edit : ");

      getchar();
      scanf("%199[^\n]", book_id);


    Book book_item;

    while (fscanf(novel, "%[^,], %[^,], %[^,], %d, %d, %d\n", book_item.book_id, book_item.book_name, book_item.author_name, &book_item.no_of_pages, &book_item.cost, &book_item.count) != EOF)

    {


      int value =strcmp(book_item.book_id, book_id);

      if (value == 0) {

        int found = 1;
        printf("\t\t\t\t\t\t\t\tEnter the new book details : \n");
        printf("\t\t\t\t\t\t\t\tBook ID: ");
        clearInputBuffer();

        fgets(book_item.book_id,200,stdin);
        book_item.book_id[strcspn(book_item.book_id, "\n")] = '\0'; // remove new line character



        printf("\t\t\t\t\t\t\t\tBook Name: ");

        fgets(book_item.book_name,200,stdin);
        book_item.book_name[strcspn(book_item.book_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tAuthor Name: ");

        fgets(book_item.author_name,200,stdin);
        book_item.author_name[strcspn(book_item.author_name, "\n")] = '\0'; // remove new line character

        printf("\t\t\t\t\t\t\t\tNo. of Pages: ");
        scanf("%d", &book_item.no_of_pages);


        printf("\t\t\t\t\t\t\t\tCost: ");
        scanf("%d", &book_item.cost);


        printf("\t\t\t\t\t\t\t\tEnter the new Count: ");
        scanf("%d", &book_item.count);


       fprintf(temp_novel, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);


        printf("\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t******Book details updated successfully!..*****");
        printf("\t\t\t\t-------------------------------------------------------------");



  } else {

       fprintf(temp_novel, "%s, %s, %s, %d, %d, %d\n", book_item.book_id, book_item.book_name,
                book_item.author_name, book_item.no_of_pages, book_item.cost, book_item.count);

    }
   }
      fclose(novel);
      fclose(temp_novel);
      remove("novel.txt");
      rename("novel_temp.txt","novel.txt");


    char sd;
    printf("\n\n\n\n\t\t\t\tDo you want to edit another book or go to main menu?\n\n");
    printf("\t\t\t\t\tTo edit another book --->   Press A\n");
    printf("\t\t\t\t\tTo go to Main menu --->   Press B\n\n");
    printf("\t\t\t\tEnter your choice:");
    scanf(" %c",&sd);

    switch(sd)
    {
        case 'A':
        case 'a':{
          system("clear");
          editBook();
          break;
    }
        case 'B':
		case 'b': {
			system("clear");
			meinMenu();
			break;
		}
		default:
		  printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
 }
  return;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void searchBook() {
  system("clear");
  int s, found = 0;
  char search_id[200], search_name[200];
  Book book;

  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |SEARCH BOOK DETAILS|   ********************** \n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

    printf("\n");
  printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n\t\t\t\t\t\t||                                             ||");
	printf("\n\t\t\t\t\t\t||         [01].ICT                            ||");
	printf("\n\t\t\t\t\t\t||         [02].SCIENCE                        ||");
	printf("\n\t\t\t\t\t\t||         [03].PHYSICS                        ||");
	printf("\n\t\t\t\t\t\t||         [04].ENGINEERING                    ||");
	printf("\n\t\t\t\t\t\t||         [05].NOVEL                          ||");
	printf("\n\t\t\t\t\t\t||         [06].EXIT                           ||");
	printf("\n\t\t\t\t\t\t||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _||");
	printf("\n\t\t\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	printf("\n");

  printf("\n\n\t\t\t\t\tEnter your choice from the categories : ");
	scanf("%d", &s);
	printf("\n");

  switch (s)
  {
    case 1:
           icts();
           break;

    case 2:
           sciences();
           break;

    case 3:
           physicss();
           break;

    case 4:
           engineerings();
           break;

    case 5:
           novels();
           break;

    case 6:
          system("clear");
          printf("\n\n\n\n\t\t\t\t\t\t\t\t ********|THANK YOU|********");
          char rep;
          printf("\n\n\t\t\t\t\t\tDo you want go to the main menu..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	        printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	         scanf(" %c",&rep);
          switch(rep) {
		                case 'Y':
		                case 'y': {
			                       system("clear");
			                       meinMenu();
			                       break;
		                       }
		                case 'N':
		                case 'n': {
			                       system("clear");
			                       thank();

		                       }

		                default:
			                     printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");
                           break;

	                }

          break;


    default:
           system("clear");
           printf("\n\n\t\t\t\t\tPlease enter valid choice\n\n\t\t\t\t\tPlease try again...\n");
           break;
  }

}
 // To consume the newline character left by scanf()

  // Search in ICT category

  void icts(){

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |SEARCH BOOK DETAILS|   ********************** \n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n\n");


  int found= 0;
  char search_id[200], search_name[200];
  Book book;

  printf("\n\n\t\t\t\t\tEnter the book ID or book name to search : ");
  getchar();
  scanf("%199[^\n]", search_id);

  ict = fopen("ict.txt", "r");
  while (fscanf(ict, " %[^,], %[^,], %[^,], %d, %d, %d \n", book.book_id,
                book.book_name, book.author_name, &book.no_of_pages, &book.cost,
                &book.count) == 6) {
    if (strcmp(book.book_id, search_id) == 0 ||
        strcmp(book.book_name, search_id) == 0) {
      found = 1;
      printf("\n\n\t\t\t\t\tBook ID : %s", book.book_id);
      printf("\n\n\t\t\t\t\tBook Name : %s", book.book_name);
      printf("\n\n\t\t\t\t\tAuthor Name : %s", book.author_name);
      printf("\n\n\t\t\t\t\tNo. of Pages : %d", book.no_of_pages);
      printf("\n\n\t\t\t\t\tCost : %d", book.cost);
      printf("\n\n\t\t\t\t\tCount : %d\n\n", book.count);
      break;
    }
  }
  if(!found){
    printf("\n \t\t\t\t\t\t\t record not found \n");
  }
  char srep;
    printf("\n\n\t\t\t\t\t\tDo you want to search  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&srep);

  switch(srep) {
		case 'Y':
		case 'y': {
			system("clear");
			icts();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			searchBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

  fclose(ict);
  }



  // Search in Science category
  void sciences(){

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |SEARCH BOOK DETAILS|   ********************** \n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n\n");

  int found= 0;
  char search_id[200], search_name[200];
  Book book;

  printf("\n\n\t\t\t\t\tEnter the book ID or book name to search : ");
  getchar();
  scanf("%199[^\n]", search_id);


  science = fopen("science.txt", "r");
  while (fscanf(science, " %[^,], %[^,], %[^,], %d, %d, %d \n", book.book_id,
                book.book_name, book.author_name, &book.no_of_pages, &book.cost,
                &book.count) == 6) {
    if (strcmp(book.book_id, search_id) == 0 ||
        strcmp(book.book_name, search_id) == 0) {
      found = 1;
      printf("\n\n\t\t\t\t\tBook ID : %s", book.book_id);
      printf("\n\n\t\t\t\t\tBook Name : %s", book.book_name);
      printf("\n\n\t\t\t\t\tAuthor Name : %s", book.author_name);
      printf("\n\n\t\t\t\t\tNo. of Pages : %d", book.no_of_pages);
      printf("\n\n\t\t\t\t\tCost : %d", book.cost);
      printf("\n\n\t\t\t\t\tCount : %d\n\n", book.count);
      break;
    }
  }

  if(!found){
    printf("\t record not found");
  }

  char srep;
    printf("\n\n\t\t\t\t\t\tDo you want to search  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&srep);

  switch(srep) {
		case 'Y':
		case 'y': {
			system("clear");
			icts();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			searchBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
  fclose(science);
  }

  // Search in Physics category
  void physicss(){

  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |SEARCH BOOK DETAILS|   ********************** \n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n\n");

  int found= 0;
  char search_id[200], search_name[200];
  Book book;

  printf("\n\n\t\t\t\t\tEnter the book ID or book name to search : ");
  getchar();
  scanf("%199[^\n]", search_id);

  physics = fopen("physics.txt", "r");
  while (fscanf(physics, " %[^,], %[^,], %[^,], %d, %d, %d \n", book.book_id,
                book.book_name, book.author_name, &book.no_of_pages, &book.cost,
                &book.count) == 6) {
    if (strcmp(book.book_id, search_id) == 0 ||
        strcmp(book.book_name, search_id) == 0) {
      found = 1;
      printf("\n\n\t\t\t\t\tBook ID : %s", book.book_id);
      printf("\n\n\t\t\t\t\tBook Name : %s", book.book_name);
      printf("\n\n\t\t\t\t\tAuthor Name : %s", book.author_name);
      printf("\n\n\t\t\t\t\tNo. of Pages : %d", book.no_of_pages);
      printf("\n\n\t\t\t\t\tCost : %d", book.cost);
      printf("\n\n\t\t\t\t\tCount : %d\n\n", book.count);
      break;
    }
  }
  if(!found){
    printf("\t record not found");
  }

  char srep;
    printf("\n\n\t\t\t\t\t\tDo you want to search  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&srep);

  switch(srep) {
		case 'Y':
		case 'y': {
			system("clear");
			icts();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			searchBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
  fclose(physics);
  }

  // Search in engineering category
  void engineerings(){

  int found= 0;
  char search_id[200], search_name[200];
  Book book;

  printf("\n\n\t\t\t\t\tEnter the book ID or book name to search : ");
  getchar();
  scanf("%199[^\n]", search_id);

  engineering = fopen("engineering.txt", "r");
  while (fscanf(engineering, " %[^,], %[^,], %[^,], %d, %d, %d \n",
                book.book_id, book.book_name, book.author_name,
                &book.no_of_pages, &book.cost, &book.count) == 6) {
    if (strcmp(book.book_id, search_id) == 0 ||
        strcmp(book.book_name, search_id) == 0) {
      found = 1;
      printf("\n\n\t\t\t\t\tBook ID : %s", book.book_id);
      printf("\n\n\t\t\t\t\tBook Name : %s", book.book_name);
      printf("\n\n\t\t\t\t\tAuthor Name : %s", book.author_name);
      printf("\n\n\t\t\t\t\tNo. of Pages : %d", book.no_of_pages);
      printf("\n\n\t\t\t\t\tCost : %d", book.cost);
      printf("\n\n\t\t\t\t\tCount : %d\n\n", book.count);
      break;
    }
  }
  if(!found){
    printf("\t record not found");
  }
  char srep;
    printf("\n\n\t\t\t\t\t\tDo you want to search  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&srep);

  switch(srep) {
		case 'Y':
		case 'y': {
			system("clear");
			icts();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			searchBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

  fclose(engineering);
  }

  // Search in novel category
  void novels(){

  int found = 0;
  char search_id[200], search_name[200];
  Book book;

  printf("\n\n\t\t\t\t\tEnter the book ID or book name to search : ");
  getchar();
  scanf("%199[^\n]", search_id);

  novel = fopen("novel.txt", "r");
  while (fscanf(novel, " %[^,], %[^,], %[^,], %d, %d, %d \n", book.book_id,
                book.book_name, book.author_name, &book.no_of_pages, &book.cost,
                &book.count) == 6) {
    if (strcmp(book.book_id, search_id) == 0 ||
        strcmp(book.book_name, search_id) == 0) {
      found = 1;
      printf("\n\n\t\t\t\t\tBook ID : %s", book.book_id);
      printf("\n\n\t\t\t\t\tBook Name : %s", book.book_name);
      printf("\n\n\t\t\t\t\tAuthor Name : %s", book.author_name);
      printf("\n\n\t\t\t\t\tNo. of Pages : %d", book.no_of_pages);
      printf("\n\n\t\t\t\t\tCost : %d", book.cost);
      printf("\n\n\t\t\t\t\tCount : %d\n\n", book.count);
      break;
    }
  }

  if(!found){
    printf("\t record not found");
  }

  char srep;
    printf("\n\n\t\t\t\t\t\tDo you want to search  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&srep);

  switch(srep) {
		case 'Y':
		case 'y': {
			system("clear");
			icts();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			searchBook();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

  fclose(novel);
  }


//***********************************************************************************************************************************

//ict category
void deleteict()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |Delete book here|  ********************** \n\n");
  printf("\t\t\t\t--------------------- - - - - - - ICT - - - - - - - - ----------------------------\n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  //getchar();
  //Book ict_book;

  char id1[200];
  char book_id[200];
  char book_name[200];
  char author_name[200];
  int no_of_pages;
  int cost;
  int count;

  printf("\n\n\t\t\t\t\tWhich record do you want to delete ");
  printf("\n\n\t\t\t\t\tEnter id of that record [ICT]:-");
  scanf("%s",id1);
  getchar();





  FILE *ict = fopen("ict.txt", "r");
  FILE *temp = fopen("temp.txt", "w");

  while(fscanf(ict, "%[^,], %[^,], %[^,], %d, %d, %d \n", book_id, book_name, author_name, &no_of_pages, &cost, &count) != EOF){
    if(strcmp(book_id, id1) != 0){
        fprintf(temp, "%s, %s, %s, %d, %d, %d \n", book_id, book_name, author_name, no_of_pages, cost, count);
    }
  }
  fclose(ict);
  fclose(temp);
  remove("ict.txt");
  rename("temp.txt","ict.txt");


  char drep;
  printf("\n\n\t\t\t\t\t\tBook Deleted successfully");
  printf("\n\n\t\t\t\t\t\tDo you want to Delete  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&drep);

  switch(drep) {
		case 'Y':
		case 'y': {
			system("clear");
			deleteict();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			meinMenu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

}



//science category
void deletescience()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |Delete book here|  ********************** \n\n");
  printf("\t\t\t\t--------------------- - - - - - - SCIENCE - - - - - - - - ----------------------------\n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  //getchar();
  //Book ict_book;

  char id1[200];
  char book_id[200];
  char book_name[200];
  char author_name[200];
  int no_of_pages;
  int cost;
  int count;

  printf("\n\n\t\t\t\t\tWhich record do you want to delete ");
  printf("\n\n\t\t\t\t\tEnter id of that record [SCIENCE]:-");
  scanf("%s",id1);
  getchar();




  FILE *science = fopen("science.txt", "r");
  FILE *temp = fopen("temp.txt", "w");

  while(fscanf(science, "%[^,], %[^,], %[^,], %d, %d, %d \n", book_id, book_name, author_name, &no_of_pages, &cost, &count) != EOF){
    if(strcmp(book_id, id1) != 0){
        fprintf(temp, "%s, %s, %s, %d, %d, %d \n", book_id, book_name, author_name, no_of_pages, cost, count);
    }
  }
  fclose(science);
  fclose(temp);
  remove("science.txt");
  rename("temp.txt","science.txt");

  char drep;
  printf("\n\n\t\t\t\t\t\tBook Deleted successfully");
  printf("\n\n\t\t\t\t\t\tDo you want to Delete  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&drep);

  switch(drep) {
		case 'Y':
		case 'y': {
			system("clear");
			deletescience();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			meinMenu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}

}


//physics category
void deletephysics()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |Delete book here|  ********************** \n\n");
  printf("\t\t\t\t--------------------- - - - - - -PHYSICS - - - - - - - - ----------------------------\n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  //getchar();
  //Book ict_book;

  char id1[200];
  char book_id[200];
  char book_name[200];
  char author_name[200];
  int no_of_pages;
  int cost;
  int count;

  printf("\n\n\t\t\t\t\tWhich record do you want to delete ");
  printf("\n\n\t\t\t\t\tEnter id of that record [PHYSICS]:-");
  scanf("%s",id1);
  getchar();





  FILE *physics = fopen("physics.txt", "r");
  FILE *temp = fopen("temp.txt", "w");

  while(fscanf(physics, "%[^,], %[^,], %[^,], %d, %d, %d \n", book_id, book_name, author_name, &no_of_pages, &cost, &count) != EOF){
    if(strcmp(book_id, id1) != 0){
        fprintf(temp, "%s, %s, %s, %d, %d, %d \n", book_id, book_name, author_name, no_of_pages, cost, count);
    }
  }
  fclose(physics);
  fclose(temp);
  remove("physics.txt");
  rename("temp.txt","physics.txt");

  char drep;
  printf("\n\n\t\t\t\t\t\tBook Deleted successfully");
  printf("\n\n\t\t\t\t\t\tDo you want to Delete  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&drep);

  switch(drep) {
		case 'Y':
		case 'y': {
			system("clear");
			deletephysics();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			meinMenu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}



//ENGINEERING category
void deleteengineering()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   ************************    |Delete book here|  ********************** \n\n");
  printf("\t\t\t\t--------------------- - - - - - -ENGINEERING - - - - - - - - ----------------------------\n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  //getchar();
  //Book ict_book;

  char id1[200];
  char book_id[200];
  char book_name[200];
  char author_name[200];
  int no_of_pages;
  int cost;
  int count;

  printf("\n\n\t\t\t\t\tWhich record do you want to delete ");
  printf("\n\n\t\t\t\t\tEnter id of that record [ENGINEERING]:-");
  scanf("%s",id1);
  getchar();





  FILE *eengineering = fopen("eengineering.txt", "r");
  FILE *temp = fopen("temp.txt", "w");

  while(fscanf(eengineering, "%[^,], %[^,], %[^,], %d, %d, %d \n", book_id, book_name, author_name, &no_of_pages, &cost, &count) != EOF){
    if(strcmp(book_id, id1) != 0){
        fprintf(temp, "%s, %s, %s, %d, %d, %d \n", book_id, book_name, author_name, no_of_pages, cost, count);
    }
  }
  fclose(eengineering);
  fclose(temp);
  remove("eengineering.txt");
  rename("temp.txt","eengineering.txt");

  char drep;
  printf("\n\n\t\t\t\t\t\tBook Deleted successfully");
  printf("\n\n\t\t\t\t\t\tDo you want to Delete  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice :");
	scanf(" %c",&drep);

  switch(drep) {
		case 'Y':
		case 'y': {
			system("clear");
			deleteengineering();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			meinMenu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}

//NOVEL category
void deletenovel()
{
  system("clear");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\t\t\t\t   **********************  |Delete book here|  ********************** \n\n");
  printf("\t\t\t\t--------------------- - - - - - -NOVEL - - - - - - - - ----------------------------\n");
  printf("\t\t\t\t---------------------------------------------------------------------------------\n");
  printf("\n");

  //getchar();
  //Book ict_book;

  char id1[200];
  char book_id[200];
  char book_name[200];
  char author_name[200];
  int no_of_pages;
  int cost;
  int count;

  printf("\n\n\t\t\t\t\tWhich record do you want to delete ");
  printf("\n\n\t\t\t\t\tEnter id of that record [NOVEL] :-");
  scanf("%s",id1);
  getchar();





  FILE *novel = fopen("novel.txt", "r");
  FILE *temp = fopen("temp.txt", "w");

  while(fscanf(novel, "%[^,], %[^,], %[^,], %d, %d, %d \n", book_id, book_name, author_name, &no_of_pages, &cost, &count) != EOF){
    if(strcmp(book_id, id1) != 0){
        fprintf(temp, "%s, %s, %s, %d, %d, %d \n", book_id, book_name, author_name, no_of_pages, cost, count);
    }
  }
  fclose(novel);
  fclose(temp);
  remove("novel.txt");
  rename("temp.txt","novel.txt");

  char drep;
  printf("\n\n\t\t\t\t\t\tBook Deleted successfully");
  printf("\n\n\t\t\t\t\t\tDo you want to Delete  Another one..? \n\n\t\t\t\t\t\t\tYes--> Press Y \n\t\t\t\t\t\t\tNo--> Press N");
	printf("\n\n\t\t\t\t\t\tEnter Your choice  : Yes or No");
	scanf(" %c",&drep);

  switch(drep) {
		case 'Y':
		case 'y': {
			system("clear");
			deletenovel();
			break;
		}
		case 'N':
		case 'n': {
			system("clear");
			meinMenu();
			break;
		}
		default:
			printf("\n\t\t\t\t\t\t\t\tInvalid Input..!");

	}
}


//fonction of thanks
void thank()
{
  system("clear");
			printf("\n\n\n\n\t\t\t\t\t\t\t\t <<<<<< THANK YOU >>>>>>");
			printf("\n\t\t\t\t\t\t                  FOR USING OUR SERVICE");
			printf("\n\n\n");
			printf("\t\t\t\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
			printf("\t\t\t\t<>                                                                                  <>\n");
			printf("\t\t\t\t<>  ** ** ** ** **  **       **      **      **        **  **     **   ** ** **     <>\n");
			printf("\t\t\t\t<>  ** ** ** ** **  **       **   **    **   ** **     **  **   **   **             <>\n");
			printf("\t\t\t\t<>        **        **       **  **      **  **  **    **  ** **      **            <>\n");
			printf("\t\t\t\t<>        **        ** ** ** **  ** **** **  **   **   **  ***          **** **     <>\n");
			printf("\t\t\t\t<>        **        **       **  **      **  **    **  **  ** **              **    <>\n");
			printf("\t\t\t\t<>        **        **       **  **      **  **     ** **  **   **             **   <>\n");
			printf("\t\t\t\t<>        **        **       **  **      **  **        **  **     **   ** ** **     <>\n");
			printf("\t\t\t\t<>                                                                                  <>\n");
			printf("\t\t\t\t<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
			printf("\n\n\n");
			exit(0);

}


void meinMenu()
{
 system("clear");

    //printf("\n\t\t\t<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>\n");
    //printf("\t\t\t                          ****** MAIN MENU******"                               );
   // printf("\n\t\t\t<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>.<*>\n\n\n");

    int i;
      headMessage(" ****** MAIN MENU****** ");
    printf("\n\t\t\t\t\t  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=  ");
    printf("\n\t\t\t\t\t  ==		01. ADD BOOK                      ==  ");
    printf("\n\t\t\t\t\t  ==		02. DISPLAY BOOK LIST             ==  ");
    printf("\n\t\t\t\t\t  ==		03. SEARCH BOOK                   ==  ");
    printf("\n\t\t\t\t\t  ==		04. EDIT BOOK                     ==  ");
    printf("\n\t\t\t\t\t  ==		05. DELETE BOOK                   ==  ");
    printf("\n\t\t\t\t\t  ==		06. EXIT                          ==  ");
    printf("\n\t\t\t\t\t  *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=  ");

    printf("\n\n\t\t\t\t\tEnter your choice from the main menu(ex-1) : ");
    scanf("%d", &i);

    printf("\n");

    switch (i)
  {
    case 1:
           addBook();
           break;

    case 2:
           displayList();
           break;

    case 3:
           searchBook();
           break;

    case 4:
           editBook();
           break;

    case 5:
          deleteBook();
           break;

     case 6:
           thank();
           break;
    default:
           //system("clear");
           printf("\n\n\t\t\t\t\tinvalid number. Please try again...\n");
           break;

   }
 }


int main()
{
    welcomeMessage();
    login();
    meinMenu();


return 0;
}
