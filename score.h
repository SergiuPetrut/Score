#pragma once
#define _CRT_SECURE_NO_WARNINGS
// What to write in a header file:
// 1. Constant definition (e.g., #define PI 3.1415)
// 2. Data structure definitions
// 3. Function prototypes (aka. function declaration)
#include <stdio.h>
#define MAX 30

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);
