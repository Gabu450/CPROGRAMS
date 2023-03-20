#include <stdio.h>
int main(){
int a,b,c;
a=6,b=5,c=10;
if(a>b){
if(b>c)
printf("n Greatest is :",a);
else if(c>a){
printf("n Greatest is:",c);
}
}
else if(b>c){
prinf("n Greatest is:",b);
}
else{
printf("n Greatest is:",c);
}
return 0;
}