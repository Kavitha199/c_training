#include <stdio.h>
main(int argc, char *argv[]) {
FILE *fp1,*fp2; char buff[1000]; char ch; if(argc != 3 )
{
printf("At least two arguments required"); printf("%s sourcefile destfile \n",argv[0]); return;
}
fp1 = fopen(argv[1], "r"); if(fp1 == NULL)
{
printf("Source File Could Not be opened ");

}
fp2 = fopen(argv[2], "w"); if(fp2 == NULL)
{
printf("Cannot create destination File");


}


c = fgetc(fp1); // start reading while (c != EOF)
{
fputc(c, fp2); c = fgetc(fp1);
}
printf("File Copied\n"); fclose(fp1);// close file fclose(fp2);// close file
}
