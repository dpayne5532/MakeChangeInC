# Make Change in C

This is my take home project in its most basic form.
Once compiled, this program will take a double as an input and return change amounts using the highest denominations of US currency.

My primary challenges in this project were: 

1: I have very, very little experience with the C language. I started with a [YouTube tutorial](https://youtu.be/0Sg6QHmlFJE) on C for beginners to accomplish this. 

2: Dealing with decimal places in with the math aspect of makeChange. I decided to change from working in hundredths of dollars, to single pennies. I achieved this using typecasting to make the original double an int for dollars, and an int for pennies.


-Takeaway

I am finding C to be less forign than I originally expected it to be. Coming from Swift, it's fascinating to see Swifts foundations. For example, when limiting the decimal places shown to the end user, you use "specifier: %.2f" which I so recently learned comes directly from the C language. 
