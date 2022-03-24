#include<stdio.h>
int input(){
    int n;
    printf("Enter the nth position of the sequence\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n){
    int T1=0;
    int T2=1;
    int nextTerm;
    for(int i=1;i<=n-1;i++){
    nextTerm=T1+T2;
    T1=T2;
    T2=nextTerm;
    }
    return T1;
}
void output(int n,int fibo){
    printf("The %dth position in the sequence is %d",n,fibo);
}
int main(){
    int n;
    n=input();
    int fibo;
    fibo = find_fibo(n);
    output(n,fibo);
    return 0;

}