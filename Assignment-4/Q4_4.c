// When an aircraft or an automobile is moving through the atmosphere, it must overcome a force called drag that works against the motion of the vehicle. The drag force can be expressed as
// F = 1/2 ρ V^2 A CD
// where F is the force (in newtons), CD is the drag coefficient, A is the projected area of the
// vehicle perpendicular to the velocity vector (in m2), is the density of the gas or fluid through
// which the body is traveling (kg/m3 ), and V is the body’s velocity. The drag coefficient CD has
// a complex derivation and is frequently an empirical quantity. Sometimes the drag coefficient
// has its own dependencies on velocities: For an automobile, the range is from approximately
// 0.2 (for a very streamlined vehicle) through about 0.5. For simplicity, assume a streamlined
// passenger vehicle is moving through air at sea level (where ρ = 1.23kg/m3 ). Write a program
// that allows a user to input A and CD interactively and calls a function to compute and return
// the drag force. Your program should call the drag force function repeatedly and display a table
// showing the drag force for the input shape for a range of velocities from 0 m/s to 40 m/s in
// increments of 5 m/s.

#include <stdio.h>

// Function to compute drag force
void compute_drag_force(double area, double drag_coefficient, double velocity, double density, double *drag_force)
{
    *drag_force = 0.5 * density * velocity * velocity * area * drag_coefficient;
}

int main()
{
    const double density = 1.23; // kg/m3
    double area, drag_coefficient, velocity, drag_force;

    printf("Enter the projected area of the vehicle (in m2): ");
    scanf("%lf", &area);
    printf("Enter the drag coefficient (in kg/m2): ");
    scanf("%lf", &drag_coefficient);

    // Displaying drag force for velocities 0 m/s to 40 m/s in increments of 5 m/s
    printf("\nVelocity (m/s)\tDrag Force (N)\n");
    printf("-----------------------------\n");

    for (velocity = 0; velocity <= 40; velocity += 5)
    {
        // Call the function
        compute_drag_force(area, drag_coefficient, velocity, density, &drag_force);
        // Print velocity and drag force
        printf("%10.2lf\t%14.2lf\n", velocity, drag_force);
    }

    return 0;
}