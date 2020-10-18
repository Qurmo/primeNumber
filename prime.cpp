#include <iostream>
#include <vector>

std::vector<int> prime_numbers;//This vector will contain all prime numbers found.

void prime_List(int a)
{//Here we test to see if the number is prime.
	bool prime = true;
	for(int b = 1; b <= a && prime == true; b++)
	{
		if (a % b == 0 && b != a && b != 1)
		{//Set prime to 'false' to stop testing, number is not prime.
			prime = false;
		}
		
		else
		{//Keep prime 'true' for further testing.
			prime = true;
		}	
		
		if(b == a && prime == true)
		{//Number is prime and can be added to vector. 
			prime_numbers.push_back(a);//adding 'a' to vector.
		}		
	}
}

void test(int a)
{//Remove all even numbers from test except 2
	if(a % 2 == 0 && a != 2)
	{
	}
	
	else
	{//Test all odd numbers and 2 for prime
		prime_List(a);
	}
}

int main()
{
	int a = 1;//First number to test.
	int x = 100000;//Till what number to test.
	while(a <= x)
	{//here we start the whole testing process.
		test(a);
		a++;
	}
	
	std::cout << "You have found " << prime_numbers.size() << " prime numbers." << std::endl;

system("pause");
return 0;
}		
