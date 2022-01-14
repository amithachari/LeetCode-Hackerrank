#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'closestNumbers' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def closestNumbers(arr):
    # Write your code here
    arr.sort()
    diffarr = []
    newarr = []
    for i in range(len(arr)-1):
        diffarr.append(arr[i+1]-arr[i])

    minimum = (min(diffarr))
    idx = diffarr.index(min(diffarr))
    for i in range(len(diffarr)):
        if diffarr[i] == minimum:            
            newarr.append(arr[i])
            newarr.append(arr[i+1])
    return newarr

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = closestNumbers(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
