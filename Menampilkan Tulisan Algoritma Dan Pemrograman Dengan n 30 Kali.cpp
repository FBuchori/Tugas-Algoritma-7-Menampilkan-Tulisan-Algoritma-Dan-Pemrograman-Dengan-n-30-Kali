#include<stdio.h>
#include<conio.h>

int ulang (int n);

int main ( void)
{
	int n;
	printf("masukkan nilai (n) :");
	scanf("%d", &n);
	ulang (n);
	getch ();
	
}

int ulang (int n)
{
	int i;
	for(i=1;i<=n;i++)
	printf("Algoritma Dan Pemrograman\n");
	return (i);
	
}
