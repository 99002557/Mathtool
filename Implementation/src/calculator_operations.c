#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int lcm(int operand1, int operand2)
{
	int max;
	max = (operand1 > operand2) ? operand1 : operand2;

    while (1) {
        if (max % operand1 == 0 && max % operand2 == 0) {
            return max;
            break;
        }
        ++max;
    }
}
int gcd(int operand1, int operand2)
{
	int gcd,i;
	for(i=1; i <= operand1 && i <= operand2; ++i)
    {
        // Checks if i is factor of both integers
        if(operand1%i==0 && operand2%i==0)
            gcd = i;
    }


    return gcd;
}
long permutation(int operand1, int operand2)
{
    return factorial(operand1) / factorial(operand1-operand2);
}

long combination(int operand1, int operand2)
{
    return permutation(operand1, operand2) / factorial(operand2);
}

long factorial(int operand1)
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= operand1;
        operand1--;
    }

    return fact;
}
long powerof(int base,int pwr)
{
int res=1,i;
    for(i=1;i<=pwr;i++)
    {
        res=res*base;
    }
    
    return res;
}
int logtwo(int num)
{
      if(num==1)
           return 0;
      return 1 + log2(num/2);
}
 
int logN(int num,int base)
{
      if(num<base)
           return 0;
     return 1 + logN(num/base,base);
}

int naturallog(num)
{
	return log(num);
}

