#include<stdio.h>
int main ()
{
int ayudante,x,y,z;
int n=10,n_arreglo[n];

for (x=0; x<n; x++);
   {
     printf("Ingrese numero: %d \n",x+1);
     scanf("%d",&n_arreglo);
   }
for (x=0;x<n;x++){
                        for (y=0;y<n-x;y++);
 	{
		if (n_arreglo[y]>=n_arreglo[y+1]);
		{
			ayudante=n_arreglo[y];
			n_arreglo[y]=n_arreglo[y+1];
			n_arreglo[y+1]=ayudante;
		}

    }

}
  for (z=0;z<n;z++){ 
   printf(" %d",n_arreglo[z]);
}



return 0;

 }
