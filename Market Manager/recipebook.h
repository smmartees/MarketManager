#pragma once


//interface for recipebook

#include "recipe.h"
#include <stdio.h>
#include <stdbool.h>


typedef struct recipebook {
	RECIPE data;
	struct recipebook* next;
}RECIPEBOOK, *PRECIPEBOOK;


// C
bool AddRecipeToBook(RECIPE Recipe, PRECIPEBOOK* RecipeBook);

// R


// U


// D
