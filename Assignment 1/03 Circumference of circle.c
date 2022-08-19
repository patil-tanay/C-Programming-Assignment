#include <stdio.h>

int main() {
    int r;
    float pi=3.14;
    float c;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    c=pi*r*r;
    printf("The Circumference of the circle is: %f",c);

    return 0;
}
