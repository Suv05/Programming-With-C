// Write a program to assist in the design of a hydroelectric dam. Prompt the user for the height of the dam and for the number of cubic meters of water that are projected to flow from the top to the bottom of the dam each second. Predict how many megawatts (1MW = 106W) of power will be produced if 90% of the work done on the water by gravity is converted to electrical energy. Note that the mass of one cubic meter of water is 1000 kg. Use 9.80 meters/second2 as the gravitational constant g . Be sure to use meaningful names for both the gravitational constant and the 90% efficiency constant. For one run, use a height of 170 m and flow of 1.30 × 103 m3/s. The relevant formula ( w = work, m = mass, g = gravity, h = height) is: w = mgh.

#include <stdio.h>

int main()
{
    float height, flow_rate, power_generated_inMegawatt;
    const float gravity_const = 9.8; // Gravitational constant
    const float efficiency = 0.9;   // 90% efficiency factor

    printf("Enter the height of the dam (in meters): ");
    scanf("%f", &height);

    printf("Enter the cubic meters of water flow per second (e.g., 1.30): ");
    scanf("%f", &flow_rate);

    // Calculate the total work done
    float total_workDone = height * flow_rate * 1000 * gravity_const;

    // Calculate the power generated in megawatts
    power_generated_inMegawatt = (total_workDone * efficiency) / 1000000;

    printf("Total power generated: %.2f MW\n", power_generated_inMegawatt);

    return 0;
}
