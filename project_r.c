#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title(void);
int content(void);
void map_explanation(void);
void map_practice(void);

void map_chapter2_p(void);
void map_chapter4_p(void);
void map_chapter4_pp(void);

void chapter1_p3(void);
void chapter1_r3(void);
void chapter1_r4(void);

void chapter2_p(void);

void chapter3_p(void);

void chapter4_p(void);

void chapter5_p(void);
void explain(char *str,char *res, FILE *fp);

#define X_N 135
#define Y_N 28
#define X 5
#define Y 5
#define LINE printf("l                                        l")

int x=5;
int y=5;
void gotoxy(int x, int y)       
{
    printf("\033[%d;%df", y, x);
    fflush(stdout);
}

int main(void)
{
    system("clear");        
    title();
    system("clear");
    content();

    return 0;
}

void title(void)  
{
    char ch;

    gotoxy(X,Y); printf(" @@@@@    @@@@@   @@@@  @@@@   @@@  @@@@     @    @     @ @     @ @@@@@ @    @  @@@");
    gotoxy(X,Y+1); printf("@         @   @  @   @ @    @ @     @   @   @ @   @@   @@ @@   @@   @   @@   @ @");
    gotoxy(X,Y+2); printf("@         @@@@   @@@@  @    @ @  @@ @@@@@  @@@@@  @  @  @ @  @  @   @   @  @ @ @  @@");
    gotoxy(X,Y+3); printf("@         @      @  @  @    @ @   @ @  @   @   @  @     @ @     @   @   @    @ @   @");
    gotoxy(X,Y+4); printf(" @@@@@    @      @   @  @@@@   @@@  @   @ @     @ @     @ @     @ @@@@@ @    @  @@@");
    gotoxy(X+80,Y+5); printf("For beginners");
    gotoxy(X,Y+8); printf("START(Please Enter 'enter' key to Start..)");

    scanf("%c", &ch); 

}

int content(void)  
{
    FILE *fp;

    int sel;
    char str[100];
    char *res=str;
    int i;
    int ch1,ch2,ch3,ch4,ch5;

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
        gotoxy(0,0);system("clear");
        switch(sel)
        {
            case 1:
                fp=fopen("chapter1.txt", "r");
                explain(str,res,fp);
                gotoxy(0,0);system("clear");
                map_practice();
                chapter1_p3();
                chapter1_r3();
                chapter1_r4();
                ch1=100;
                break;
            case 2:
                fp=fopen("chapter2.txt", "r");
                explain(str,res,fp);
                gotoxy(0,0);system("clear");
                map_practice();
                chapter2_p();
                ch2=100;
                break;
            case 3:
                fp=fopen("chapter3.txt", "r");
                explain(str,res,fp);
                gotoxy(0,0);system("clear");
                map_practice();
                chapter3_p();
                ch3=100;
                break;
            case 4:
                fp=fopen("chapter4.txt", "r");
                explain(str,res,fp);
                gotoxy(0,0);system("clear");
                map_practice();
                chapter4_p();
                ch4=100;
                break;
            case 5:
                fp=fopen("chapter5.txt", "r");
                explain(str,res,fp);
                gotoxy(0,0);system("clear");
                map_practice();
                chapter5_p();
                ch5=100;
                break;
            default:
                system("clear");

                printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
        }
    }

}

void explain(char *str,char *res, FILE *fp)
{
    int e;
    int i=0;

    res[0]=' ';

    while(1)
    {
        map_explanation();
        if(res[0]=='$')
            break;

        while(fgets(str,100,fp)!=NULL)
        {
            if(res[0]=='~')
            {
                break;
            }
            gotoxy(X+2,Y+2+i); printf("%s",str);
            i++;
        }
        gotoxy(X_N,Y_N);
        while(1)
        {
            scanf("%d", &e);
            if(e==1)
                break;
        }
        i=0;

        system("clear");
    }
    fclose(fp);
}


void map_explanation(void)
{
    int i;

    for(i=X; i<150; i++)
    {
        gotoxy(i,Y); printf("#");
        gotoxy(i,Y+25); printf("#");
    }
    for(i=X; i<=Y+25; i++)
    {
        gotoxy(X, i); printf("#");
        gotoxy(150, i); printf("#");
    }

    gotoxy(115,28); printf(" NEXT(press '1') =>");
}

void map_practice(void)
{
    int i;

    gotoxy(X, Y); printf("LET's PRACTICE");

    for(i=X;i<100;i++)
    {
        gotoxy(i, Y+1); printf("*");
        gotoxy(i, Y+25); printf("*");
    }
}

void map_chapter2_p(void)
{
    int i;

    for(i=X;i<46;i++)
    {
        gotoxy(i+2,Y+4);printf("-");
        gotoxy(i+2,Y+17);printf("-");
    }

    for(i=5;i<17;i++)
    {

        gotoxy(X+2, Y+i); LINE;
    }
}

void map_chapter4_pp(void)
{
    int i;
    gotoxy(X+2,Y+4); printf("----------------------------------------------------------------");
    for(i=Y;i<10;i++)
    {
        gotoxy(X+2,i+5); printf("l                                                              l");
    }
    gotoxy(X+2,Y+10); printf("----------------------------------------------------------------");
}




void chapter1_p3(void) 
{
    gotoxy(X+2,Y+2); printf("#include <stdio.h>");
    gotoxy(X+2,Y+4); printf("int main(void)");
    gotoxy(X+2,Y+5); printf("{");
    gotoxy(X+2,Y+6); printf("    printf(\"Hello world!\\n\");");
    gotoxy(X+2,Y+7); printf("    return 0;");
    gotoxy(X+2,Y+8); printf("}");
}

void chapter1_r3(void)  
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

    gotoxy(X+2,Y+26); printf("[WRITE IT THE SAME WAY]");

    gotoxy(X+2,Y+27);
    for(i=0; i<6; i++)
    {
        if(i==0)
        {
            while(1)
            {
                fgets(blank, sizeof(blank), stdin);
                blank[strlen(blank)-1]='\0';
                if(strcmp(blank,"#include <stdio.h>")==0)
                {    
                    gotoxy(X+2,Y+29);
                    break;
                }
                else
                {
                    gotoxy(X+2,Y+27);
                    printf("\a                    ");
                    gotoxy(X+2,Y+27);
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
                    gotoxy(X+2,Y+30);
                    break;
                }
                else
                {
                    gotoxy(X+2,Y+29); 
                    printf("\a                  ");
                    gotoxy(X+2,Y+29);
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
                    gotoxy(X+6,Y+31);
                    break;
                }
                else
                {
                    gotoxy(X+2,Y+30);
                    printf("\a                     ");
                    gotoxy(X+2,Y+30);
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
                    gotoxy(X+6,Y+32);
                    break;
                }
                else
                {
                    gotoxy(X+6,Y+31);
                    printf("\a                          ");
                    gotoxy(X+6,Y+31);
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
                    gotoxy(X+2,Y+33);
                    break;
                }
                else
                {
                    gotoxy(X+6,Y+32);
                    printf("\a                    ");
                    gotoxy(X+6,Y+32);
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
                    gotoxy(X+2,Y+33);
                    printf("\a                   ");
                    gotoxy(X+2,Y+33);
                }
            }
        }
    }

}

void chapter1_r4(void)
{
    int s;

    gotoxy(X,Y+20); printf("--------------------------------------------------");
    gotoxy(X+2,Y+21); printf("<EXECUTION RESULT>");
    gotoxy(X+2,Y+22); printf("Hello world!");
    gotoxy(X+50,Y+21); printf("YOU CAN LEARN MORE DETAILS IN THE NEXT CHAPTER(press '1')=>");
    gotoxy(X+110,Y+21); 
    while(1)
    {
        scanf("%d", &s);
        if(s==1)
        {
            system("clear");
            break;
        }
    }
}

void chapter2_p(void)
{
    char blank[20];
    map_chapter2_p();
    gotoxy(X+2, Y+2); printf("Fill in the blanks!");
    gotoxy(X+4, Y+6); printf("#include<stdio.h>");
    gotoxy(X+4, Y+8); printf("int[         ](void)");
    gotoxy(X+4, Y+9); printf("{");
    gotoxy(X+4, Y+14); printf("}");
    gotoxy(X+4, Y+20); printf("<hint>");
    gotoxy(X+4, Y+21); printf("main , printf , ; , return 0 ");
    gotoxy(X+9, Y+8);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='m'&&blank[1]=='a'&&blank[2]=='i'&&blank[3]=='n')
            break;
        else
        {
            gotoxy(X+9, Y+8);
            printf("\a        ");
            gotoxy(X+9, Y+8);
        }
    }
    system("clear");

    map_practice();
    map_chapter2_p();
    gotoxy(X+2, Y+2); printf("Fill in the blanks!");
    gotoxy(X+4, Y+6); printf("#include<stdio.h>");
    gotoxy(X+4, Y+8); printf("int main(void)");
    gotoxy(X+4, Y+9); printf("{");
    gotoxy(X+4, Y+11); printf("[         ](\"Hello World\")");
    gotoxy(X+4, Y+14); printf("}");
    gotoxy(X+4, Y+20); printf("<hint>");
    gotoxy(X+4, Y+21); printf("main, printf, ; , return 0 ");
    gotoxy(X+6, Y+11);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='p'&&blank[1]=='r'&&blank[2]=='i'&&blank[3]=='n'&&blank[4]=='t'&&blank[5]=='f')
            break;
        else
        {
            gotoxy(X+6, Y+11);
            printf("\a        ");
            gotoxy(X+6, Y+11);
        }
    }
    system("clear");

    map_practice();
    map_chapter2_p();
    gotoxy(X+2, Y+2); printf("Fill in the blanks!");
    gotoxy(X+4, Y+6); printf("#include<stdio.h>");
    gotoxy(X+4, Y+8); printf("int main(void)");
    gotoxy(X+4, Y+9); printf("{");
    gotoxy(X+4, Y+11); printf("printf(\"Hello World\")[         ]");
    gotoxy(X+4, Y+14); printf("}");
    gotoxy(X+4, Y+20); printf("<hint>");
    gotoxy(X+4, Y+21); printf("main, printf, ; , return 0 ");
    gotoxy(X+27, Y+11);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]==';')
            break;
        else
        {
            gotoxy(X+27, Y+11);
            printf("\a        ");
            gotoxy(X+27, Y+11);
        }
    }
    system("clear");

    map_practice();
    map_chapter2_p();
    gotoxy(X+2, Y+2); printf("Fill in the blanks!");
    gotoxy(X+4, Y+6); printf("#include<stdio.h>");
    gotoxy(X+4, Y+8); printf("int main(void)");
    gotoxy(X+4, Y+9); printf("{");
    gotoxy(X+4, Y+11); printf("printf(\"Hello World\");");
    gotoxy(X+4, Y+12); printf("[         ];");
    gotoxy(X+4, Y+14); printf("}");     gotoxy(x+4, y+20); printf("<hint>");
    gotoxy(X+4, Y+21); printf("main, printf, ; , return 0 ");
    gotoxy(X+6, Y+12);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='r'&&blank[1]=='e'&&blank[2]=='t'&&blank[3]=='u'&&blank[4]=='r'&&blank[5]=='n')
            break;
        else
        {
            gotoxy(X+6, Y+12);
            printf("\a        ");
            gotoxy(X+6, Y+12);
        }
    }
    system("clear");
}


void chapter3_p(void)
{
    char blank[80];

    gotoxy(X+2,Y+2); printf("#include <stdio.h>");
    gotoxy(X+2,Y+4); printf("int main(void)");
    gotoxy(X+2,Y+5); printf("{");
    gotoxy(X+2,Y+6); printf("    double avg;");
    gotoxy(X+2,Y+7); printf("    char grade;");
    gotoxy(X+2,Y+9); printf("    avg = 84.5;");      
    gotoxy(X+2,Y+10); printf("    grade = 'B';");
    gotoxy(X+2,Y+12); printf("    printf(\"average : [     ]\\n\", avg);");    
    gotoxy(X+2,Y+13); printf("    printf(\"grade : [     ] \", grade);");    
    gotoxy(X+2,Y+15); printf("return 0;");

    gotoxy(X+2,Y+17); printf("+++++ EXECUTION RESULT +++++");
    gotoxy(X+2,Y+18); printf("average : 84.5");
    gotoxy(X+2,Y+19); printf("grade : B");
    gotoxy(X+2,Y+22); printf("<hint>");
    gotoxy(X+2,Y+23); printf("%%d, %%lf, %%c, %%s");
    gotoxy(X+25,Y+12); 
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='%'&&blank[1]=='l'&&blank[2]=='f')
            break;
        else
        {
            gotoxy(X+25,Y+12);
            printf("\a     ");
            gotoxy(X+25,Y+12);
        }
    }
    gotoxy(X+23,Y+13);
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='%'&&blank[1]=='c')
            break;
        else
        {
            gotoxy(X+23,Y+13);
            printf("\a     ");
            gotoxy(X+23,Y+13);
        }
    }
    system("clear");

}

void map_chapter4_p(void)
{
    int i;

    gotoxy(X+2,Y+4); printf("-------------------------------------");
    for(i=Y;i<13;i++)
    {
        gotoxy(X+2,i+5); printf("l                                   l");
    }
    gotoxy(X+2,Y+13); printf("--------------------------------------");
}

void chapter4_p(void)
{
    char blank[20];

    map_chapter4_p();
    gotoxy(X+2,Y+2); printf("Fill in the blanks!");
    gotoxy(X+4,Y+5); printf("#include <stdio.h>");
    gotoxy(X+4,Y+6); printf("int main(void)");
    gotoxy(X+4,Y+7); printf("{");
    gotoxy(X+4,Y+8); printf("int a=3; //variable declaration");
    gotoxy(X+4,Y+9); printf("a=[         ];");
    gotoxy(X+4,Y+10); printf("printf(\"a=%%d\",a);");
    gotoxy(X+4,Y+11); printf("return 0;");
    gotoxy(X+4,Y+12); printf("}");
    gotoxy(X+4,Y+14); printf("+++++ Execution Result +++++");
    gotoxy(X+4,Y+15); printf("a=9");
    gotoxy(X+4,Y+17); printf("<hint>");
    gotoxy(X+4,Y+18); printf("a*3, a+3, a/2, a%%2");
    gotoxy(X+7,Y+9);
    while(1)
    {
        scanf("%s",blank);
        if(blank[0]=='a' && blank[1]=='*' && blank[2]=='3')
            break;
        else
        {
            gotoxy(X+7,Y+9);
            printf("\a        ");
            gotoxy(X+7,Y+9);
        }
    }

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
            gotoxy(X+6,Y+9);
            printf("\a        ");
            gotoxy(X+6,Y+9);
        }
    }
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
    system("clear");
}

void chapter5_p(void) 
{
    char blank[80];
    FILE *fp;
    char str[100];
    char *res=str;
    int i=0;

    fp=fopen("chapter5_p.txt", "r");

    while(fgets(str,100,fp)!=NULL)
    {
        gotoxy(X+2,Y+2+i); printf("%s",str);
        i++;
    }

    gotoxy(X+2,Y+26); printf("<EXECUTION RESULT>");
    gotoxy(X+2,Y+27); printf("b : 2");
    gotoxy(X+10,Y+8);
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='a'&&blank[1]=='>'&&blank[2]=='0')
            break;
        else
        {
            gotoxy(X+9,Y+8);
            printf("\a     ");
            gotoxy(X+9,Y+8);
        }
    }
    gotoxy(X+15,Y+12);
    while(1)
    {
        scanf("%s", blank);
        if(blank[0]=='a'&&blank[1]=='='&&blank[2]=='='&&blank[3]=='0')
            break;
        else
        {
            gotoxy(X+14,Y+12);
            printf("\a     ");
            gotoxy(X+14,Y+12);
        }
    }
    fclose(fp);
    system("clear");
}


