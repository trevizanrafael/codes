def is_pronic(n):
    for i in range(n):
        if i*(i+1)==n:
            return True
    return False
