#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'caesarCipher' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. INTEGER k
#

def caesarCipher(s, k):
    # Write your code here
    ciphered = ""
    for c in s:
        if ord(c)>=65 and ord(c)<=90:
            ciphered += chr((ord(c)-65+k)%26+65)
        elif ord(c)>=97 and ord(c)<=122:
            ciphered += chr((ord(c)-97+k)%26+97)
        else:
            ciphered += c
    return ciphered

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = input()

    k = int(input().strip())

    result = caesarCipher(s, k)

    fptr.write(result + '\n')

    fptr.close()
