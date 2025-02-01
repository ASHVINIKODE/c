#include<stdio.h>
#include<math.h>
float f(float x){
    return(1/(1+x*x));
}
int main(){
    printf("\t\t\tOutput\n");
    printf("\t\t**********\n");
    int n,i;
    float t,a,b,h,s=0;
    printf("Enter the value of upper limit and lower limit:\n");
    scanf("%f %f",&a,&b);
    printf("Enter the number of subintervals:\n");
    scanf("%d",&n);
    h=(b-a)/n;
    for(i=1;i<n-1;i++){
        s=s+f(a+i*h);
    }
    t=(n/2)*f(a)+f(b)+2*s;
    printf("The result is:%.4f",t);
    return 0;
}