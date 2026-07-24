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
go to first element, if %1 is 0 goes to the head of stack b (rb, pb, rrb)(to maintain the order in which they are found) otherwise at the bottom (pb , rb)
until a is empty 
and b is        110 100 010 111 001 101 011
same logic as before but if stack a is empty we do it with b and viceversa,
but every iteration we go to the next digit, so if stack b[0]/10 % 1 is 0 top else bottom;

so b is empty and a will be
                100 001 101 110 010 111 011
iterating 
                001 010 011 100 101 110 111
that converted is
                1   2    3   4   5   6   7   
