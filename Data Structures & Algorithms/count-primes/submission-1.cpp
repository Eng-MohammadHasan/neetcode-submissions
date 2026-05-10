class Solution {
public:

    void markNonPrimeNumbers(vector<bool>& isPrime, int n, int primeNumber)
    {
        for(int j = primeNumber * primeNumber ; j < n ; j += primeNumber)
        {
            isPrime[j] = false;
        }
    }

    void sieveOfEratosthenes(vector<bool>& isPrime, int n)
    {
        for(int i = 2 ; i * i < n ; i++)
        {
            if(isPrime[i])
            {
                markNonPrimeNumbers(isPrime, n, i);
            }
        }
    }

    int countPrimeNumbers(vector<bool>& isPrime, int n)
    {
        int counter = 0;

        for(int i = 2 ; i < n ; i++)
        {
            if(isPrime[i])
            {
                counter++;
            }
        }

        return counter;
    }

    int countPrimes(int n) {

        if(n <= 2)
            return 0;

        vector<bool> isPrime(n, true);

        isPrime[0] = false;
        isPrime[1] = false;

        sieveOfEratosthenes(isPrime, n);

        return countPrimeNumbers(isPrime, n);
    }
};