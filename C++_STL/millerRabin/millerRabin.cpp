/*
 
   (a + b) % c = ((a % c) + (b % c)) % c          
   (a * b) % c = ((a % c) * (b % c)) % c          
   (a - b) % c = ((a % c) - (b % c)) % c          
   (a / b) % c = ((a) * (b^-1)) % c = ((a % c) * ((b^-1) % c)) % c   

   A^B mod C = ( (A mod C)^B ) mod C        /// ^ = exponent
   We can Write LHS, (A^(B/2) * A^(B/2))    /// When B is Even 
				 Or, (A^2)^(B/2)            /// When B is odd then,
				                            /// A*(A^2)^((B-1)/2) 

 
	------------------ MILLER RABIN PRIMALITY TEST ------------------

	before diving into actual topic we should know some theorm and lema

	theorm 1:  1<a<N-1}
		
		FERMART'S THEORM : 'N' to be odd prime, for some value 'a', 
		                    {a: a ∈ Z and 0<a<N} but we consider,

		                    {a: a ∈ Z and 1<a<N-1} this range

		Think Why { if 0<a<N } 1<a<(N-1) ;
			Because if, a=1, then for all value of N, Every N shows its
			primality test result positive;
						a=N-1, the same will occured

				a^(N-1)≡ 1 (mod N)  // {
									//	 a^(N-1) mod N ≡ 1 (mod N)
									//	 read { a to the power N minus
									//			1 congrugent mod to 
									//			1 mod N
									//	 }
									//	}
				
				Lets, N=4 and a=2, so, 2^3 mod 4 = 0, so 4 is not prime
		 Agian, Lets, N=7 and a=5, so, 5^6 mod 7 = 1, so 7 is odd prime

		 But for THIS THEORYM THERE IS SOME LIMITIATION :

		 Lets, N=15 and a=4, so 4^14 mod 15 = 1, so 15 is odd prime ? NO.
		 but this theory so 15 is odd prime, here is some contradiction.
		 so 15 is not prime.

		 Extracting prime numbers from Fermart's theorym is basically a 
		 probablistic process. So, the thorym is only determines 
		 the posibility of a number to be prime.
			Now, Lets see using Fermart's theorym how can we tell a number
		 is prime a more little bit accurately.

		 So, upto this, Using Fermart's theorym, we are considering only 
		 one value of 'a' to check the primality of 'N'. But from Now, We
		 are taking 'k' numbers of value for 'a' and checking the primality
		 of 'N' for every value of a; If any value of 'a', desatisfying the
		 Fermart's theorym we can directly tell that 'N' is not odd prime.

		 Now, go back to the problem for N=15, proving previous method 15
		 is odd prime. but we know 15 is not prime.
		 Now, we are checking N=15 to be prime or not prime using this 
		 modified method.

			Lets, N=15, k=3, a={4,3,2}

			When a=4, 4^14 mod 15 = 1, so for value of a=4, 15 is odd prime
			     a=3, 3^14 mod 15 !=1, so for value of a=3, 15 is not odd prime
				 a=2, we don't need to check as a=3 we tell directly 15 is not
					  odd prime

		Up to now, We can check primality for every value of N quite accurately
		(Not fully) using this modified Fermart's theorym. But checking all value
		of N, we can observe some value of N=65, 91, 703, 1729, 1921, 2821, 5611,
		891; this both theorym wrongly proved that primality test result is positive.
		So, this both theorym is failed for these value of N;

	For these problem, We are taking help of Miller Rabin Primality Test

	-------------------- Miller Rabin -------------

	Like Fermt's theorym, Miller Rabin Primality Test also a probablistic Theorym.
	But, its accuracy is much better than Fermat's theorym. Its Error rate is less
	than Fermat's theorym

	Now Lets see, Taking help From Miller Rabin primality test that is Based on 
	Fermat's Theorym, How can we tell a Number 'N' is prime or not more accurately.

	Let' Remind Fermat's theorym : 

	                        a^(N–1) ≡ 1 (mod N) ............. (i)

	Here, N = odd number; because, No even number is prime except 2. The Main Idea
	of Miller Rabin algorithm, breaking (N-1) {if N is odd, (N-1) is even} in the
	form of (2^s)*d

							(N-1) = (2^s)*d ............ (ii)

                     Even x Even = Even					   { where,
                     Odd x Odd = Odd                              	s=0,1,2,....
                     Even x Odd = Even					            d= odd and d > 1
					We can write this Even part as of 2^i; }

	Substituing eqn (ii) in eqn(1), We get,
	              
						a^((2^s)*d)≡ 1 (mod N) ............... (iii)
						
	     				=> a^(2*(2^(s-1))*d)≡ 1 (mod N)
		    			=> a((2^(s-1))*d)^2 ≡ 1 (mod N)
		    			=> a((2^(s-1))*d)≡ ±1 (mod N) ........... (iv)

	We can break eqn (iii) .... in atomic structure of its full form and we add one layer 
	and so on... and analise its every form of it;

	I mean to say (a^d) is atomic structure of (a^(2*d)) we can analise both of it
	and again (a^(2*d)) is sub-atomic of ((a^(2*d))^2) , we can analise both of them and so on
	up to its full form (a((2^(s-1))*d)^2). The atomic structure holds all properties of its
	full form, so any of one form becomes true then it's full form also becomes true;
	
	( a^d, a^(2*d), (a^(2*d))^2, ((a^(2*d))^2)^2 ... a((2^(s-1))*d)^2 ) (mod N) = 1 (mod N)
												           Ⅲ
													     (N-1), By Fermat's
													theorym, we can say, the 
													value of last term is 1

	Again observe, Every number in the list is the square of the number
	before it. And the last number is 1. Basically 2 different case that
	is to be happened.

	Either  The first term is 1 and all the number is 1, in this case we are
			done. So we conclude in eqn (iv) for positive one if s=1, then
													
													a^d ≡ 1 (mod N)

			is enough to check; because the next term is square of the current one,
			and the value of current is 1, then for next and next and next all term
			in the list become 1. And we can tell directly that N is prime;
	
                        (    Note : (A^B) mod C = ((A % C)^B) % C       )
	OR ELSE,      
			The first term is -1 or, (-1 (mod N)) = (N-1) and all the number is 
			not (N-1), in this case we are done. So we conclude in eqn (iv)
	        for negative one if s=1, then
                                                    
                                                    a^d ≡ -1 (mod N)

            is enough to check; because the next term is square of the current one,
            and the value of current is 1, then for next and next and next all term
            in the list become 1. And we can tell directly that N is prime;

				But, if first term is not -1 then the one of the reamining term must
				show up -1 . so we check for every term and if we found one term 
				is -1 then we directly tell N is prime, if any of term goes 1
				then next term will be 1 and hence we do not go further more as all
				remaining term will become 1 as next term is square of the current and
				next and next and so on. So hence we can directly tell N is not prime
			If no term is -1 then we tell N is not prime


Modular Exponentiation (Power in Modular Arithmetic)
Given three numbers x, y and p, compute (x^y) % p.

Examples :

Input:  x = 2, y = 3, p = 5
Output: 3
Explanation: 2^3 % 5 = 8 % 5 = 3.

Input:  x = 2, y = 5, p = 13
Output: 6
Explanation: 2^5 % 13 = 32 % 13 = 6.
 

Below is discussed iterative solution.


 Iterative Function to calculate (x^y) in O(log y)

int power(int x, unsigned int y) 
{ 
    int res = 1;     // Initialize result 
   
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res*x; 
   
        // n must be even now 
        y = y>>1; // y = y/2 
        x = x*x;  // Change x to x^2 
    } 
    return res; 
}

The problem with above solutions is, overflow may occur for large value of n or x.
Therefore, power is generally evaluated under modulo of a large number.

Below is the fundamental modular property that is used for efficiently computing 
power under modular arithmetic.


(a^b) mod p = ( (a mod p) (b mod p) ) mod p 

For example a = 50,  b = 100, p = 13
50  mod 13  = 11
100 mod 13  = 9

(50 * 100) mod 13 = ( (50 mod 13) * (100 mod 13) ) mod 13 
or (5000) mod 13 = ( 11 * 9 ) mod 13
or 8 = 8
Below is the implementation based on above property.

// Iterative C program to compute modular power 

#include <stdio.h> 
  
 Iterative Function to calculate (x^y)%p in O(log y)
int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
  
// Driver program to test above functions 
int main() 
{ 
   int x = 2; 
   int y = 5; 
   int p = 13; 
   printf("Power is %u", power(x, y, p)); 
   return 0; 
} 

Output :
 Power is 6
Time Complexity of above solution is O(Log y).





	








*/
