#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>


struct List
{
    int menu_no;
    char foodname[25];
    int quantity;
};
typedef struct List list ;
list breakfast[]={{1,"bread\t",25},{2,"egg\t",25},{3,"vegetable",20}};
list lunch[]={{1,"rice\t",25},{2,"fish\t",25},{3,"chicken",10},{4,"mutton\t",10},{5,"dal\t",10}};
list dinner[]={{1,"rice\t",25},{2,"fish\t",25},{3,"chicken",10},{4,"mutton\t",10},{5,"dal\t",10}};


struct Record
{
    int id;
    char student_name[25];

};
typedef struct Record record;
record student[]={{1,"suddip"},{2,"rusnan"},{3,"nasif"},{4,"rahin"},{5,"hafiz"}};

void printline(char c,int no);
int mainmenu();
void pass();
void order(int id);


int main()
{
    int choice,c;
    printline('*',52);
    printf("\n");
    printline('*',14);
    printf("WELCOME TO ABC DINING HALL");
    printline('*',13);
    printf("\n");
    printline('*',52);
    printf("\n");
    printf("\n");
    printf("\n");

    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("NEXT Date: %d-%d-%d", tm.tm_mday+1, tm.tm_mon+1, tm.tm_year+1900);

    mainmenu:

    choice=mainmenu();

    if(choice==1)
    {
         printline('+',52);
         pass();
          int id,menuno,q,c;
            char nam[25],f[25];

            again:
            printf("\nenter your id:");
            scanf("%d",&id);
            printf("\nenter your name:");
            scanf("%s",nam);

            if((strcmp(student[id-1].student_name,nam))==0)
            {

               order(id);

            }
           else
                    {
                        printf("\n your name and id is not correct");
                        goto again;

                    }


         goto mainmenu;

    }
    if(choice==0)
    {
        exit(0);
    }


}
void printline(char c,int no)
{
    int i;
    for(i=0;i<no;i++)
    {
        printf("%c",c);
    }
}
int mainmenu()
{
    int choice;
    printf("\n0.stop");
    printf("\n1.student\n");
    scanf("%d",&choice);
    return choice;
}
void pass()
{
   password:
            printf("\nEnter password:");
            int i;
            char pword[i],c;
            while(i<10)
                {
                    pword[i]=getch();
                    c=pword[i];
                    if(c==13) break;
                    else printf("*");
                    i++;
                 }
             pword[i]='\0';
             i=0;



            if(strcmp(pword,"pass")==0)
              {
                printf("\nyour password is correct.\n");
              }
             else
                {
                    printf("\nyour password is incorrect.\n");
                    goto password;
                }
}
void order(int id)
{
                int i,menuno,q,c;
                int p;

                printf("\n1.breakfast\t\t2.lunch\t\t3.dinner\n");
                scanf("%d",&p);

                if(p==1)
                 {

                       time_t t;
                       t = time(NULL);
                       struct tm tm = *localtime(&t);
                       printf("NEXT Date: %d-%d-%d", tm.tm_mday+1, tm.tm_mon+1, tm.tm_year+1900);
                       printf("\n Food menu of NEXT day\n");
                       printf("\t\tMENU NO\t\tFOODNAME\t\tQUANTITY\n");
                       int p=sizeof(breakfast)/sizeof(breakfast[0]);
                       for(int i=0;i<p;i++)
                       {
                         printf("\t\t %d",breakfast[i].menu_no);
                         printf("\t\t %s",breakfast[i].foodname);
                         printf("\t\t %d",breakfast[i].quantity);
                         printf("\n");

                        }
                        printf("your breakfast is confirmed");

                       }

                     if(p==2)
                      {

                       time_t t;
                       t = time(NULL);
                       struct tm tm = *localtime(&t);
                       printf("\nNEXT Date: %d-%d-%d", tm.tm_mday+1, tm.tm_mon+1, tm.tm_year+1900);
                       printf("\n Food menu of NEXT day\n");
                       printf("\t\tMENU NO\t\tFOODNAME\t\tQUANTITY\n");
                       int p=sizeof(lunch)/sizeof(lunch[0]);
                       for(int i=0;i<p;i++)
                       {
                         printf("\t\t %d",lunch[i].menu_no);
                         printf("\t\t %s",lunch[i].foodname);
                         printf("\t\t %d",lunch[i].quantity);
                         printf("\n");
                        }
                        printf("your lunch is confirmed");

                   }

                if(p==3)
                    {

                       time_t t;
                       t = time(NULL);
                       struct tm tm = *localtime(&t);
                       printf("\nNEXT Date: %d-%d-%d", tm.tm_mday+1, tm.tm_mon+1, tm.tm_year+1900);
                       printf("\nFood menu of NEXT day\n");
                       printf("\t\tMENU NO\t\tFOODNAME\t\tQUANTITY\n");
                       int p=sizeof(dinner)/sizeof(dinner[0]);
                       for(int i=0;i<4;i++)
                       {
                         printf("\t\t %d",dinner[i].menu_no);
                         printf("\t\t %s",dinner[i].foodname);
                         printf("\t\t %d",dinner[i].quantity);
                         printf("\n");
                        }

                        printf("your dinner is confirmed");

             }
}






