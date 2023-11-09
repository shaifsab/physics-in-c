#include <stdio.h>

int main() {
    // Input values
    double lambda, a;
    printf("Enter the wavelength (nm): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;  
    }

    printf("Enter the slit width (a) in meters: ");
    scanf("%lf", &a);

   
    double theta_violet = asin(lambda / (2 * a));
    double theta_red = asin(lambda / (2 * a));

    
    if (theta_violet > theta_red) {
        printf("Violet slit bent the light more.\n");
    } else if (theta_violet < theta_red) {
        printf("Red slit bent the light more.\n");
    } else {
        printf("Both slits bent the light equally.\n");
    }

    return 0;  
}
