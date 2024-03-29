#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'migratoryBirds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def migratoryBirds(arr):
    # Write your code here
    arr = sorted(arr)
    counter = 0
    i = 0
    number = []
    while i<len(arr):
        number.append(arr.count(arr[i]))
        i+=arr.count(arr[i])
    idx = number.index(max(number))
    indexval = 0
    for i in range(idx):
        indexval += number[i]
    result = (arr[indexval])
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
