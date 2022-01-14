#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumNumber' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. STRING password
#

def minimumNumber(n, password):
    numbers = "0123456789"
    lower_case = "abcdefghijklmnopqrstuvwxyz"
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    special_characters = "!@#$%^&*()-+"
    numexists = 1
    lowerexists = 1
    upperexists = 1
    scexists = 1
    
    for c in password:
        if numbers.find(c) != -1:
            numexists = 0
        if lower_case.find(c) != -1:
            lowerexists = 0
        if upper_case.find(c) != -1:
            upperexists = 0
        if special_characters.find(c) != -1:
            scexists = 0
    sum = numexists + lowerexists + upperexists + scexists
    result = sum
    
    return result if result + n > 6 else 6-n          
    # Return the minimum number of characters to make the password strong

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()
