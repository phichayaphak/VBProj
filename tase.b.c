
char showGrade(int score)
void prt_head();
int my_sum(int i,int j);

void main(){
	char myGrade;
	int i;
	printf("Input score :");
	scanf("%d"&i);
	myGrade = showGrade(i);
	putchar(myGrade);
	
}
