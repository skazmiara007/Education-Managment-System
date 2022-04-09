#include<stdio.h>
#include<string.h>
#define max 40
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

struct student
{
    char name[40];
    char acronym[15];
    int established;
    char location[30];
    char physicaladd[80];
    char virtualadd[40];
    char email[30];
    char number[20];
    char fax[20];
    char admission[80];
    int n;
};
void frontpage()
{
    printf("\n    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n    @                                                 @");
    printf("\n    @          EDUCATION QUALIFICATION                @");
    printf("\n    @                                                 @");
    printf("\n    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    printf("\n");
    printf("\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
    printf("..........The best way to find what is\n        The best option for your higher education\n\n\n\n");
}
void MainMenu()
{
    int option;
    printf("\n ***** Select A Option ******\n");
    printf("\n   ...1 _ ADMIN lOG IN");
    printf("\n   ...2 _ USER lOG LN");
    printf("\n   ...3 _ OUTFLOW\n");
    printf("\n     ENTER Choice : ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: ADMINLOG();
        break;
        case 2: USERLOG();
        break;
        case 3: OUTFLOW();
        break;
    }
}
void ADMINLOG()
{
    printf(".........i still not work............\n");
}
void USERLOG()
{
    char ch,firstname[max],lastname[max],newusername[max],username[max],location[max],newpassword[max],password[max];
    int ncompare,pcompare,num,i=0;
    printf("\nCreate Your New Account..........");
    printf("\n\n   First Name :");
    fflush(stdin);
    gets(newusername);
    printf("\n   Last Name :");
    gets(lastname);
    printf("\n   Username :");
    gets(newusername);
    printf("\n   Location :");
    gets(location);
    printf("\n   new password :");
    gets(newpassword);
    printf("\n   Mobile Number:");
    scanf("%d",&num);
    printf("verification successful...............\n\nnow You Log in :\n");
    printf("\n   Username:");
    fflush(stdin);
    gets(username);
    printf("\n   password :");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            password[i]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(ch==TAB || ch==SPACE)
        {
            continue;
        }
        else
        {
            password[i]=ch;
            i++;
            printf("*");
        }
    }
    ncompare=strcmp(newusername,username);
    pcompare=strcmp(newpassword,password);

   if ((ncompare==0)&& (pcompare==0))
        {
           EDUCATION();
        }
   else
    printf("\n\n   not match");
}
void OUTFLOW()
{
    printf("nothing work\n");
}
void EDUCATION()
{
    int opt;
    printf("\n    +==============================+");
    printf("\n    +                              +");
    printf("\n    +         EDUCATION            +");
    printf("\n    +                              +");
    printf("\n    +==============================+");
    printf("\n.........what you want to do : \n");
    printf("\n...... 1 ___ UNIVERSITY QUALIFICATION!!!");
    printf("\n...... 2 ___ UNIVERSITY DETAILS!!!\n");
    printf("\n    ENTER CHOICE :");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:UNI_QUALIFICATION();
        break;
        case 2:UNI_DETAILS();
        break;
    }

}
void UNI_QUALIFICATION()
{
    int opt;
    printf("\n...... 1 ___ ENGINEERING!");
    printf("\n...... 2 ___ MEDICAL!");
    printf("\n...... 3 ___ DIPLOMA!\n");
    printf("\n    ENTER CHOICE :");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:ENGINEERING();
        break;
        case 2:MEDICAL();
        break;
        case 3:DIPLOMA();
        break;
    }

}

void ENGINEERING()
{
    int opt;
    printf("\nwhat you want !!! ");
    printf("\n   ..... 1 --- CSE\n   ..... 2 --- EEE\n   ..... 3 --- ARCHITECTURE\n   ..... 4 --- CIVIL\n   ..... 5 ---TEXTILE");
    printf("\n   Enter choice: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:CSE();
        break;
        case 2:printf("EEE");
        break;
        case 3:printf("\nARCHITECTURE");
        break;
        case 4:printf("\nCIVIL");
        break;
        case 5:printf("\nTEXTILE()");
        break;
    }
}
void CSE()
{
    int opt;
    float ssc,hsc,total;
    printf("\n   ......... top 10 UNIVERSITY........\n");

    printf("\n   Enter SSC Gpa :");
    scanf("%f",&ssc);
    printf("\n   Enter HSC GPA: ");
    fflush(stdin);
    scanf("%f",&hsc);
    total=ssc+hsc;
    printf("Total is %f",total);
    if((total>=7) && (total<=8))
    {
        printf("\n   ..... 1 --- PUBLIC\n ...... 2 --- PRIVATE");
        printf("\n   Enter choice:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:CSE_PUBLIC();
            break;
            case 2:CSE_PRIVATE();
            break;
        }
    }
}
void CSE_PUBLIC()
{
    int opt;
    printf("\n   ......... 1 --- DU\n   ......... 2 --- JNU\n   ......... 3 --- JU\n   ......... 4 --- COM\n");
    printf("\n   Enter choice:");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:printf("\n   welcome DU");
        break;
        case 2:printf("\n   welcome JNU");
        break;
        case 3:printf("\n   welcome JU");
        break;
        case 4:printf("\n   welcome COM");
        break;
    }
}
void CSE_PRIVATE()
{
    int opt;
    printf("\nwhat you want !!! ");
    printf("\n   ......... 1 --- fail\n   ......... 2 --- pass\n   ......... 3 --- retake\n   ......... 4 --- bash\n");
    printf("\nEnter choice: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:printf("\nyou failed");
        break;
        case 2:printf("\nyou passed");
        break;
        case 3:printf("\n retake");
        break;
        case 4:printf("\n bash");
        break;
    }
}
void MEDICAL()
{
     int opt;
    float ssc,hsc,total;
    printf("\n   ......... top 10 MEDICAL COLLEGE........\n");

    printf("\n   Enter SSC Gpa :");
    scanf("%f",&ssc);
    printf("\n   Enter HSC GPA: ");
    fflush(stdin);
    scanf("%f",&hsc);
    total=ssc+hsc;
    printf("Total is %f",total);
    if((total>=7) && (total<=8))
    {
        printf("\n   ..... 1 --- PUBLIC\n ...... 2 --- PRIVATE");
        printf("\n   Enter choice:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:MEDICAL_PUBLIC();
            break;
            case 2:MEDICAL_PRIVATE();
            break;
        }
    }
}
void MEDICAL_PUBLIC()
{
    printf("\n  .....IF you want study private medical ,,you must need to pass admission test.....");
}
void MEDICAL_PRIVATE()
{
    printf("\n.....if you passed medical adimission test,,then you apply in private medical....");
}
void DIPLOMA()
{
    printf("......welcome diploma...........");
}
void UNI_DETAILS()
{
    struct student p[5];
    Address(p,5);
}
void Address(struct student p[],int size)
{
    strcpy(p[0].name,"DHAKA UNIVERSITY");
    strcpy(p[0].acronym,"DU");
    p[0].established=1921;
    strcpy(p[0].location,"Dhaka,Bangladesh");
    strcpy(p[0].physicaladd,"Registrar Building, Nilkhet Road, 1000, Dhaka, Bangladesh");
    strcpy(p[0].virtualadd,"www.univdhaka.edu");
    strcpy(p[0].email,"info@univdhaka.edu");
    strcpy(p[0].number,"+8801633993843");
    strcpy(p[0].fax,"+88028615583");
    strcpy(p[0].admission,"http://admission.eis.du.ac.bd/index.php?act=information/index");
    p[0].n=1;

    strcpy(p[1].name,"BRAC UNIVERSITY");
    strcpy(p[1].acronym,"BRACU");
    p[1].established=2001;
    strcpy(p[1].location,"Dhaka,Bangladesh");
    strcpy(p[1].physicaladd,"66 mohakhali, Dhaka, Bangladesh");
    strcpy(p[1].virtualadd,"www.bracu.ac.bd");
    strcpy(p[1].email,"info@bracu.ac.bd");
    strcpy(p[1].number,"+880288240");
    strcpy(p[1].fax,"+880288103");
    strcpy(p[1].admission,"http://www.bracu.ac.bd/admissions");
    p[1].n=2;

    strcpy(p[2].name,"NORTH SOUTH UNIVERSITY");
    strcpy(p[2].acronym,"NSU");
    p[2].established=1993;
    strcpy(p[2].location,"Dhaka-1229,Bangladesh");
    strcpy(p[2].physicaladd,"Plot#15,Block#B,Bashundhara R//A,Dhaka-1229,Bangladesh");
    strcpy(p[2].virtualadd,"www.northsouth.edu");
    strcpy(p[2].email,"registrar@northsouth.edu");
    strcpy(p[2].number,"+880255668200");
    strcpy(p[2].fax,"+880255668202");
    strcpy(p[2].admission,"http://apply.northsouth.edu:8080/admissionWeb/index.jsp");
    p[2].n=3;


    strcpy(p[3].name,"AHSANULLAH UNIVERSITY OF SCIENCE AND TECHNOLOGY");
    strcpy(p[3].acronym,"AUST");
    p[3].established=1995;
    strcpy(p[3].location,"Dhaka-1208,Bangladesh");
    strcpy(p[3].physicaladd,"141&142,Love Road,Tejgaon industrial Area,Dhaka-1208,Bangladesh");
    strcpy(p[3].virtualadd,"www.aust.edu");
    strcpy(p[3].email,"regr@aust.edu");
    strcpy(p[3].number,"+88028870418");
    strcpy(p[3].fax,"+8808870417");
    strcpy(p[3].admission,"http://www.aust.edu/admission.html");
    p[3].n=4;


    strcpy(p[4].name,"AMERICAN INTERNATIONAL UNIVERSITY OF BANGLADESH");
    strcpy(p[4].acronym,"AIUB");
    p[4].established=1994;
    strcpy(p[4].location,"Dhaka-1213,Bangladesh");
    strcpy(p[4].physicaladd,"#83/B,Road#4,Kermal Ataturk Avenue,Banani,Dhaka-1213,Bangladesh");
    strcpy(p[4].virtualadd,"www.aiub.edu");
    strcpy(p[4].email,"info@aiub.edu");
    strcpy(p[4].number,"+8802989870415");
    strcpy(p[4].fax,"+88028813233");
    strcpy(p[4].admission,"http://www.aiub.edu/admission");
    p[4].n=5;

    int i,num;

    printf("\n   ..... 1 ____ DHAKA UNIVERSITY\n   ..... 2 ____ BRAC UNIVERSITY\n ..... 3 ____ NORTH SOUTH UNIVERSITY");
    printf("\n   ..... 4 ____ AHSANULLAH UNIVERSITY OF SCIENCE AND TECHNOLOGY\n ..... 5 __ AMERICAN INTERNATIONAL UNIVERSITY OF BANGLADESH");
    printf("\n     Choice a number : ");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(num==p[i].n)
        {
            printf("\n  FULL name : ");
            puts(p[i].name);
            printf("\n  ACRONAME: ");
            puts(p[i].acronym);
            printf("\n  ESTABLISHED : %d",p[i].established);
            printf("\n  LocaTion :");
            puts(p[i].location);
            printf("\n  PhysicalAddress : ");
            puts(p[i].physicaladd);
            printf("\n  VirtualAddress : ");
            puts(p[i].virtualadd);
            printf("\n  Email : ");
            puts(p[i].email);
            printf("\n  Phone Number : ");
            puts(p[i].number);
            printf("\n  FAX : ");
            puts(p[i].fax);
            printf("\n  Addmission INFO Link: ");
            puts(p[i].admission);
        }
    }
}
int main()
{

    frontpage();
    MainMenu();
    return 0;
}
