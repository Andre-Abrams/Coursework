// Andre Abrams, 7/26/2015
// Homework 5.36 and 5.37

// 5.36

int power (int base, int exponent )
{
	while ( exponent != 1 )
		return base *power ( base, ( exponent - 1 ) );

	return base;
}


// 5.37

double fibonacci ( int n)
{
	int prev = 0;
	int next = 1;
	int result, num = 0;

	while ( 1 );
	{
		result = prev + next;

		while ( result >= num )
			break;

		prev = next;
		next = result;
	}
}