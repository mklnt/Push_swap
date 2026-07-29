# Push_swap


we need 
        rotate
        reverse rotate
        decimal to binary conversion function
        binary to decimal conversion
        medium complexity algorithm

        adaptive complexity in main
        strategy selector in main
        
no bonus god forbid

we saw simple together

for the complex I used a modified Radix called Last Significant Digit, or LSD for short.

take a sequence 7 6 1 5 4 2 3 
make binary     111 110 001 101 100 010 011
go to first element, if %1 is 1 goes to the stack b  pb, rrb)(to maintain the order in which they are found)
until a is over
so b is         111 001 101 011
and a is        110 100 010

b is addes to the bottom of a with the order is found
                110 100 010 111 001 101 011
again with the second digit so arr a[1]/10 % 1

stack a         100 001 101 
stack b         110 010 111 011

add toghether
                100 001 101 110 010 111 011
again with last digit

stack a         001 010 011
stack b         100 101 110 111

add together    001 010 011 100 101 110 111

done

                1   2    3   4   5   6   7   
