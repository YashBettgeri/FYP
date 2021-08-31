#include "cacl.h"
#include<limits.h>

void calculator(in1_t a, in2_t b, out_t *y, out_t *res2, op_t op)
{
	*res2 = 0;
	switch(op){
	case 1:
		*y = a + b;
		break;
	case 2:
		*y = a - b;
		break;
	case 3:
		*y = a * b;
		break;
	case 4:
		if(b == 0)
		{
			*y = LONG_MAX;
		}
		else
		{
			*y = a / b;
			*res2 = a%b;
		}
		break;
	case 5:
		*y = (a*100) / b;
		*res2 = (a*100) % b;
		break;
	case 6:
		*y = a;
		for(int i = 1 ; i < b ; i++){
			if(*y > LONG_MAX / a)
			{
				*y = LONG_MAX;
				break;
			}
			(*y) = (*y) * a;

		}
		break;
	default:
		*y = 0;
		break;

	}
}
