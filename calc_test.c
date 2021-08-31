#include<stdio.h>
#include "cacl.h"

void calculator(in1_t a, in2_t b, out_t *y, out_t *res2, op_t op);
int main(){

	in1_t in1[7] = {2,5,900,123,25,3,24};
	in1_t in2[7] = {5,10,900,12,100,4,45};

	out_t output_1;
	out_t output_2;


	for(int i = 1 ; i < 8 ; i++){

		calculator(in1[i-1], in2[i-1], &output_1, &output_2, i);
		printf("i = %d \tresult_1 = %d\tresult_2 = %d\n",i, output_1, output_2);

	}

	return 0;
}
