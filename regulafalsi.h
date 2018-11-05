#include<stdio.h>
#include<math.h>

float Func(float x)
{
	return x;//function
}


void main()
{
	int no = 2, maxno = 10; //initial and max ilteration
	float p, p0 = 1, p1 = 1.5, q0, q1, q; // points
	float TOL = 0.0001;// tolerance value
	q0 = Func(p0);
	q1 = Func(p1);

	while (no <= maxno)
	{
		p = p1 - q1*(p1 - p0) / (q1 - q0);
		if (fabs(p - p1) < TOL) {
			printf("Test num %d, root = %0.4f\n", no, p);
			break;

		}
		no++;

		q = Func(p);
		if (q*q1 < 0)
		{
			p0 = p1;
			q0 = q1;
		}

		p1 = p;
		q1 = q;

	}
	printf("couldnt found any root");
}