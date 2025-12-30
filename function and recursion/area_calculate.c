#include<stdio.h>
#include<math.h>

float squareArea(float side);
float rectangleArea(float length,float breadth);
float circleArea(float radius);

int main(){
    float side,length,breadth,radius;
    printf("enter the side of the square:");
    scanf("%f",&side);

    printf("Area of square :%.2f\n",squareArea(side));

    printf("enter the length and breadth of rectangle:");
    scanf("%f %f",&length,&breadth);

    printf("Area of rectangle:%.2f\n",rectangleArea(length,breadth));

    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    printf("Area of circle:%.2f\n",circleArea(radius));

    return 0;
}

float squareArea(float side){
    return side*side;
}

float rectangleArea(float length,float breadth){
    return length*breadth;
}

float circleArea(float radius){
    return 3.14*radius*radius;
}