#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    # Write your code here
    mintimes = 0
    maxtimes = 0
    minimum = scores[0]
    maximum = scores[0]
    for i in range(len(scores)):
        if scores[i] > maximum:
            maximum = scores[i]
            maxtimes+=1
        elif scores[i] < minimum:
            minimum = scores[i]
            mintimes+=1
        else: pass
    return maxtimes, mintimes
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
