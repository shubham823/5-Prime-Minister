#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{	char c;
	FILE *fp;
	
		int n;
		printf("abour which prime minister you would like to know \n");
		printf("1-> jawaharlal nehru \n");
		printf("2-> Lal bhadur shastri \n");
		printf("3-> Indira Gandhi \n");
		printf("4-> Morarji Desai \n");
		printf("5-> Charan Singh \n");
		printf("6-> exit\n \t");
		scanf("%d",&n);
		switch(n)
		{
		case 1:fp=fopen("1.txt","r");
				do
				{
				c=fgetc(fp);
				printf("%c",c);
				}while(c!=-1);
			fclose(fp);
			getch();
			break;
		case 2:fp=fopen("2.txt","r");
				do
				{
				c=fgetc(fp);
				printf("%c",c);
				}while(c!=-1);
			fclose(fp);
			getch();
			break;
		case 3:fp=fopen("3.txt","r");
				do
				{
				c=fgetc(fp);
				printf("%c",c);
				}while(c!=-1);
			fclose(fp);
			getch();
			break;
		case 4:fp=fopen("4.txt","r");
				do
				{
				c=fgetc(fp);
				printf("%c",c);
				}while(c!=-1);
			fclose(fp);
			getch();
			break;
		case 5:fp=fopen("5.txt","r");
				do
				{
				c=fgetc(fp);
				printf("%c",c);
				}while(c!=-1);
			fclose(fp);
			getch();
			break;
		case 6: exit(0);
		}



}