// Metro City Planners proposes that a community conserve its water supply by replacing all the
// community’s toilets with low-flush models that use only 2 liters per flush. Assume that there
// is about 1 toilet for every 3 persons, that existing toilets use an average of 15 liters per flush,
// that a toilet is flushed on average 14 times per day, and that the cost to install each new toilet
// is $150. Write a program that would estimate the magnitude (liters/day) of the water saved
// and the total cost to install new toilets based on the community’s population.

#include <stdio.h>

int main()
{
    const int avg_flush_per_day = 14; // Average flushes per day
    const int old_toilet_usage = 15;  // Liters per flush for old toilets
    const int new_toilet_usage = 2;   // Liters per flush for new toilets
    const int cost_per_toilet = 150; // Cost per new toilet installation

    // Water usage per toilet per day
    int total_water_use_in_old = old_toilet_usage * avg_flush_per_day;
    int total_water_use_in_new = new_toilet_usage * avg_flush_per_day;

    // Water saved per toilet per day
    int water_saved_per_toilet = total_water_use_in_old - total_water_use_in_new;
    printf("Water saved per toilet: %d liters per day\n", water_saved_per_toilet);

    int population = 10000000; // Example population
    double toilet_need = (double)population / 3; // Number of toilets needed
    double total_cost = toilet_need * cost_per_toilet; // Total cost of new toilets

    // Total water saved by all toilets
    double total_water_saved = toilet_need * water_saved_per_toilet;
    printf("Total water saved: %.2f liters per day\n", total_water_saved);
    printf("Total cost to replace toilets: $%.2f\n", total_cost);

    return 0;
}
