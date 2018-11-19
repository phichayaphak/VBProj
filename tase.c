#include<stdio.h>
#include<string.h>

void main(){
	char str1[10]="BIS";
	char str2[10];
	strcpy(str2,str1);//call function
	printf("\n str1=%s\n",str1);
	printf("\n str2=%s\n",str2);
	puts(str1);
	if(strcmp(str1,str2)==0){
		printf("str1=str2");
	}
	strlen(str1);
	printf("\n strlen = %d\n",strlen(str1));
}
