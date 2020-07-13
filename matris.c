#include <stdio.h>
#include <stdlib.h>


void setvalue(double row,double column,double **array)
{
	int i,j;
    for(i=0; i<row; i++)
 {
	for(j=0; j<column; j++) {
		printf("enter the value:");
		scanf("%lf",&array[i][j]);
		
	}
	
 } 
}

	void display(double row,double column,double **array)
{
	
    int i,y;
    printf ("\nThis is your matrix table\n");
	for(i=0; i<row; i++)
	{
		for(y=0; y<column; y++)
		{
		    
			printf("%4.lf",array[i][y]);
		}
		printf("\n");
	}
	
}

void sum(double row,double column,double **array)
{
	int z,y,m,k;
	double *vcolumn;
	double *vrow;
	
	vrow=(double*)malloc(sizeof(double)*row);

	
	for(z=0; z<row; z++)
	{
		for(y=0; y<column; y++)
		{
		 vrow[z]+=array[z][y];
		}
		
	}
	vcolumn=(double*)malloc(sizeof(double)*column);
		for(z=0; z<row; z++)
	{
		for(y=0; y<column; y++)
		{
		 vcolumn[z]+=array[y][z];
		}
		
	}

           //Display of the sum of rows and columns
           printf("\n \n");
	for(m=0; m<row; m++)
	{
		printf("sum of the row : %.1lf\n ",vrow[m]);
	}
	printf("\n\n\n");
	
	for(k=0; k<column; k++)
	{
		printf("sum of the column : %.1lf\n",vcolumn[k]);
	}
	
	printf("\n");
	
}

void clearmatrix(double row,double column,double **array)
{
	double interval1,interval2;
	int a,y,z;
            printf("*****************************\n\n");
		 	printf("please, you determine interval\n");
			printf(" for the values to be zero\n\n\n");
		
	printf("please enter the first interval:\n");
	scanf("%lf",&interval1);
	printf("please enter the second interval:\n");
	scanf("%lf",&interval2);

	for(a=0; a<row; a++)
	{
		for(y=0; y<row; y++)
		{
		if(array[a][y]>=interval1 && array[a][y]<=interval2)
			{
			
				array[a][y]=0;
			}
			
		}
	}
	printf ("\nThis is your new matrix table\n");
		for(z=0; z<row; z++)
	{
		for(y=0; y<column; y++)
		{
			printf("%4.lf ",array[z][y]);
			
		}
		printf("\n");
	}	
	
	
}

int main(int argc, char *argv[]) {

 double **array;
	int i,j;
	int row,column;
	printf("enter the row:");
	scanf("%d",&row);
	
	printf("enter the column:");
	scanf("%d",&column);
	
	array=(double**)malloc(sizeof(double*)*row);
	for(i=0; i<row; i++)
	{
		array[i]=(double*)malloc(sizeof(double)*column);
	}
	
	setvalue(row,column,array);
	display(row,column,array);
	sum(row,column,array);
	clearmatrix(row,column,array);
	
	

	
		return 0;
}
