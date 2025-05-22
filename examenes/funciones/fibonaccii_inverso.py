def fibonaci_inverso(N):
    if N == 1:
        return [0]
    elif N == 2:
        return [1, 0]
    fib = [0, 1]
    while len(fib) < N:
        fib.append(fib[-1] + fib[-2])
    return fib[::-1][:N] 