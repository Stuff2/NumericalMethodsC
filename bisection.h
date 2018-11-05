#include<stdio.h>
#include<math.h>

float Func(float x)
{
	return (x);//Function
}

void main()
{
	int no = 0, maxno=10;//initial and max ilteration 
	float x, a=1, b=1.5,  x1;//points
	float TOL = 10 ^ (-3);//tolerance value
	
	
	x = (a + b) / 2;
	no++;
	printf("Test num %2d X = %0.4f\n", no, x);
	do
	{
		if (Func(a)*Func(x) < 0)
			b = x;
		else
			a = x;

		x = (a + b) / 2;
		no++;
		printf("Test num %2d X = %0.4f\n", no, x);
		if (fabs(x1 - x) < TOL)
		{
			printf("Test num %d , Root = %0.4f\n", no, x1);
			break;
			
		}
		x = x1;
	} while (itr < maxno);
	printf("couldnt found any root");
	
}
