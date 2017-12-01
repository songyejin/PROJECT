#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title(void);
void content(void);
void map_explanation(void);
void map_practice(void);

void chapter1(void);

void chapter3_e(void);
void chapter3_p(void);
void chapter5(void);

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
    char ch[80];
    int res;
    gotoxy(x,y); printf(" ■■■■     ■■■■   ■■■■   ■■■■    ■■■  ■■■■     ■    ■     ■ ■     ■ ■■■■■ ■    ■  ■■■");
    gotoxy(x,y+1); printf("■         ■   ■  ■   ■ ■    ■ ■      ■   ■   ■ ■   ■■   ■■ ■■   ■■   ■   ■■   ■ ■");
    gotoxy(x,y+2); printf("■         ■■■■   ■■■■  ■    ■ ■  ■■■ ■■■■   ■■■■■  ■  ■  ■ ■  ■  ■   ■   ■  ■ ■ ■   ■■");
    gotoxy(x,y+3); printf("■         ■      ■  ■  ■    ■ ■    ■ ■  ■   ■   ■  ■     ■ ■     ■   ■   ■    ■ ■    ■");
    gotoxy(x,y+4); printf(" ■■■■     ■      ■   ■  ■■■■    ■■■  ■   ■ ■     ■ ■     ■ ■     ■ ■■■■■ ■    ■  ■■■");
    gotoxy(x,y+6); printf("START(Please Enter 's' Key and 'enter' key to Start..)");
    
    while(1)
    {
        fgets(ch, sizeof(ch), stdin);
        ch[strlen(ch)-1]='\0';
        if(strncmp(ch, "s", strlen(ch))==0)
            break;
    }
}

void content(void)
{
    int sel;
    int ch1=0;
    int ch2=0;
    int ch3=0;
    int ch4=0;
    int ch5=0;
    int ch6=0;

    printf("==============CONTENT===============\n");
    printf("chapter1(%d %%)\n", ch1);
    printf("chapter2(%d %%)\n", ch2);
    printf("chapter3(%d %%)\n", ch3);
    printf("chapter4(%d %%)\n", ch4);
    printf("chapter5(%d %%)\n", ch5);
    printf("chapter6(%d %%)\n", ch6);
    printf("\n");
    printf("Plesas press the chapter number you wish to study : ");
    scanf("%d", &sel);
    system("clear");
    map_explanation();
    switch(sel)
    {
        case 3:
        chapter3_e();
        system("clear");
        map_practice();
        chapter3_p();
    }
}

void map_explanation(void)
{
    int i;
    
    for(i=x; i<150; i++)
    {
        gotoxy(i,y); printf("■");
        gotoxy(i,y+25); printf("■");
    }
    for(i=x; i<=y+25; i++)
    {
        gotoxy(x, i); printf("■");
        gotoxy(150, i); printf("■");
    }
}

void map_practice(void)
{
    int i;

    gotoxy(x, y); printf("LET's PRACTICE");

    for(i=x;i<100;i++)
    {
        gotoxy(i, y+1); printf("□");
        gotoxy(i, y+25); printf("□");
    }
}

void chapter3_e(void)
{
    char e;

    gotoxy(x+2,y+1); printf("CHAPTER3. VARIABLE");
    gotoxy(x+2,y+2); printf("3.1.1 Variable declaration method");
    gotoxy(x+2,y+4); printf("The method of declaring variables is simple.");
    gotoxy(x+2,y+5); printf("YOu can use the name of the data type and the variables that match the type of data.");
    gotoxy(x+2,y+6); printf("For example, the variable to which you want to store an integer is declared as follows.");
    gotoxy(x+2,y+8); printf(" int a;  //int-type variable declaration");
    gotoxy(x+2,y+10); printf("This sentence tells the compiler that the space to store the integer is 4 bytes in memory and that it will be written by a name called A.");
    gotoxy(x+2,y+11); printf("After you have declared a variable, you can save, calculate, or use the value with the variable name.");
    gotoxy(100, 25); printf("NEXT(Press space) => ");
    
    while(1)
    {
        scanf("%c", &e);
        if(e==32)
            break;
    }

}

void chapter3_p(void)
{
    gotoxy(x+2, y+2); printf("#include <stdio.h>");
    gotoxy(x+2, y+4); printf("int main(void){");
    gotoxy(x+2, y+5); printf("int a;    // int-type variable declaration");
    gotoxy(x+2, y+6); printf("double da;    // double-type variable declaration");
    gotoxy(x+2, y+7); printf("char ch;    // char-type variable declaration");
    gotoxy(x+2, y+9); printf("a = 10;    //");
    gotoxy(x+2, y+10); printf("da = 3.5;    //");
    gotoxy(x+2, y+11); printf("ch = 'A';    //");
}
