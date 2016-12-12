/**
 * Author: Bibrak Qamar Chandio
 * 		   PhD Student Indiana University, Bloomington, IN
 *		   10-Dec-2016
 *
 * Code Template from:
 * Document: MaxCompiler Tutorial (maxcompiler-tutorial)
 * Chapter: 3      Example: 2      Name: Moving Average

 
 * MaxFile name: MVM_DIA
 * Summary:
 *   CPU code for Matrix Vector Multiplication using Diagonal Format.
 */
#include "Maxfiles.h" 			// Includes .max files
#include <MaxSLiCInterface.h>	// Simple Live CPU interface

float DIA_lower[8] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
float DIA_centre[8] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
float DIA_upper[8] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

float Vector_b[8] = { 14, 14, 14, 14, 14, 14, 14, 14, 14, 14 };


float Vector_x[8]; // This is the out-put

int main()
{
    int N = 8;
	printf("Running DFE\n");
    MVM_DIA(8, DIA_lower, DIA_centre, DIA_upper, Vector_b, Vector_x);

	for (int i = 0; i < 8; i++) 
		printf("Vector_x[%d] = %f\n", i, Vector_x[i]);

	return 0;
}

