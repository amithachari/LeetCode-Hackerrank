#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    # Write your code here
    atoz = "abcdefghijklmnopqrstuvwxyz "
    s = (s.lower())
    for i in atoz:
        print(i)
        if (s.find(i)==-1) :
            flag = 0
            break
        else: 
            flag = 1
            print(flag)
    if flag == 1:
        result = "pangram"
    else:
        result = "not pangram"
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
