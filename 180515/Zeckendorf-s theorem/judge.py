#coding=utf-8

import sys

'''
usage: python judge.py input.txt output.txt
'''

N = 85
FIB = [1, 1]

for i in xrange(N):
    FIB.append(FIB[-1] + FIB[-2])

if __name__ == '__main__':
    input_file, output_file = sys.argv[1:]

    with open(input_file) as f:
        input_lines = f.readlines()

    with open(output_file) as f:
        output_lines = f.readlines()

    assert len(input_lines) == len(output_lines)

    n = len(input_lines)

    for i in xrange(n):
        in_line, out_line = int(input_lines[i].strip()), output_lines[i].strip()

        assert '11' not in out_line

        m = len(out_line)
        u = 0
        for j, c in enumerate(out_line[::-1]):
            if c == '1':
                u += FIB[j]
        assert u == in_line

