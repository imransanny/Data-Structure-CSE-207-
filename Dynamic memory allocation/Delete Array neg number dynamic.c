#include<stdio.h>
#include<stdlib.h>

int deletNegNum(int n, int *p){
int i;

for(i=0 ; i<n ; i++){
    if(p[i]<0){
        p[i] = NULL;
       free(p[i]);
        //p[i] = p[i+1];
    }
}
for(i=0 ; i<n ;i++){
   if(p[i] != NULL){
    printf("%d", p[i]);
}
}
}



int main(){
int i, *p, n;
printf("Enter the total size of array : ");
scanf("%d", &n);
printf("Enter the input number: \n");
p= (int *) malloc (n* sizeof(int));
for(i=0 ; i<n ; i++){
    scanf("%d", &p[i]);
}
deletNegNum(n, p);
}
