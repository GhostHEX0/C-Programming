#include<stdio.h>
int main()
{
    float c;//c=radius of a circle
    //circle
    printf("Enter the radius of a circle");
    scanf("%f",&c);
    printf("Area of circle is:%.2f\n",3.14*c*c);
    printf("Perimeter of a circle:%2.f\n",2*3.14*c);
    //square
    float s;//s=side of a square
    printf("Enter the sides of square");
    scanf("%f",&s);
    printf("Area of square is:%.2f\n",4*s);
    printf("Perimeter of a square is:%.2f\n",4*s);
    //rectangle
    float L,W;//length and width of rectangle
    printf("Enter length and width of rectangle");
    scanf("%f%f",&L,&W);
    printf("Area og rectangle is:%.2f\n",L*W);
    printf("Perimeter of a rectangle:%.2f\n",2*(L+W));
    return 0;
}