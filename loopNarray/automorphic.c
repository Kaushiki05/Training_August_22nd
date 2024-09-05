#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num, num_sq, n;
	printf("Enter the number: ");   //76
	scanf("%d",&num);

	num_sq = num*num;   //5776
	n = num;  //n = 76

	int count=0, rem, i;
	while(num>0)  //calc digits in original number num
	{
		rem = num%10;
		count++;   // no. of digits of original number ....2
		i=count;     //I'M STORING THE COUNT IN ANOTHER VAR SO I CAN USE IT OUTSIDE THE WHILE LOOP !!
		num = num/10;
	}


		int x, t = pow(10,i);
//	while()
//	{	
		x = num_sq%(t);  // x = 5776%10^2  ---> ERROR - OPERANDS FOR % SHOULD BE INTEGER TYPES LIKE INT LONG SHORT CHAR AND NOT FLOAT OR DOUBLE !!!!!!

//	}

		if(x == n)   //76 == 76
			printf("\nThe number %d is automorphic\n",n);
		else 
			printf("\n Not automorphic\n");
	
		return EXIT_SUCCESS;
}
