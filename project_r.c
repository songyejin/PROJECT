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
void a(char *str,char *res, FILE *fp);
#define X_N 135
#define Y_N 28
int x=5;
int y=5;

int ch1;
int ch2;
int ch3;
int ch4;
int ch5;

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

    gotoxy(x,y); printf(" @@@@@    @@@@@   @@@@  @@@@   @@@  @@@@     @    @     @ @     @ @@@@@ @    @  @@@");
    gotoxy(x,y+1); printf("@         @   @  @   @ @    @ @     @   @   @ @   @@   @@ @@   @@   @   @@   @ @");
    gotoxy(x,y+2); printf("@         @@@@   @@@@  @    @ @  @@ @@@@@  @@@@@  @  @  @ @  @  @   @   @  @ @ @  @@");
    gotoxy(x,y+3); printf("@         @      @  @  @    @ @   @ @  @   @   @  @     @ @     @   @   @    @ @   @");
    gotoxy(x,y+4); printf(" @@@@@    @      @   @  @@@@   @@@  @   @ @     @ @     @ @     @ @@@@@ @    @  @@@");
    gotoxy(x+80,y+5); printf("For beginners");
    gotoxy(x,y+8); printf("START(Please Enter 'enter' key to Start..)");

    scanf("%c", &ch); 

}

int content(void)  
{
    FILE *fp;

    int sel;
    char str[100];
    char *res=str;
    int i;

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
        switch(sel)
        {
            case 1:
                fp=fopen("chapter1.txt", "r");
                a(str,res,fp);
                map_practice();
                chapter1_p3();
                chapter1_r3();
                chapter1_r4();
                ch1=100;
                break;
            case 2:
                fp=fopen("chapter2.txt", "r");
                a(str,res,fp);
                map_practice();
                chapter2_p();
                ch2=100;
                break;
            case 3:
                fp=fopen("chapter3.txt", "r");
                a(str,res,fp);
                map_practice();
                chapter3_p();
                ch3=100;
                break;
            case 4:
                fp=fopen("chapter4.txt", "r");
                a(str,res,fp);
                map_practice();
                chapter4_p();
                ch4=100;
                break;
            case 5:
                fp=fopen("chapter5.txt", "r");
                a(str,res,fp);
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

void a(char *str,char *res, FILE *fp)
{
    int i;
    while(1)
    {
        map_explanation();
        if(fgets(str,100,fp)==NULL)
            break;
        while(fgets(str,100,fp)!=NULL)
        {
            if(res[0]=='~')
            {
                break;
            }
            gotoxy(x+2,y+2); printf("%s",str);
            y++;
        }
        gotoxy(X_N,Y_N);
        while(1)
        {
            scanf("%d", &i);
                if(i==1)
                    break;
        }
        system("clear");
        y=5;
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




void chapter1_p3(void) 
{
    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    printf(\"Hello world!\\n\");");
    gotoxy(x+2,y+7); printf("    return 0;");
    gotoxy(x+2,y+8); printf("}");
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
                if(strcmp(blank,"#include <stdio.h>")==0)
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
    system("clear");
}


void chapter3_p(void)
{
    char blank[80];

    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    double avg;");
    gotoxy(x+2,y+7); printf("    char grade;");
    gotoxy(x+2,y+9); printf("    avg = 84.5;");      
    gotoxy(x+2,y+10); printf("    grade = 'B';");
    gotoxy(x+2,y+12); printf("    printf(\"average : [     ]\\n\", avg);");    
    gotoxy(x+2,y+13); printf("    printf(\"grade : [     ] \", grade);");    
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
}

                                
