#include <cstdio>

int main()
{
	int t = 0;
	int totalMonth = 0; int result = 0;
	int monthDay = 0; int weekDay = 0;
	int temp = 0; 

	int a, b, c;

	scanf("%d", &t);
	if(t<1 || t>100)
	{
		printf("t의 범위는 1부터 100까지\n");
		return 0;
	}

	for(int i=1; i<=t; i++)
	{
		scanf("%d %d %d", &totalMonth, &monthDay, &weekDay);

		a = monthDay / weekDay;
		b = monthDay % weekDay;

		if(b==0)
		{
			result = totalMonth * a;
		}
		
		else
		{
			if(weekDay % b == 0)
			{
				a= a+1;
				result = a * totalMonth;
			}
			else
			{	
				for(int i=0; i<totalMonth; i++){
					result = result + a + 1;

					temp = b + monthDay;
					a= temp / weekDay;
					b = temp % weekDay;
				}
			}
		}
		printf("Case #%d: %d\n", i, result);
	}
	return 0;
}