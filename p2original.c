#include<stdio.h>
#include<math.h>
void input_line(float *x1, float *y1,float *x2, float *y2,float *x3, float *y3){
    printf("Enter co-ordinates of point 1\n");
    scanf("%f %f",x1,y1);
    printf("Enter co-ordinates of point 2\n");
    scanf("%f %f",x2,y2);
    printf("Enter co-ordinates of point 3\n");
    scanf("%f %f",x3,y3);
}
int find_distance(float x1, float y1, float x2, float y2){
    float area;
    area=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return area;
}
int is_triangle(float *x1, float *y1,float *x2, float *y2,float *x3, float *y3){
    float a,b,c;
    int istriangle=-1;
    a=find_distance(*x1,*y1,*x2,*y2);
    b=find_distance(*x2,*y2,*x3,*y3);
    c=find_distance(*x3,*y3,*x1,*x2);
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        istriangle=1;
    }
    return istriangle;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle){
    if(istriangle==1){
        printf("The lines form a triange\n");
    }
    else if(istriangle==-1){
        printf("The lines do not form a triangle\n");
    }
}
int main(){
    float x1,y1,x2,y2,x3,y3;
    int istriangle;
    input_line(&x1,&y1,&x2,&y2,&x3,&y3);
    istriangle=is_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    output( x1,y1,x2,y2,x3,y3,istriangle);
    return 0;
}