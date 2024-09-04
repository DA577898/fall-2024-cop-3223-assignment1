#include <stdio.h>
#include <math.h>
#define PI 3.14159


double askForUserInput(){
    double temp;
    scanf("%lf", &temp);
    return temp;
}

double absval(double value){
    if(value < 0){
        value *=-1;
    }
    return value;
}

double getUserValues(int method){
    double x1 = askForUserInput(), x2 = askForUserInput(), y1 = askForUserInput(), y2 = askForUserInput();
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);
    double radius = (sqrt( pow((x2-x1), 2) + pow((y2-y1), 2) ))/2; // Distance formula
    if(method == 1){ // Distance, width, or height calculation
        return radius*2;
    } else if (method == 2){ // Perimeter calculation
        return 2*PI*radius;
    } else if (method == 3){ // Area calculation
        return PI*radius*radius;
    }
    return -1;
}

double calculateDistance(){
    double distance = getUserValues(1);
    printf("The distance between the two points is %.3lf\n", distance);
    return distance;
}

double calculatePerimeter(){ // Cannot use calculate_distance inside, because it would print out line 33.
    double perimeter = getUserValues(2);
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    return 1.0;
}

double calculateArea(){ // Cannot use calculate_distance inside, because it would print out line 33.
    double area = getUserValues(3);
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    return 1.0;
}

double calculateWidth(){ // Cannot use calculate_distance inside, because it would print out line 33.
    double width = getUserValues(1);
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    return 1.0;
}

double calculateHeight(){ // Cannot use calculate_distance inside, because it would print out line 33.
    double height = getUserValues(1);
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    return 1.0;
}

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
