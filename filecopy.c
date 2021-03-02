#include <stdio.h>
main(int argc, char *argv[]) {
FILE *fp1,*fp2; char buff[1000]; char ch; if(argc != 3 )
{
printf("At least two arguments required"); printf("%s sourcefile destfile \n",argv[0]); return;
}
fp1 = fopen(argv[1], "r");

fp2 = fopen(argv[2], "w");


while (c=fgetc(fp1) != EOF)
{
fputc(c, fp2); 
}
printf("File Copied"); fclose(fp1);// close file fclose(fp2);// close file
}
