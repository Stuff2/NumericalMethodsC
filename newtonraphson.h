#include<stdio.h>
#include<math.h>

float Func(float x)
{
return x;//function
}

float FuncT(float x)
{
	return x;//derivate of function
}
void main()
{
	int no = 1, maxno = 10; //initial and max ilteration 
	float p, p0 = 1.5; // points
	float TOL = 0.0001; // tolerance value
	
	while (no<=maxno)
	{
		p =p0- (Func(p0)/FuncT(p0));
		if (fabs(p - p0) < TOL) {
			printf("Test num %d, root = %0.4f\n", no, p);
			break;
		
		}
		no++;
		p0 = p;

	}
	printf("couldnt found any root");
}
