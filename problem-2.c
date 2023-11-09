#include <stdio.h>
#include <math.h>

int main() {
    double lambda_green = 530.0;  
    double lambda_red = 700.0;   
    double theta_green_third_order = 65.0;  

    double theta_green_third_order_rad = theta_green_third_order * M_PI / 180.0;

    double d_green = lambda_green / 3 / sin(theta_green_third_order_rad);

    double theta_red_second_order_rad = asin(2 * lambda_red / d_green);

    double theta_red_second_order_deg = theta_red_second_order_rad * 180.0 / M_PI;

    printf("The angle for the second-order bright spot for red light is: %.2f degrees\n", theta_red_second_order_deg);

    return 0; 
}
