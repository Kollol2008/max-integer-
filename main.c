#include<stdio.h>
int main(){


int arr[]={-99, 45, 100, 37, 89, -327, 245};
  int max = arr[0],i; //for zero index.

for(i=1;i<7;i++){

    if(arr[i]>max)
        max=arr[i]; //for update the value.
}
   printf("%d\n",max); //print outside the of the loop


return 0;
}
