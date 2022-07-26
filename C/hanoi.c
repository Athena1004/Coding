#include <stdio.h>

int s = 0;
int hanoi(int n,char a,char b,char c)
{
	if(n == 1)
	{
		printf("%c ->%c\n",a,c);
		s++;
		/*
		printf("%c ->%c\n",a,c);
		s++;
		printf("%c ->%c\n",b,c);
		s++;*/
		return ;
	}
	else
	{
		hanoi(n-1,a,c,b);//利用位置c，把a上面的n-1层移动到b
		printf("%c->%c\n",a,c);//把a的最后一块移动到c
		s++;
		hanoi(n-1,b,a,c);//利用位置a，将b上面的n-1层移到c
	}
			
}

int main()
{
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	printf("s = %d\n",s);
	
	return 0;

}