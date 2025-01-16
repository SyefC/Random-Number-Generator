//////////////////////////////////////////////////
#include<stdio.h>////Libraly
#include<time.h>////Libraly
#include<stdlib.h>////Libraly
#include<string.h>///Libraly
//////////////////////////////////////////////////
int main(){
srand(time(NULL));
int b;
char c[5];
printf("0 To ?:\n");
scanf("%d",&b);
getchar();
printf("type y or n (y for yes n for no\n");
printf("Would You Like To Roll Now\n?");
fgets(c,5,stdin);
if(strcmp(c,"y\n") == 0){
int a = rand() % b;
printf("%d\n",a);
return 0;
}
}
