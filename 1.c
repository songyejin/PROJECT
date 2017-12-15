#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title(void);
void content(void);
void choose();
void map_explanation(void);
void map_practice(void);

void map_chapter2_p(void);
void map_chapter4_p(void);
void map_chapter4_pp(void);

void chapter1_e1(void);
void chapter1_e2(void);
void chapter1_e3(void);
void chapter1_p3(void);
void chapter1_r3(void);
void chapter1_r4(void);

void chapter2_e(void);
void chapter2_p(void);

void chapter3_e1(void);
void chapter3_e2(void);
void chapter3_e3(void);
void chapter3_p3(void);

void chapter4_e(void);
void chapter4_p(void);

void chapter5_e1(void);
void chapter5_e2(void);
void chapter5_e3(void);
void chapter5_e4(void);
void chapter5_e5(void);
void chapter5_p4(void);

int x=5;
int y=5;

int ch1;
int ch2;
int ch3;
int ch4;
int ch5;

void gotoxy(int x, int y)            // gotoxy 함수 구현
{
    printf("\033[%d;%df", y, x);
    fflush(stdout);
}

int main(void)
{
    system("clear");                 // 화면지우기
    title();
    system("clear");
    content();

    return 0;
}

void title(void)       // 타이틀함수 구현
{
    char ch;

    gotoxy(x,y); printf(" @@@@@    @@@@@   @@@@  @@@@   @@@  @@@@     @    @     @ @     @ @@@@@ @    @  @@@");
    gotoxy(x,y+1); printf("@         @   @  @   @ @    @ @     @   @   @ @   @@   @@ @@   @@   @   @@   @ @");
    gotoxy(x,y+2); printf("@         @@@@   @@@@  @    @ @  @@ @@@@@  @@@@@  @  @  @ @  @  @   @   @  @ @ @  @@");
    gotoxy(x,y+3); printf("@         @      @  @  @    @ @   @ @  @   @   @  @     @ @     @   @   @    @ @   @");
    gotoxy(x,y+4); printf(" @@@@@    @      @   @  @@@@   @@@  @   @ @     @ @     @ @     @ @@@@@ @    @  @@@");
    gotoxy(x+80,y+5); printf("For beginners");
    gotoxy(x,y+8); printf("START(Please Enter 'enter' key to Start..)");

    scanf("%c", &ch); 

}

void content(void)  
{
    int sel;

    while(1)
    {

        printf("==============CONTENT===============\n");
        printf("chapter1(%d %%)\n", ch1);
        printf("chapter2(%d %%)\n", ch2);
        printf("chapter3(%d %%)\n", ch3);
        printf("chapter4(%d %%)\n", ch4);
        printf("chapter5(%d %%)\n", ch5);
        printf("\n\n");
        printf("Please press the chapter number you wish to study(finish key is '6') : ");
        scanf("%d", &sel);
        if(sel==6)
            break;
        system("clear");
        map_explanation();
        switch(sel)
        {
            case 1:
                chapter1_e1();
                system("clear");
                map_explanation();
                chapter1_e2();
                system("clear");
                map_explanation();
                chapter1_e3();
                system("clear");
                map_practice();
                chapter1_p3();
                chapter1_r3();
                chapter1_r4();

                ch1=ch1/6*100;
                if(ch1>=100)
                    ch1=100;
                break;
            case 2:
                chapter2_e();
                system("clear");
                map_practice();
                chapter2_p();

                ch2=ch2/9*100;
                if(ch2>=100)
                    ch2=100;
                system("clear");
                break;
            case 3:
                chapter3_e1();
                system("clear");
                map_explanation();
                chapter3_e2();
                system("clear");
                map_explanation();
                chapter3_e3();
                system("clear");
                map_practice();
                chapter3_p3();

                ch3=ch3/4*100;
                if(ch3>=100)
                    ch3==100;
                break;
            case 4:
                chapter4_e();
                system("clear");
                map_practice();
                chapter4_p();

                ch4=ch4/12*100;
                if(ch4>=100)
                    ch4=100;
                break;
            case 5:
                chapter5_e1();
                system("clear");
                map_explanation();
                chapter5_e2();
                system("clear");
                map_explanation();
                chapter5_e3();
                system("clear");
                map_explanation();
                chapter5_e4();
                system("clear");
                map_explanation();
                chapter5_e5();
                system("clear");
                map_practice();
                chapter5_p4();

                ch5=ch5/6*100;
                if(ch5>=100)
                    ch5=100;
                break;
            default:
                system("clear");

                printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
        }
    }

}


void map_explanation(void)
{
    int i;

    for(i=x; i<150; i++)
    {
        gotoxy(i,y); printf("#");
        gotoxy(i,y+25); printf("#");
    }
    for(i=x; i<=y+25; i++)
    {
        gotoxy(x, i); printf("#");
        gotoxy(150, i); printf("#");
    }

    gotoxy(115,28); printf(" NEXT(press '1') =>");
}

void map_practice(void)
{
    int i;

    gotoxy(x, y); printf("LET's PRACTICE");

    for(i=x;i<100;i++)
    {
        gotoxy(i, y+1); printf("*");
        gotoxy(i, y+25); printf("*");
    }
}

void map_chapter2_p(void)
{
    int i;

    for(i=x;i<46;i++)
    {
        gotoxy(i+2,y+4);printf("-");
        gotoxy(i+2,y+17);printf("-");
    }
    gotoxy(x+2, y+5); printf("l                                       l");
    gotoxy(x+2, y+6); printf("l                                       l");
    gotoxy(x+2, y+7); printf("l                                       l");
    gotoxy(x+2, y+8); printf("l                                       l");
    gotoxy(x+2, y+9); printf("l                                       l");
    gotoxy(x+2, y+10); printf("l                                       l");
    gotoxy(x+2, y+11); printf("l                                       l");
    gotoxy(x+2, y+12); printf("l                                       l");
    gotoxy(x+2, y+13); printf("l                                       l");
    gotoxy(x+2, y+14); printf("l                                       l");
    gotoxy(x+2, y+15); printf("l                                       l");
    gotoxy(x+2, y+16); printf("l                                       l");
}

void map_chapter4_pp(void)
{
    int i;
    gotoxy(x+2,y+4); printf("----------------------------------------------------------------");
    for(i=y;i<10;i++)
    {
        gotoxy(x+2,i+5); printf("l                                                              l");
    }
    gotoxy(x+2,y+10); printf("----------------------------------------------------------------");
}


void chapter1_e1(void)      //(1)chapter1 설명1
{ 
    int s;

    gotoxy(x+2,y+1); printf("CHAPTER1. C PROGRAMMING");
    gotoxy(x+2,y+2); printf("1.1 THIS IS C LANGUAGE");
    gotoxy(x+2,y+3); printf("C Language is a programming language. And the programming language is a communication medium used to communicate with computers.");
    gotoxy(x+2,y+4); printf("*What is a programming language?");
    gotoxy(x+2,y+5); printf("It means the promised language that humans and compilers can understand.");
    gotoxy(x+2,y+6); printf("*What is the role of the compiler?");
    gotoxy(x+2,y+7); printf("It translates programs written in programming languages into machine language so that the computer can understand them.");
    gotoxy(x+2,y+8); printf("In addition, the translation itself is called compilation.");
    gotoxy(x+2,y+10); printf("Advantages of C language");
    gotoxy(x+2,y+11); printf("1.The c language has process-oriented characteristics. It does not take long to get used to it.");
    gotoxy(x+2,y+12); printf("2.Programs written in the c language are portable.");
    gotoxy(x+2,y+13); printf("3.Programs implemented in the c language show good performance.");
    gotoxy(x+130,y+23); 
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }

    ch1++;
} 

void chapter1_e2(void)       //(2)chapter1 설명2
{
    int s;

    gotoxy(x+2,y+3); printf("1.2 Completion process of C program");
    gotoxy(x+2,y+4); printf("Overall understanding of C program completion process");
    gotoxy(x+2,y+5); printf("                  1.programming");
    gotoxy(x+2,y+6); printf("                       l");
    gotoxy(x+2,y+7); printf("                       V");
    gotoxy(x+2,y+8); printf("    --------->    2.compile");
    gotoxy(x+2,y+9); printf("   l                   l");
    gotoxy(x+2,y+10); printf("   l                   V");
    gotoxy(x+2,y+11); printf("edit program <-(if yes)error occurred");
    gotoxy(x+2,y+12); printf("   ^                   l(if no)");
    gotoxy(x+2,y+13); printf("   l                   V");
    gotoxy(x+2,y+14); printf("   l              3.link");
    gotoxy(x+2,y+15); printf("   l                   l");
    gotoxy(x+2,y+16); printf("   l                   V");
    gotoxy(x+2,y+17); printf("    --------(if yes)error occurred");
    gotoxy(x+2,y+18); printf("                       l(if no)");
    gotoxy(x+2,y+19); printf("                       V");
    gotoxy(x+2,y+20); printf("                  4.create an executable file");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch1++;
}

void chapter1_e3(void)        //(3)chapter1 설명3
{
    int s;
    gotoxy(x+2,y+3); printf("1.3 Entering and Compiling the Source Code");
    gotoxy(x+2,y+5); printf("Now let's write our first program.");
    gotoxy(x+2,y+6); printf("Simply enter the program code that follows.");
    gotoxy(x+2,y+7); printf("Note that you do not know anything about C yet, so you do not have the ability to cope with errors.");
    gotoxy(x+2,y+8); printf("Therefore, care must be taken to avoid typos.");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch1++;
}


void chapter1_p3(void)        //(4)chapter1 설명3에 이어지는 실습
{
    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    printf(\"Hello world!\\n\");");
    gotoxy(x+2,y+7); printf("    return 0;");
    gotoxy(x+2,y+8); printf("}");
    ch1++;
}

void chapter1_r3(void)       //(5)chapter1 실습 답
{
    char blank[100]={'\0'};
    int i;
    char str[100]="printf(";

    strcat(str, "\"");
    strcat(str, "Hello world!");
    strcat(str, "\\");
    strcat(str, "n");
    strcat(str, "\"");
    strcat(str, ");");

    gotoxy(x+2,y+26); printf("[WRITE IT THE SAME WAY]");

    gotoxy(x+2,y+27);
    for(i=0; i<6; i++)
    {
        if(i==0)
        {
            while(1)
            {
                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strncmp(blank,"#include <stdio.h>",100)==0)
                {    
                    gotoxy(x+2,y+29);
                    break;
                }
                else
                {
                    gotoxy(x+2,y+27);
                    printf("\a                    ");
                    gotoxy(x+2,y+27);
                }
            }
        }
        else if(i==1)
        {
            while(1)
            { 
                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strncmp(blank,"int main(void)",100)==0)
                {
                    gotoxy(x+2,y+30);
                    break;
                }
                else
                {
                    gotoxy(x+2,x+29); 
                    printf("\a                  ");
                    gotoxy(x+2,x+29);
                }
            }
        }
        else if(i==2)
        {
            while(1)
            {
                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strncmp(blank,"{",100)==0)
                {
                    gotoxy(x+6,y+31);
                    break;
                }
                else
                {
                    gotoxy(x+2,y+30);
                    printf("\a                     ");
                    gotoxy(x+2,y+30);
                }
            }
        }
        else if(i==3)
        {
            while(1)
            {

                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strncmp(blank, str, 100)==0)
                {
                    gotoxy(x+6,y+32);
                    break;
                }
                else
                {
                    gotoxy(x+6,y+31);
                    printf("\a                          ");
                    gotoxy(x+6,y+31);
                }
            }
        }
        else if(i==4)
        {
            while(1)
            {
                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strncmp(blank,"return 0;", 100)==0)
                {
                    gotoxy(x+2,y+33);
                    break;
                }
                else
                {
                    gotoxy(x+6,y+32);
                    printf("\a                    ");
                    gotoxy(x+6,y+32);
                }
            }
        }
        else if(i==5)
        {
            while(1)
            {
                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strncmp(blank,"}",100)==0)
                {
                    break;
                }
                else
                {
                    gotoxy(x+2,y+33);
                    printf("\a                   ");
                    gotoxy(x+2,y+33);
                }
            }
        }
    }
    ch1++;

}

void chapter1_r4(void)
{
    int s;

    gotoxy(x,y+20); printf("--------------------------------------------------");
    gotoxy(x+2,y+21); printf("<EXECUTION RESULT>");
    gotoxy(x+2,y+22); printf("Hello world!");
    gotoxy(x+50,y+21); printf("YOU CAN LEARN MORE DETAILS IN THE NEXT CHAPTER(press '1')=>");
    gotoxy(x+110,y+21); 
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
        {
            system("clear");
            break;
        }
    }
    ch1++;
}

void chapter2_e(void)
{

    int s;

    gotoxy(x+2,y+1); printf("CHAPTER2.BASIS OF C PROGRAMMING");
    gotoxy(x+2,y+2); printf("1 main");
    gotoxy(x+2,y+4); printf("Let's look at the code you made on chapter 1");
    gotoxy(x+2,y+5); printf("The main is a function that must be located in the program where the program begins.");
    gotoxy(x+2,y+6); printf("The main consists of a head and body.");
    gotoxy(x+2,y+7); printf("The head shows the name of the function and the required data.");
    gotoxy(x+2,y+8); printf("At the end of the body,insert return 0; to finish the program.");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch2++;
    system("clear");
    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER2.BASIS OF C PROGRAMMING");
    gotoxy(x+2,y+2); printf("2 ;(semicolon)");
    gotoxy(x+2,y+4); printf("Mark the end of a sentence by adding a semicolon when you are coding ");
    gotoxy(x+2,y+5); printf(" ,as we add a period when writing.");
    gotoxy(x+2,y+6); printf("You must enter a semicolon when you write a sentence.");

    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)

            break;
    }
    ch2++;
    system("clear");
    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER2.BASIS OF C PROGRAMMING");
    gotoxy(x+2,y+2); printf("3 annotation");
    gotoxy(x+2,y+4); printf("An annotation is a memo that makes it easy for developers to recognize the use of a code");
    gotoxy(x+2,y+5); printf("Any content between '/*'and'*/'is  ignored.");
    gotoxy(x+2,y+6); printf("After '//', it will be ignored to the end of the line");
    gotoxy(x+2,y+7); printf("Note that the annotation is ignored when running the program.");

    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)

            break;
    }
    ch2++;
    system("clear");
    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER2.BASIS OF C PROGRAMMING");
    gotoxy(x+2,y+2); printf("4 printf");
    gotoxy(x+2,y+4); printf("printf prints the data on the screen.");
    gotoxy(x+2,y+5); printf("Enter 'printf()'and use it to enter \"string to print\" between parentheses.");
    gotoxy(x+2,y+6); printf("When outputting an integer, enter %%d between \"\" and enter integer after \"\"");
    gotoxy(x+4,y+8); printf("printf(\"%%d\",3);");
    gotoxy(x+2,y+10); printf("Same real number. Use %%f instead of %%d!");
    gotoxy(x+4,y+12); printf("printf(\"%%f\",3.14);");

    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }
    ch2++;
    system("clear");
    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER2.BASIS OF C PROGRAMMING");
    gotoxy(x+2,y+2); printf("4 printf");
    gotoxy(x+2,y+4); printf("You can also output special control characters.");
    gotoxy(x+4,y+6); printf("\\n  Change the line");
    gotoxy(x+4,y+7); printf("\\t  Tap");
    gotoxy(x+4,y+8); printf("\\r  Carriage return");
    gotoxy(x+4,y+9); printf("\\b  Backspace");
    gotoxy(x+4,y+10); printf("\\a  Alert");

    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }
    ch2++;
    system("clear");
}



void chapter2_p(void)
{
    char blank[20];
    map_chapter2_p();
    gotoxy(x+2, y+2); printf("Fill in the blanks!");
    gotoxy(x+4, y+6); printf("#include<stdio.h>");
    gotoxy(x+4, y+8); printf("int[         ](void)");
    gotoxy(x+4, y+9); printf("{");
    gotoxy(x+4, y+14); printf("}");
    gotoxy(x+4, y+20); printf("<hint>");
    gotoxy(x+4, y+21); printf("main , printf , ; , return 0 ");
    gotoxy(x+9, y+8);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='m'&&blank[1]=='a'&&blank[2]=='i'&&blank[3]=='n')
            break;
        else
        {
            gotoxy(x+9, y+8);
            printf("\a        ");
            gotoxy(x+9, y+8);
        }
    }
    ch2++;
    system("clear");

    map_practice();
    map_chapter2_p();
    gotoxy(x+2, y+2); printf("Fill in the blanks!");
    gotoxy(x+4, y+6); printf("#include<stdio.h>");
    gotoxy(x+4, y+8); printf("int main(void)");
    gotoxy(x+4, y+9); printf("{");
    gotoxy(x+4, y+11); printf("[         ](\"Hello World\")");
    gotoxy(x+4, y+14); printf("}");
    gotoxy(x+4, y+20); printf("<hint>");
    gotoxy(x+4, y+21); printf("main, printf, ; , return 0 ");
    gotoxy(x+6, y+11);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='p'&&blank[1]=='r'&&blank[2]=='i'&&blank[3]=='n'&&blank[4]=='t'&&blank[5]=='f')
            break;
        else
        {
            gotoxy(x+6, y+11);
            printf("\a        ");
            gotoxy(x+6, y+11);
        }
    }
    ch2++;
    system("clear");

    map_practice();
    map_chapter2_p();
    gotoxy(x+2, y+2); printf("Fill in the blanks!");
    gotoxy(x+4, y+6); printf("#include<stdio.h>");
    gotoxy(x+4, y+8); printf("int main(void)");
    gotoxy(x+4, y+9); printf("{");
    gotoxy(x+4, y+11); printf("printf(\"Hello World\")[         ]");
    gotoxy(x+4, y+14); printf("}");
    gotoxy(x+4, y+20); printf("<hint>");
    gotoxy(x+4, y+21); printf("main, printf, ; , return 0 ");
    gotoxy(x+27, y+11);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]==';')
            break;
        else
        {
            gotoxy(x+27, y+11);
            printf("\a        ");
            gotoxy(x+27, y+11);
        }
    }
    ch2++;
    system("clear");

    map_practice();
    map_chapter2_p();
    gotoxy(x+2, y+2); printf("Fill in the blanks!");
    gotoxy(x+4, y+6); printf("#include<stdio.h>");
    gotoxy(x+4, y+8); printf("int main(void)");
    gotoxy(x+4, y+9); printf("{");
    gotoxy(x+4, y+11); printf("printf(\"Hello World\");");
    gotoxy(x+4, y+12); printf("[         ];");
    gotoxy(x+4, y+14); printf("}");     gotoxy(x+4, y+20); printf("<hint>");
    gotoxy(x+4, y+21); printf("main, printf, ; , return 0 ");
    gotoxy(x+6, y+12);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='r'&&blank[1]=='e'&&blank[2]=='t'&&blank[3]=='u'&&blank[4]=='r'&&blank[5]=='n')
            break;
        else
        {
            gotoxy(x+6, y+12);
            printf("\a        ");
            gotoxy(x+6, y+12);
        }
    }
    ch2++;
    system("clear");
}





void chapter3_e1(void)  
{
    int s;
    gotoxy(x+2,y+1); printf("CHAPTER3. VARIABLE");
    gotoxy(x+2,y+2); printf("3.1 Variable");
    gotoxy(x+2,y+4); printf("The method of declaring variables is simple.");
    gotoxy(x+2,y+5); printf("You can use the name of the data type and the variables that match the type of data.");
    gotoxy(x+2,y+6); printf("For example, the variable to which you want to store an integer is declared as follows.");
    gotoxy(x+2,y+8); printf(" int a;  //int-type variable declaration");
    gotoxy(x+2,y+10); printf("This sentence tells the compiler that the space to store the integer is 4 bytes in memory and that it will be written by a name called A.");
    gotoxy(x+2,y+11); printf("After you have declared a variable, you can save, calculate, or use the value with the variable name.");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch3++;
}

void chapter3_e2(void)  
{
    int s;

    gotoxy(x+2,y+4); printf("The variable declaration location must follow the following  rules.");
    gotoxy(x+2,y+6); printf("*Declares from the blocks in curly brackets to use them from the location of the blocks to the end of the block.");
    gotoxy(x+2,y+7); printf("*Depending on the compiler, the declaration location of the variable may be limited.");
    gotoxy(x+2,y+8); printf("*If the data type is the same, you can simultaneously declare more than one variable.");
    gotoxy(x+2,y+9); printf("*The substitution operator stores the value to the right of the variable to the left of the operator.");
    gotoxy(x+2,y+10); printf("*The variable is the storage space on the left side of the substitution operator and the value is on the right.");
    gotoxy(x+2,y+12); printf("GARBAGE VALUE AND INITIALIZAION");
    gotoxy(x+2,y+13); printf("*When you proclaim a variable, the garbage value is initially stored.");
    gotoxy(x+2,y+14); printf("*Initialization is the first value to be introduced to eliminate waste prices.");
    gotoxy(x+2,y+15); printf("*Using an uninitialized variable outputs a warning message.");
    gotoxy(x+2,y+16); printf("---------------------------------------------------");
    gotoxy(x+2,y+17); printf("warning C4700: Uses an uninitiated region variable.");
    gotoxy(x+2,y+18); printf("---------------------------------------------------");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch3++;

}

void chapter3_e3(void)
{
    int s;

    gotoxy(x+2,y+2); printf("3.2 DATA INPUT");
    gotoxy(x+2,y+4); printf("Use the scanf function when entering data into a variable from the keyboard.");
    gotoxy(x+2,y+5); printf("*Use a transform character that matches the shape of the variable, and add an '&' to the variable that you want to enter.");
    gotoxy(x+2,y+6); printf("*The scanf function may not be able to enter data if the conversion character and input type are different.");
    gotoxy(x+2,y+7); printf("When entering a string, do not add an & symbol to the name of the array.");
    gotoxy(x+2,y+8); printf("If you enter a string that is larger than the size of the char array, the program may end abnormally.");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch3++;
}


void chapter3_p3(void)
{
    char blank[80];

    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    double avg;");
    gotoxy(x+2,y+7); printf("    char grade;");
    gotoxy(x+2,y+9); printf("    avg = 84.5;");      
    gotoxy(x+2,y+10); printf("    grade = 'B';");
    gotoxy(x+2,y+12); printf("    printf(\"average : [     ]\\n\", avg);");   // 
    gotoxy(x+2,y+13); printf("    printf(\"grade : [     ] \", grade);");    //
    gotoxy(x+2,y+15); printf("return 0;");

    gotoxy(x+2,y+17); printf("+++++ EXECUTION RESULT +++++");
    gotoxy(x+2,y+18); printf("average : 84.5");
    gotoxy(x+2,y+19); printf("grade : B");
    gotoxy(x+2,y+22); printf("<hint>");
    gotoxy(x+2,y+23); printf("%%d, %%lf, %%c, %%s");
    gotoxy(x+25,y+12); 
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='%'&&blank[1]=='l'&&blank[2]=='f')
            break;
        else
        {
            gotoxy(x+25,y+12);
            printf("\a     ");
            gotoxy(x+25,y+12);
        }
    }
    gotoxy(x+23,y+13);
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='%'&&blank[1]=='c')
            break;
        else
        {
            gotoxy(x+23,y+13);
            printf("\a     ");
            gotoxy(x+23,y+13);
        }
    }
    system("clear");
    ch3++;
}




void chapter4_e(void)
{
    int s;

    gotoxy(x+2,y+1); printf("CHAPTER4. OPERATOR");
    gotoxy(x+2,y+4); printf("Learning an operator is learning instruction.");
    gotoxy(x+2,y+5); printf("An order is an operator.");
    gotoxy(x+2,y+6); printf("Data that is intended to be operated by operator is called operand.");
    gotoxy(x+2,y+7); printf("You don't have to be nervous because it's similar to mathematical symbols.");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }

    ch4++;
    system("clear");


    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER4. OPERATOR");
    gotoxy(x+2,y+2); printf("1 Arithmetic Operator");
    gotoxy(x+2,y+4); printf("These are all arithmetic operators. Use two operands.");
    gotoxy(x+2,y+6); printf("  +  Plus");
    gotoxy(x+2,y+7); printf("  -  Minus");
    gotoxy(x+2,y+8); printf("  *  Multiplication");
    gotoxy(x+2,y+9); printf("  /  Division");
    gotoxy(x+2,y+10); printf(" %% Rest");
    gotoxy(x+2,y+12); printf("ex) a+b a-b");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }

    ch4++;
    system("clear");

    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER4. OPERATOR");
    gotoxy(x+2,y+2); printf("2 Assignment Operator");
    gotoxy(x+2,y+4); printf("Use =symbol. It saves the result of the right expression in the left variable.");
    gotoxy(x+2,y+5); printf("(Never interpret it as the same thing! An operator who means the same will soon learn.)");
    gotoxy(x+2,y+12); printf(" ex)a=b");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }
    ch4++;
    system("clear");

    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER4. OPERATOR");
    gotoxy(x+2,y+2); printf("3 ++ Operator and -- operator");
    gotoxy(x+2,y+4); printf("These operators Increse or decrease the operand 1 by 1");
    gotoxy(x+2,y+5); printf("Both use one operand.");
    gotoxy(x+2,y+6); printf("These used  in front of the operand, or can be used back of the operand.");
    gotoxy(x+2,y+7); printf("If ++operator used in front of the operand, it increased and ready for other operator.");
    gotoxy(x+2,y+8); printf("And if ++ operator used back of the operand, it ready for other operator and increased.");
    gotoxy(x+2,y+10); printf("++");
    gotoxy(x+2,y+11); printf("--");
    gotoxy(x+2,y+12); printf("ex) ++a a++ --a a--");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }
    ch4++;
    system("clear");

    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER4. OPERATOR");
    gotoxy(x+2,y+2); printf("4 Relational Operator");
    gotoxy(x+2,y+4); printf(" When you need to execute a command according to the conditions, what you need is a relational operator.");
    gotoxy(x+2,y+6); printf("a<b If a is less than b, 1(True). If not, 0(False).");
    gotoxy(x+2,y+7); printf("a=<b If a is less or same as b, 1(True). If not, 0(False).");
    gotoxy(x+2,y+8); printf("a==b If a is same as b, 1(True). If not, 0(False).");
    gotoxy(x+2,y+9); printf("a!=b If a is different from b, 1(True). If not , 0(False).");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }
    ch4++;
    system("clear");

    map_explanation();
    gotoxy(x+2,y+1); printf("CHAPTER4. OPERATOR");
    gotoxy(x+2,y+2); printf("5 Logical Operator");
    gotoxy(x+2,y+4); printf("a&&b (AND)  If all true, 1(True). If not, 0(False).");
    gotoxy(x+2,y+5); printf("a||b (OR)  If either of them is true, 1(True). If not, 0(False).");
    gotoxy(x+2,y+6); printf("!a (NOT)  If a is false, 1(True). If not, 0(False).");
    gotoxy(x+130,y+23);

    while(1)
    {
        scanf("%d",&s);
        if(s==1)
            break;
    }
    ch4++;
    system("clear");

}
void map_chapter4_p(void)
{
    int i;

    gotoxy(x+2,y+4); printf("-------------------------------------");
    for(i=y;i<13;i++)
    {
        gotoxy(x+2,i+5); printf("l                                   l");
    }
    gotoxy(x+2,y+13); printf("--------------------------------------");
}

void chapter4_p(void)
{
    char blank[20];

    map_chapter4_p();
    gotoxy(x+2,y+2); printf("Fill in the blanks!");
    gotoxy(x+4,y+5); printf("#include <stdio.h>");
    gotoxy(x+4,y+6); printf("int main(void)");
    gotoxy(x+4,y+7); printf("{");
    gotoxy(x+4,y+8); printf("int a=3; //variable declaration");
    gotoxy(x+4,y+9); printf("a=[         ];");
    gotoxy(x+4,y+10); printf("printf(\"a=%%d\",a);");
    gotoxy(x+4,y+11); printf("return 0;");
    gotoxy(x+4,y+12); printf("}");
    gotoxy(x+4,y+14); printf("+++++ Execution Result +++++");
    gotoxy(x+4,y+15); printf("a=9");
    gotoxy(x+4,y+17); printf("<hint>");
    gotoxy(x+4,y+18); printf("a*3, a+3, a/2, a%%2");
    gotoxy(x+7,y+9);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='a' && blank[1]=='*' && blank[2]=='3')
            break;
        else
        {
            gotoxy(x+7,y+9);
            printf("\a        ");
            gotoxy(x+7,y+9);
        }
    }
    ch4++;
    system("clear");
    map_practice();
    map_chapter4_p();
    gotoxy(x+2,y+2); printf("Fill in the blanks!");
    gotoxy(x+4,y+5); printf("#include <stdio.h>");
    gotoxy(x+4,y+6); printf("int main(void)");
    gotoxy(x+4,y+7); printf("{");
    gotoxy(x+4,y+8); printf("int a=3; //variable declaration");
    gotoxy(x+4,y+9); printf("[         ];");
    gotoxy(x+4,y+10); printf("printf(\"a=%%d\",a);");
    gotoxy(x+4,y+11); printf("return 0;");
    gotoxy(x+4,y+12); printf("}");
    gotoxy(x+4,y+14); printf("+++++ Executuon Result +++++");
    gotoxy(x+4,y+15); printf("a=4");
    gotoxy(x+4,y+17); printf("<hint>");
    gotoxy(x+4,y+18); printf("a++, ++a, a--, --a");
    gotoxy(x+6,y+9);
    while(1)
    {
        scanf("%s",blank);
        if((blank[0]=='a'&&blank[1]=='+'&&blank[2]=='+')||(blank[0]=='+'&&blank[1]=='+'&&blank[2]=='a'))
            break;
        else
        {
            gotoxy(x+6,y+9);
            printf("\a        ");
            gotoxy(x+6,y+9);
        }
    }
    ch4++;
    system("clear");
    map_practice();
    map_chapter4_pp();
    gotoxy(x+2,y+2); printf("Choose the relational operator that matches the above description.");
    gotoxy(x+4,y+7); printf("If a is less than b, 1(True). If not, 0(False).");
    gotoxy(x+4,y+12); printf("(1) a<b");
    gotoxy(x+4,y+13); printf("(2) a<=b");
    gotoxy(x+4,y+14); printf("(3) a==b");
    gotoxy(x+4,y+15); printf("(4) a!=b");
    gotoxy(x+4,y+17); printf("Enter the answer:");
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='1')
            break;
        else
        {
            gotoxy(x+21,y+17);
            printf("\a        ");
            gotoxy(x+21,y+17);
        }
    }
    ch4++;
    system("clear");
    map_practice();
    map_chapter4_pp();
    gotoxy(x+2,y+2); printf("Choose the relational operator that matches the above description.");
    gotoxy(x+4,y+7); printf("If a is different from b, 1(True). If not, 0(False).");
    gotoxy(x+4,y+12); printf("(1) a<b");
    gotoxy(x+4,y+13); printf("(2) a<=b");
    gotoxy(x+4,y+14); printf("(3) a==b");
    gotoxy(x+4,y+15); printf("(4) a!=b");
    gotoxy(x+4,y+17); printf("Enter the answer:");
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='4')
            break;
        else
        {
            gotoxy(x+21,y+17);
            printf("\a        ");
            gotoxy(x+21,y+17);
        }
    }
    ch4++;
    system("clear");
    map_practice();
    map_chapter4_pp();
    gotoxy(x+2,y+2); printf("Choose the logical operator that matches the above description.");
    gotoxy(x+4,y+7); printf("If all true, 1(True). If not, 0(False).");
    gotoxy(x+4,y+12); printf("(1) a&&b");
    gotoxy(x+4,y+13); printf("(2) a||b");
    gotoxy(x+4,y+14); printf("(3) !a");
    gotoxy(x+4,y+17); printf("Enter the answer:");
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='1')
            break;
        else
        {
            gotoxy(x+21,y+17);
            printf("\a        ");
            gotoxy(x+21,y+17);
        }
    }
    ch4++;
    system("clear");
    map_practice();
    map_chapter4_pp();
    gotoxy(x+2,y+2); printf("Choose the logical operator that matches the above description.");
    gotoxy(x+4,y+7); printf("If a is false, 1(True). If not, 0(False)");
    gotoxy(x+4,y+12); printf("(1) a&&b");
    gotoxy(x+4,y+13); printf("(2) a||b");
    gotoxy(x+4,y+14); printf("(3) !a");
    gotoxy(x+4,y+17); printf("Enter the answer:");
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='3')
            break;
        else
        {
            gotoxy(x+21,y+17);
            printf("\a        ");
            gotoxy(x+21,y+17);
        }
    }
    ch4++;
    system("clear");
}

void chapter5_e1(void)  //(1)chapter5 설명1
{
    int s;

    gotoxy(x+2,y+1); printf("CHAPTER5. CHOICE STATEMENT");
    gotoxy(x+2,y+2); printf("5.1 IF STATEMENT");
    gotoxy(x+2,y+4); printf("If you write an if statement, you can pick a statement to execute according to the condition.");
    gotoxy(x+2,y+5); printf("(1) Basic form of if statement");
    gotoxy(x+2,y+6); printf("if(Conditional expression)    choice statement;");
    gotoxy(x+2,y+7); printf("If conditional is true, execute statement. If false, do nothing");
    gotoxy(x+2,y+8); printf("if (a>10)   ->conditional expression");
    gotoxy(x+2,y+9); printf("{");
    gotoxy(x+2,y+10); printf("     b=a        ->Execution Statement");
    gotoxy(x+2,y+11); printf("}");
    gotoxy(x+2,y+12); printf("If the sentence to be executed is two or more sentences, it must be enclosed in curly braces.");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch5++;
}

void chapter5_e2(void)    //(3)chapter5 설명2
{
    int s;

    gotoxy(x+2,y+2); printf("(2) if ~ else statement");
    gotoxy(x+2,y+3); printf("The if ~ else statement is used when you must choose one or the other");
    gotoxy(x+2,y+4); printf("if(a>=0)    ->conditional expression");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    a=1;    ->execution Statement1");
    gotoxy(x+2,y+7); printf("}");
    gotoxy(x+2,y+8); printf("else");
    gotoxy(x+2,y+9); printf("{");
    gotoxy(x+2,y+10); printf("    a=-1;    ->execution Statement2");
    gotoxy(x+2,y+11); printf("}");
    gotoxy(x+2,y+12); printf("The conditional is not used in the if-else statement else."    );
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch5++;
}

void chapter5_e3(void)
{    
    int s;
    gotoxy(x+2,y+2); printf("(3) if ~ else if ~ else statement");
    gotoxy(x+2,y+3); printf("If you must select one of three or more statements, use an if ~ else if ~ else statement.");
    gotoxy(x+2,y+4); printf("if(a>0)      ->Conditional expression1)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    b=1      ->Execution Statement1");
    gotoxy(x+2,y+7); printf("}");
    gotoxy(x+2,y+8); printf("else if(a==0) ->Conditional expression2");
    gotoxy(x+2,y+9); printf("{");
    gotoxy(x+2,y+10); printf("    b=2;      ->Execution Statement2");
    gotoxy(x+2,y+11); printf("}");
    gotoxy(x+2,y+12); printf("else");
    gotoxy(x+2,y+13); printf("{");
    gotoxy(x+2,y+14); printf("    b+3;      ->Execution Statement3");
    gotoxy(x+2,y+15); printf("}");
    gotoxy(x+2,y+16); printf("If the sentence to run under each condition is more than two sentences, enclose it with curly brackets.");
    gotoxy(x+2,y+17); printf("The result of the previous condition is reflected because it checks the conditional expression in order.");
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch5++;
}


void chapter5_e4(void) //(4)chapter5 설명3
{
    int s;

    gotoxy(x+2,y+2); printf("5.2 Use of if statement and switch ~ case statement");
    gotoxy(x+2,y+3); printf("Overlaying an if statement");
    gotoxy(x+2,y+4); printf("if(a>10)    ->Conditional expression");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    if(b>=0)  -Execution Statement");
    gotoxy(x+2,y+7); printf("    {");
    gotoxy(x+2,y+8); printf("        b=1;");
    gotoxy(x+2,y+9); printf("    }");
    gotoxy(x+2,y+10); printf("   else");
    gotoxy(x+2,y+11); printf("   {");
    gotoxy(x+2,y+12); printf("        b=-1;");
    gotoxy(x+2,y+13); printf("    }");
    gotoxy(x+2,y+14); printf("}");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch5++;
}

void chapter5_e5(void)   //(5)chapter5 설명4
{
    int s;

    gotoxy(x+2,y+2); printf("SWITCH ~ CASE STATEMENT");
    gotoxy(x+2,y+3); printf("switch(conditional expression");
    gotoxy(x+2,y+4); printf("{");
    gotoxy(x+2,y+5); printf("case invariable 1:");
    gotoxy(x+2,y+6); printf("    execution statement 1;");
    gotoxy(x+2,y+7); printf("    break;");
    gotoxy(x+2,y+8); printf("case invariable 2:");
    gotoxy(x+2,y+9); printf("    execution statement 2;");
    gotoxy(x+2,y+10); printf("    break;");
    gotoxy(x+2,y+11); printf("default:");
    gotoxy(x+2,y+12); printf("    execution statement;");
    gotoxy(x+2,y+13); printf("    break;");
    gotoxy(x+2,y+14); printf("}");
    gotoxy(x+2,y+16); printf("Conditional expressions use only integer expressions, and the case involves break.");
    gotoxy(x+2,y+17); printf("If there is no case invariable that matches the conditional expression, it skips to default.");
    gotoxy(x+2,y+18); printf("'break' can be omitted if necessary.");
    gotoxy(x+2,y+19); printf("The switch ~ case statement can sometimes be replaced with an if statement to achieve the same result.");
    gotoxy(x+130,y+23);
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
            break;
    }
    ch5++;
}

void chapter5_p4(void)   // p144
{
    char blank[80];
    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    int a = 0, b = 0;");
    gotoxy(x+2,y+8); printf("    if([     ])       //If a is greater than 0, it is assigned to b");
    gotoxy(x+2,y+9); printf("    {");
    gotoxy(x+2,y+10); printf("       b = 1;");
    gotoxy(x+2,y+11); printf("    }");
    gotoxy(x+2,y+12); printf("    else if([       ])     //If a is 0, 2 is assigned to b");
    gotoxy(x+2,y+13); printf("    }");
    gotoxy(x+2,y+14); printf("    else");    
    gotoxy(x+2,y+15); printf("    {");
    gotoxy(x+2,y+16); printf("        b = 3;");
    gotoxy(x+2,y+17); printf("    }");
    gotoxy(x+2,y+19); printf("    printf(\"b : %%d \\n\", b);");
    gotoxy(x+2,y+21); printf("    return 0;");
    gotoxy(x+2,y+22); printf("}");
    gotoxy(x+2,y+26); printf("<EXECUTION RESULT>");
    gotoxy(x+2,y+27); printf("b : 2");
    gotoxy(x+9,y+8);
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='a'&&blank[1]=='>'&&blank[2]=='0')
            break;
        else
        {
            gotoxy(x+9,y+8);
            printf("\a         ");
            gotoxy(x+9,y+8);
        }
    }
    gotoxy(x+14,y+12);
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='a'&&blank[1]=='='&&blank[2]=='='&&blank[3]=='0')
            break;
        else
        {
            gotoxy(x+14,y+12);
            printf("\a           ");
            gotoxy(x+14,y+12);
        }
    }
    system("clear");
    ch5++;
}


