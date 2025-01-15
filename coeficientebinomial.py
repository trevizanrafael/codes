def central_binomial_coefficient(n):
    aux=n
    n2=n*2
    for i in range(n-2):
        n=n*(aux-1)
        aux=aux-1
    aux=n2
    for i in range(n2-2):
        n2=n2*(aux-1)
        aux=aux-1
    r=n2/(n*n)
    return r
