#include <stdio.h>
struct shape{
    union dimensions{
        float length;
        float radius;
    }d;
    enum type{
        Circle=1, Rectangle
    }t;
}s;
int main()
{
    float length;
    scanf("%d", &s.t);
    float areacircle;
    float recarea;
    switch (s.t){
        case 1:
            scanf("%f", &s.d.radius);
            areacircle=3.14*s.d.radius*s.d.radius;
            printf("Area of the circle: %.4f units",areacircle);
            
            break;
        case 2: 
            scanf("%f", &s.d.length);
            length = s.d.length;
            scanf("%f", &s.d.radius);
            recarea=length*s.d.radius;
            printf("Area of the rectangle: %.4f units",recarea);
            break;
        default:
            printf("Invalid choice!");
            
    }
return 0;
}