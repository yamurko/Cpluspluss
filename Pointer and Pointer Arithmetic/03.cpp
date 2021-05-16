#include<iostream>
#include<stdlib.h>

using namespace std;

void decompose(float x, int int_part, float frac_part);
void decomposeOne(float x, int* p_int_part, float* p_frac_part);

void main(void)
{
	int i = 0; float f = 0.0;
	decompose(2.35, i, f);
	cout << "int_part:" << i << " frac_part:" << f << endl << endl;
	/* Prints: int_part: 0, frac_part: 0.00 */

	decomposeOne(2.35, &i, &f);
	cout << "int_part:" << i << " frac_part:" << f << endl;
	/* Prints: i: 2, f: 0.35 */
}

void decompose(float x, int int_part, float frac_part) 
{
	int_part = (int)x;
	frac_part = x - int_part;
}

void decomposeOne(float x, int* p_int_part, float* p_frac_part) 
{
	*p_int_part = (int)x;
	*p_frac_part = x - * p_int_part;
} /* end-decompose */

	

