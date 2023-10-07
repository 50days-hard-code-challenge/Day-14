from typing import *

def superiorElements(a : List[int]) -> List[int]:
    # Write your code here.
    n=len(a)
    b=[]
    largest=a[n-1]
    b.append(largest)
    for i in reversed(range(n-1)):
        if a[i]>largest :
            b.append(a[i])
            largest=a[i]
    return b
