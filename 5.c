void chapter5_e1(void);
void chapter5_e2(void);
void chapter5_e3(void);
void chapter5_e4(void);
void chapter5_p1(void);
void chapter5_p4(void);
void chapter5_r4(void);


void chapter5_e1(void)  //(1)chapter5 ¼³¸í1
{
    gotoxy(x+2,y+1); printf("CHAPTER5. CHOICE STATEMENT");
    gotoxy(x+2,y+2); printf("5.1 IF STATEMENT");
    gotoxy(x+2,y+4); printf("If you write an if statement, you can pick a statement to ex    ecute according to the condition.");
    gotoxy(x+2,y+5); printf("(1) Basic form of if statement");
    gotoxy(x+2,y+6); printf("if(Conditional expression)    choice statement;");
    gotoxy(x+2,y+7); printf("If conditional is true, execute statement. If false, do noth    ing");
    gotoxy(x+2,y+8); printf("if (a>10)   ->conditional expression");
    gotoxy(x+2,y+9); printf("{");
    gotoxy(x+2,y+10); printf("     b=a        ->Execution Statement");
    gotoxy(x+2,y+11); printf("}");
    gotoxy(x+2,y+12); printf("If the sentence to be executed is two or more sentences, it     must be enclosed in curly braces.");
    gotoxy(x+2,y+13); printf("1)");
    gotoxy(x+2,y+14); printf("if(a>10)");
    gotoxy(x+2,y+15); printf("{");
    gotoxy(x+2,y+16); printf("    b=a     //assign a to b");
    gotoxy(x+2,y+17); printf("    printf(\"a and b are equal\");      //output the result    ");
    gotoxy(x+2,y+18); printf("}");
    gotoxy(x+2,y+19); printf("2)");
    gotoxy(x+2,y+20); printf("if (a>10)");
    gotoxy(x+2,y+21); printf("    b=a;      //Here is the if statement");
    gotoxy(x+2,y+21); printf("printf(\"a and b are equal\");      //run as an independent     statement with an if statement");
}

void chapter5_e2(void)    //(3)chapter5 ¼³¸í2
{
    gotoxy(x+2,y+4); printf("(2) if ~ else statement");
    gotoxy(x+2,y+5); printf("The if ~ else statement is used when you must choose one or     the other");
    gotoxy(x+2,y+6); printf("if(a>=0)    ->conditional expression");
    gotoxy(x+2,y+7); printf("{");
    gotoxy(x+2,y+8); printf("    a=1;    ->execution Statement1");
    gotoxy(x+2,y+9); printf("}");
    gotoxy(x+2,y+10); printf("else");
    gotoxy(x+2,y+11); printf("{");
    gotoxy(x+2,y+12); printf("    a=-1;    ->execution Statement2");
    gotoxy(x+2,y+13); printf("}");
    gotoxy(x+2,y+14); printf("The conditional is not used in the if-else statement else."    );
    gotoxy(x+2,y+15); printf("(3) if ~ else if ~ else statement");
    gotoxy(x+2,y+16); printf("If you must select one of three or more statements, use an     if ~ else if ~ else statement.");
    gotoxy(x+2,y+17); printf("if(a>0)      ->Conditional expression1)");
    gotoxy(x+2,y+18); printf("{");
    gotoxy(x+2,y+19); printf("    b=1      ->Execution Statement1");
    gotoxy(x+2,y+20); printf("}");
    gotoxy(x+2,y+21); printf("else if(a==0) ->Conditional expression2");
    gotoxy(x+2,y+22); printf("{");
    gotoxy(x+2,y+23); printf("    b=2;      ->Execution Statement2");
    gotoxy(x+2,y+24); printf("}");
    gotoxy(x+2,y+25); printf("else");
    gotoxy(x+2,y+26); printf("{");
    gotoxy(x+2,y+27); printf("    b+3;      ->Execution Statement3");
    gotoxy(x+2,y+28); printf("}");
    gotoxy(x+2,y+29); printf("If the sentence to run under each condition is more than two sentences, enclose it with curly brackets.");
    gotoxy(x+2,y+30); printf("The result of the previous condition is reflected because i    t checks the conditional expression in order.");
}

void chapter5_e3(void) //(4)chapter5 ¼³¸í3
{
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
    gotoxy(x+2,y+12); printf("        b=-1;")
        gotoxy(x+2,y+13); printf("    }");
    gotoxy(x+2,y+14); printf("}");
}

void chapter5_e4(void)   //(5)chapter5 ¼³¸í4
{
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
    gotoxy(x+2,y+16); printf("Conditional expressions use only integer expressions, and t    he case involves break.");
    gotoxy(x+2,y+17); printf("If there is no case invariable that matches the conditional     expression, it skips to default.");
    gotoxy(x+2,y+18); printf("'break' can be omitted if necessary.");
    gotoxy(x+2,y+19); printf("The switch ~ case statement can sometimes be replaced with     an if statement to achieve the same result.");
}

void chapter5_p1(void)   //(2)¼³¸í1ÈÄ ½Ç½À(ºóÄ­ ¸ÂÃß±â) p144
{
    gotoxy(x+2,y+2); printf("Let's fill in the blanks of the if statement to meet the fol    lowing conditions.");
    gotoxy(x+2,y+3); printf(".If the chest circumference is less than or equal to 90, sel    ect S");
    gotoxy(x+2,y+4); printf(".If the chest circumference is greater than 90 and less than     or equal to 100,");
    gotoxy(x+2,y+5); printf(".If the chest circumference is greater than 100, select L");
    gotoxy(x+2,y+7); printf("int chest = 95;     //Variable to store chest size");
    gotoxy(x+2,y+8); printf("char size;          //The variable that determines the size     of the garment and stores it.");
    gotoxy(x+2,y+10); printf("if(");  //ºóÄ­ 
    gotoxy(x+2,y+11); printf("{");
    gotoxy(x+2,y+12); printf("    size='S';");
    gotoxy(x+2,y+13); printf("}");
    gotoxy(x+2,y+14); printf("else if(");    //ºóÄ­
    gotoxy(x+2,y+15); printf("{");
    gotoxy(x+2,y+16); printf("    size='M';");
    gotoxy(x+2,y+17); printf("}");
    gotoxy(x+2,y+18); printf("else");
    gotoxy(x+2,y+19); printf("{");
    gotoxy(x+2,y+20); printf("    size='S';");
    gotoxy(x+2,y+21); printf("}");
}

void chapter5_p4(void) //(6) ¼³¸í4ÈÄ ½Ç½À
{
    gotoxy(x+2,y+2); printf("#include <stdio.h>");
    gotoxy(x+2,y+4); printf("int main(void);");
    gotoxy(x+2,y+5); printf("{");
    gotoxy(x+2,y+6); printf("    int n;");
    gotoxy(x+2,y+8); printf("    printf(\"input integer : \");");
    gotoxy(x+2,y+9); printf("    scanf(\"%%d\", &n);");
    gotoxy(x+2,y+11); printf("    switch(n % 3)");
    gotoxy(x+2,y+12); printf("    {");
    gotoxy(x+2,y+13); printf("    case 0:");
    gotoxy(x+2,y+14); printf("        printf(\"false\")");
    gotoxy(x+2,y+15); printf("        break;");
    gotoxy(x+2,y+16); printf(""); //ºóÄ­
    gotoxy(x+2,y+17); printf("        printf(\"true\");");
    gotoxy(x+2,y+17); printf("        break;");
    gotoxy(x+2,y+18); printf("    }");
    gotoxy(x+2,y+20); printf("    return 0;");    
}

void chapter5_r4(void)   //(7) ½Ç½À4 ´ä
{
    gotoxy(x+2,y+26); printf("[Execution result 1]");
    gotoxy(x+2,y+27); printf("input integer : 1 ");
    gotoxy(x+2,y+28); printf("true");
    gotoxy(x+2,y+30); printf("[Execution result 2]");
    gotoxy(x+2,y+31); printf("inpur integer : 3 ");
    gotoxy(x+2,y+32); printf("false");
}

