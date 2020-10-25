#include <iostream>
#include <vector>

std::vector<int> prime_number;

void prime_List(int a)
{//Here we test to see if the number is prime.
	bool prime = true;
	for(int b = 2; b <= a && prime == true; b++)
	{
		if (a % b == 0 && b != a)
		{//Set prime to 'false' to stop testing, number is not prime.
			prime = false;
		}

		if(b == a)
		{//Number is prime and can be added to vector.
			prime_number.push_back(a);
		}
	}
}

int main()
{
	int a = 2;//First number to test.
	int x = 1000;//Till what number to test.
	while(a <= x)
	{//here we start the whole testing process.
		prime_List(a);
		a++;
	}
	
	std::cout << " you have found " << prime_number.size() << " prime numbers." << std::endl;

return 0;
}
