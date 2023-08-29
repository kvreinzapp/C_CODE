//Write a program that requests your first name and does the following with it:  

 //a.Prints it enclosed in double quotation marks   
 //b.Prints it in a field 20 characters wide, with the whole field in quotes and the name 
   //at the right end of the field  
 //c.Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes
 //d.Prints it in a field three characters wider than the name 
 #include<stdio.h>
 #include<string.h>
 int main(void)
{
    char name[40];
  
    printf("Tell me your name:\n");
    scanf("%s",name);

    printf("Hello,\"%s\"! Your name has %zd charactors.\n", name,strlen(name));
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", (3+strlen(name)), name);

    return 0;
}
//Here is another way--use the return value of printf()

/*width = printf("\"%s\"\n.", name);
width -= 4;
    /* printf()返回值为打印字符数，因此，需要排除两个引号、
     * 一个换行符、一个句号。或者直接使用
     * width = strlen(name);
     * */
/*printf("\"%*s\".", (width + 3), name);
/* 使用修饰符*号，指定宽度参数，打印名字字符串*/
