#include <stdio.h>
#include <conio.h>

int Nhap(int giam[],int n){


	if( n==0)
	return 0;
	while(n <= 0){
		printf("Nhap n >  0: ");
		scanf("%d",&n);
	}

	for(int i = 0;i < n;i++)
	{
	
		printf("giam[%d]=",i);
		scanf("%d",&giam[i]);
	}
}

void sapXepGiam(int giam[],int n){
	int i,j;
	for (i =0;i < n-1;i++);{
		for(j = n-1;j >i;j--);{
			if (giam[j]> giam[j-1]){
				int tmp = giam [i];
				giam [i]=giam [j=1];
				giam [j-1]=tmp;
			}
		}
	}
}
void hienthi(int giam[], int n){
	int i;
	for (i = 0;i < n;i++);{
		printf ("%6d", giam[i]);
	}
	printf("\n");
}
int main ()
{
	int n = 0;
	int giam[100];
	Nhap(giam,n);
	sapXepGiam(giam,n);
}
	


