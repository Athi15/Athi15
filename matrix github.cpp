/* program in c to generate 2D array of 3x3 and print the matrix.*/
#include<stdio.h>
int main()
{int arrdata[3][3];
printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
printf("------------------------------------------------------\n");
    printf("Enter elements :\n");
    for(int k=0;k<3;k++)
    {   for(int m=0;m<3;m++)
       {    printf("Element - [%d],[%d] : ",k,m);
            scanf("%d",&arrdata[k][m]);
       }
   } 
   printf("\nThe matrix is : \n");
   for(int k=0;k<3;k++)
  {    printf("\n");
  	   for(int m=0;m<3;m++)
  	       printf("%d\t",arrdata[k][m]);
  }
 printf("\n\n");
}
