#include<stdio.h>
#include<math.h>
int input_number(){
    int a;
    printf("Enter the number to be verified\n");
    scanf("%d",&a);
    return a;
}
int is_prime(int n){
    int prime=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime=-1;
        }
        else {
            prime=1;
        }
    }
    return prime;
}
void output(int n, int prime){
    if(prime==1){
        printf("The number %d is a prime",n);
    }
    else if(prime==-1){
        printf("The number %d is not a prime",n);
    }
}
int main(){
    int a,prime;
    a=input_number();
    prime=is_prime(a);
    output(a,prime);
    return 0;

} 