# Description
This program calculates the values of the Chevyshev and Legendre polynomials (in a range of x from -1 to 1 with steps of 0.1) using recursive functions.
1. The recurrence definition for the Chebyshev polynomials of the first kind is:
$$T_0(x) = 1$$
$$T_1(x) = x$$
$$T_{n+1}(x) = 2xT_n(x)-T_{n-1}(x)$$  <br>

2. The recurrence definition for the Legendre polynomials of the first kind is:
$$P_0(x) = 1$$
$$P_1(x) = x$$
$$P_{n+1}(x) = \frac{(2n+1)xP_n(x)-nP_{n-1}(x)}{n+1}$$ <br>

The results for the Chebyshev polynomials are: <br>  <br>
![](https://github.com/DavidAlba2627/Object-Oriented-Programming-Cpp/blob/main/Code08_recursiveFunction/Result_Images/Results1.png)

<br> The results for the Lagrange polynomials are: <br>  <br>
![](https://github.com/DavidAlba2627/Object-Oriented-Programming-Cpp/blob/main/Code08_recursiveFunction/Result_Images/Results2.png)
