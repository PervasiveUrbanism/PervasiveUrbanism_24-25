def fib(n):    # write Fibonacci series up to n
    """Print a Fibonacci series up to n."""
    a, b = 0, 1
    #short for
    #a = 0
    #b= 1
    while a < n:
        print(a, end=' ')
        a, b = b, a+b
    print("finished")
    return a


fib(2000)

x = fib(2000)
