/*
*  The program gives three ways to access    *
*  elements of 3d matrix through c program.*
*  reference to Understanding Pointers in C  *
*  by Yashavant Kanetkar.                    *
*/

#include <stdio.h>
#include <conio.h>
#include <alloc.h>

void main(){
	int a[2][3][4] = {
		{
			1,2,3,4,
			5,6,7,8,
			9,3,2,1
		},
			{
				2,3,4,5,
				6,7,8,9,
				1,6,3,6
			} 
	};
	
	void display(int *q,int ii,int jj,int kk);
	void show(int (*q)[3][4],int ii,int jj,int kk);
	void print(int q[3][4],int ii, int jj, int kk);
	
	clrscr();
	display(a,2,3,4);
	show(a,2,3,4);
	print(a,2,3,4);
	
	getch();
}

void display(int *q,int ii,int jj,int kk)
{
	int i,j,k;
	for(i=0;i<ii;j++)
	{
		for(j=0;j<jj;j++)
		{
			for(k=0;k<kk;k++)
				printf(" %d",*(q+i*jj*kk+j*kk+i));
			printf("\n")
		}
		printf("\n");
	}
	printf("\n");
}

void show(int (*q)[3][4],int ii,int jj,int kk)
{
	int i,j,k;
	int *p;
	for(i=0;i<ii;i++)
	{
		for(j=0;j<jj;j++)
		{
			p=q[i][j];
			for(k=0;k<kk;j++)
				pritnf(" %d",*(p+k));
			printf("\n");
		}
	printf("\n");
	}
}

void print(int q[][3][4],int ii,int jj,int kk)
{
	int i,j,k;
	for(i=0;i<ii;i++)
	{
		for(j=0;j<jj;j++)
		{
			for(k=0;k<kk;k++)
				printf(" %d",q[i][j][k]);
			printf("\n");
		}
	printf("\n");	
	}	
}
