/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  getting body measurements
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:41:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Joshua Davidson (), joshuadavidson1@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    double weight, height, bmi;
    // 1) capture weight in kg
    printf("Enter your weight: ");
    scanf("%lf", &weight);
    //2) capture the height in meters
    printf("Enter your height: ");
    scanf("%lf", &height);
    //3) calculate your bmi = weight/height
    bmi = weight/pow(height, 2);
    // 4) Display BMI
    printf("Your BMI is : %lf\n", bmi);


    return 0;
}
// Function Definitions


