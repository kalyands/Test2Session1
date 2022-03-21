#include<stdio.h>
#include<math.h>
typedef struct pointpoint{
    float x,y;
}point;
typedef struct line{
    point p1,p2;
    float distance;
}line;
point input_point(){
    point z;
    printf("Enter the co-ordinates of the points\n");
    scanf("%f %f",&z.x,&z.y);
    return z;
}
line input_line(){
        line l;
        l.p1=input_point();
        l.p2=input_point();
        return l;
}
void find_lenght(line *l){
    l->distance=sqrt(((l->p1.x - l->p2.x)*(l->p1.x - l->p2.x))+((l->p1.y - l->p2.y)*(l->p1.y - l->p2.y)));
}
void output(line *l){
    printf("The length of the line is %f",l->distance);
}
int main(){
    line l;
    l=input_line();
    find_lenght(&l);
    output(&l);
    return 0;
}