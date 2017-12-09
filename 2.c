void chapter1_e1(void);
void chapter1_e2(void);
void chapter1_e3(void);
void chapter1_p3(void);
void chapter1_r3(void);


void chapter1_e1(void)      //(1)chapter1 설명1
{
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
} 

void chapter1_e2(void)       //(2)chapter1 설명2
{
    gotoxy(x+2,y+3); printf("1.2 Completion process of C program");
    gotoxy(x+2,y+4); printf("Overall understanding of C program completion process");
    gotoxy(x+2,y+5); printf("                  1.programming");
    gotoxy(x+2,y+6); printf("                       ↓");
    gotoxy(x+2,y+7); printf("    ──────── →    2.compile");
    gotoxy(X+2,y+8); printf("   │                   ↓");
    gotoxy(x+2,y+9); printf("edit program ←(if yes)error occurred");
    gotoxy(x+2,y+10); printf("   ↑                   ↓(if no)");
    gotoxy(x+2,y+11); printf("   │              3.link");
    gotoxy(x+2,y+12); printf("   │                   ↓");
    gotoxy(x+2,y+13); printf("    ─────────(if yes)error occurred");
    gotoxy(x+2,y+!4); printf("                       ↓(if no)");
    gotoxy(x+2,y+15); printf("                  4.create an executable file");
}

void chapter1_e3(void)        //(3)chapter1 설명3
{
    gotoxy(x+2,y+3); printf("1.3 Entering and Compiling the Source Code");
    gotoxy(x+2,y+5); printf("Now let's write our first program.");
    gotoxy(x+2,y+6); printf("Simply enter the program code that follows.");
    gotoxy(x+2,y+7); printf("Note that you do not know anything about C yet, so you do not have the ability to cope with errors.");
    gotoxy(x+2,y+8); printf("Therefore, care must be taken to avoid typos.");
}

void chapter1_p3(void)        //(4)chapter1 설명3에 이어지는 실습
{
    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void)");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    printf(\"Hello world!\\n\");");
    gotoxy(x+2,y+7); printf("    return 0;");ㅁ
    gotoxy(X+2,y+8); printf("}");
}

void chapter1_r3(void)       //(5)chapter1 실습 답
{
    //#include <stdio.h>

    //int main(void)
    //{
    //    printf("Hello world! \n");
    //    return 0;
    //}

}














    

