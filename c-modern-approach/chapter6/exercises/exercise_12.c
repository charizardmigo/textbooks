/*

C Programming: A Modern Approach (Second Edition)
Chapter 6, Exercise 12, Page 122

PRIESTLEY FOMECHE
25TH JANUARY 2022

Q: The following "prime-testing" loop appeared in Section 6.4 as an example:

    for (d = 2; d < n; d++)
        if (n % d == 0)
            break;

    This loop isn't very efficient. It's not necessary to divide n by all numbers between 2 and n - 1
    to determine whether it's prime. In fact, we need only check divisors up to the square root of n.
    Modify the loop to take advantage of this fact. Hint: Don't try to compute the square root of n;
    instead, compare d * d with n.


A:
    for (d = 2; d * d <= n; d++)
        if (n % d == 0)
            break;

    The if statement that follows the loop will need to be modified as well:

        if (d * d <= n)
            printf("%d is divisible by %d\n", n, d);
        else
            printf("%d is prime\n", n);


*/
