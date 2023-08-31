#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'acmTeam' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING_ARRAY topic as parameter.
#

def acmTeam(topic):
    d = {}
    li = []
    l = len(topic[0])
    for i in topic:
        for j in range(l):
            if(i[j] == '1'):
                d[j] = 1
            else:
                d[j] = 0
        li.append(d.copy())
    l_li = len(li)
    counter =[]
    for i in range(l_li - 1):
        for j in range(l):
            ctr = 0
            for k in range(1,l_li-i-1):
                if(li[i][j]==1 or li[i+k][j]==1):
                    ctr+=1
                else:
                    pass
            counter.append(ctr)

    print(counter)
    print(max(counter),counter.count(max(counter)))


if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)

    #fptr.write('\n'.join(map(str, result)))
    #fptr.write('\n')

    #fptr.close()

