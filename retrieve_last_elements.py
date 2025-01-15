def retrieve_last_elements(lst, n):
    tamanho=len(lst)
    r=[]
    for i in range(n):
           r.append(lst[-i-1])
    r.reverse()
    return r
