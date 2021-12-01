#include <stdio.h>

//Normal Structure
struct countries
{
    char name[20];
    int population;
} India = {"India", 2000}, Germany = {"Germany", 500}, Canada = {"Canada", 100};

//User-Defined structure and nested structure
typedef struct food
{
    char category[10];
    struct dish
    {
        char name[20];
    } dish;
} food;

//Array of structure
struct
{
    char personName[20];
    int age;
} person[2];

//pointer Structure

typedef struct
{
    char hobby[20];
} hobby;

int main()
{
    struct countries Dubai = {"Dubai", 600}, Oman;
    Oman = Dubai;
    printf("\n%s has %d population ", India.name, India.population);
    printf("\n%s has %d population ", Germany.name, Germany.population);
    printf("\n%s has %d population ", Canada.name, Canada.population);
    printf("\n%s has %d population ", Dubai.name, Dubai.population);
    printf("\n%s has %d population ", Oman.name, Oman.population);

    food thahseen = {"Pizza", "potato pizza"}; // since typedef userdefined data type

    printf("\nfav food of thahseen :%s  %s", thahseen.category, thahseen.dish.name);

    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter the name and age respectively:");
        // scanf("%s%d", &person[i].personName, &person[i].age);
        scanf("%s", &person[i].personName);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nThe person details are ....\n Name:%s Age:%d", person[i].personName, person[i].age);
    }

    return 0;
}