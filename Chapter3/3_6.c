//HOW many molecules are there in water(quart)
#include<stdio.h>
#define WATER_MOLECULE_MASS 3.0E-23     //a better name: MASS_PER_MOLE
#define WATER_QUART_MASS 950            //a better name: MESS_PER_QUART

int main(void)
{
    float quarts;

    printf("how many quarts of water do you have?:");
    scanf("%f",&quarts);
    printf("the molecules of water are %.e.\n",WATER_QUART_MASS*quarts/WATER_MOLECULE_MASS);

    return 0;
}
