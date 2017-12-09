void chapter3_e1(void);
void chapter3_e2(void);
void chapter3_e3(void);
void chapter3_p1(void);
void chapter3_p3(void);
void chapter3_r1(void);
void chapter3_r3(void);

void chapter3_e1(void)   //(1)chapter3 ¼³¸í1
{
    //char e;    (ÀÓ½Ã) ¿£ÅÍ´©¸£¸é ³Ñ¾î°¡´Â
    gotoxy(x+2,y+1); printf("CHAPTER3. VARIABLE");
    gotoxy(x+2,y+2); printf("3.1 Variable");
    gotoxy(x+2,y+4); printf("The method of declaring variables is simple.");
    gotoxy(x+2,y+5); printf("YOu can use the name of the data type and the variables that     match the type of data.");
    gotoxy(x+2,y+6); printf("For example, the variable to which you want to store an inte    ger is declared as follows.");
    gotoxy(x+2,y+8); printf(" int a;  //int-type variable declaration");
    gotoxy(x+2,y+10); printf("This sentence tells the compiler that the space to store th    e integer is 4 bytes in memory and that it will be written by a name called A.");
    gotoxy(x+2,y+11); printf("After you have declared a variable, you can save, calculate    , or use the value with the variable name.");
    //gotoxy(100, 25); printf("NEXT(Press space) => ");

    //while(1)
    //{
    //    scanf("%c", &e);
    //    if(e==32)
    //        break;
    //}
}

void chapter3_e2(void)     //(4)chapter3 ¼³¸í2
{
    gotoxy(x+2,y+4); printf("The variable declaration location must follow the following     rules.");
    gotoxy(x+2,y+6); printf("*Declares from the blocks in curly brackets to use them from     the location of the blocks to the end of the block.");
    gotoxy(x+2,y+7); printf("*Depending on the compiler, the declaration location of the     variable may be limited.");
    gotoxy(x+2,y+8); printf("*If the data type is the same, you can simultaneously declar    e more than one variable.");
    gotoxy(x+2,y+9); printf("*The substitution operator stores the value to the right of     the variable to the left of the operator.");
    gotoxy(x+2,y+10); printf("*The variable is the storage space on the left side of the     substitution operator and the value is on the right.");
    gotoxy(x+2,y+12); printf("GARBAGE VALUE AND INITIALIZAION");
    gotoxy(x+2,y+13); printf("*When you proclaim a variable, the garbage value is initial    ly stored.");
    gotoxy(x+2,y+14); printf("*Initialization is the first value to be introduced to elim    inate waste prices.");
    gotoxy(x+2,y+15); printf("*Using an uninitialized variable outputs a warning message.    ");
    gotoxy(x+2,y+16); printf("---------------------------------------------------");
    gotoxy(x+2,y+17); printf("warning C4700: Uses an uninitiated region variable.");
    gotoxy(x+2,y+18); printf("---------------------------------------------------");
}

void chapter3_e3(void)      //(5)chapter3 ¼³¸í3
{
    gotoxy(x+2,y+2); printf("3.2 DATA INPUT");
    gotoxy(x+2,y+4); printf("Use the scanf function when entering data into a variable fr    om the keyboard.");
    gotoxy(x+2,y+5); printf("*Use a transform character that matches the shape of the var    iable, and add an '&' to the variable that you want to enter.");
    gotoxy(x+2,y+6); printf("*The scanf function may not be able to enter data if the con    version character and input type are different.");
    gotoxy(x+2,y+7); printf("When entering a string, do not add an & symbol to the name o    f the array.");
    gotoxy(x+2,y+8); printf("If you enter a string that is larger than the size of the ch    ar array, the program may end abnormally.");
}

chapter3_p1(void)       //(2)¼³¸í1ÈÄ ½Ç½À
{
    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void){");
    gotoxy(x+2,y+5); printf("int a;    // int-type variable declaration");
    gotoxy(x+2,y+6); printf("double da;    // double-type variable declaration");
    gotoxy(x+2,y+7); printf("char ch;    // char-type variable declaration");
    gotoxy(x+2,y+9); printf("a = 10;    //");
    gotoxy(x+2,y+10); printf("da = 3.5;    //");
    gotoxy(x+2,y+11); printf("ch = 'A';    //");
    gotoxy(x+2,y+12); printf("printf(\"Values of variable 'a': %%d\\n\", a);");
    gotoxy(x+2,y+13); printf("printf(\"Values of variable 'da' : %%.1lf\\n\", da);");
    gotoxy(x+2,y+14); printf("printf(\"Values of variavle 'ch' : %%c\\n\", ch);");
    gotoxy(x+2,y+16); printf("return 0;");
    gotoxy(x+2,y+17); printf("}");
}

void chapter3_p3(void)  //(6)¼³¸í3ÈÄ ½Ç½À (ºóÄ­¸ÂÃß±â)
{
   // char a, b;

    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void){");
    gotoxy(x+2,y+5); printf("char fruit[20];");
    gotoxy(x+2,y+6); printf("int cnt;");
    gotoxy(x+2,y+8); printf("printf(\"favorite fruit : \");");
    gotoxy(x+2,y+9); printf("scanf(\"%%s\",");   //ºóÄ­
    //scanf("%s", &a);     
    gotoxy(x+2,y+10); printf("number : ");
    gotoxy(x+2,y+11); printf("scanf(\"%%d\",");     //ºóÄ­
    //scanf("%s", &b);           
    gotoxy(x+2,y+12); printf("printf(\"I have %%d %%s. \", fruit, cnt);");
    gotoxy(x+2,y+14); printf("return 0;");
}

void chapter3_r1(void) //(3)½Ç½À1 ºóÄ­ Á¤´ä¸ÂÃß±â
{
    int a;
    double b;
    char c;

    gotoxy(x+2, y+26); printf("EXECUTION RESULT(");                                      
    gotoxy(x+2, y+28); printf("Values of variable 'a' : "); /*ºóÄ­*/ scanf("%d", &a);        gotoxy(x+2, y+29); printf("Values of variable 'da' : "); /*ºóÄ­*/  scanf("%lf", &b);
    gotoxy(x+2, y+30); printf("Values of variable 'ch' : "); /*ºóÄ­*/ scanf("%c", &c); 
}

void chapter3_r3(void) //(7)½Ç½À3 ½ÇÇà°á°ú
{
    gotoxy(x+2,y+26); printf("EXECUTION RESULT");
    gotoxy(x+2,y+28); printf("favorite fruit : mango");
    gotoxy(x+2,y+27); printf("number : 3");
    gotoxy(x+2,y+28); printf("I have 3 mango.");
}
