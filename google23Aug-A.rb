=begin

Problem Description

A "0/1 string" is a string in which every character is either 0 or 1. 
There are two operations that can be performed on a 0/1 string:

switch: Every 0 becomes 1 and every 1 becomes 0. For example, "100" becomes "011".
reverse: The string is reversed. For example, "100" becomes "001".
Consider this infinite sequence of 0/1 strings:

S0 = ""

S1 = "0"

S2 = "001"

S3 = "0010011"

S4 = "001001100011011"

...

SN = SN-1 + "0" + switch(reverse(SN-1)).

You need to figure out the Kth character of Sgoogol, where googol = 10**100(i.e. 10E100).

Input

The first line of the input gives the number of test cases, T. Each of the next T lines contains a number K.

Output

For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the Kth character of Sgoogol.

Limits

1 ≤ T ≤ 100.
Small dataset

1 ≤ K ≤ 105.
Large dataset

1 ≤ K ≤ 10**18.
Sample


Input 
4
1
2
3
10

Output 
Case #1: 0
Case #2: 0
Case #3: 1
Case #4: 0

=end

# Solution below

resultSeq = [1]
66.times { resultSeq << resultSeq.last * 2 }  # fabonacci Sequence, fab(66) is large enough
CENTER_SEQUENCE = resultSeq.freeze

def get_result(input_size = gets.chomp.to_i)
  input_size.times { |i| puts "Case ##{i+1}: #{find_kth_S_googol(gets.chomp.to_i)}" }
end

def find_kth_S_googol(k)
  return k == 3 ?  1 : 0 if k < 4
  target_index = [*CENTER_SEQUENCE.each_with_index].bsearch { |v, _| v >= k }.last
  CENTER_SEQUENCE[target_index] == k  ? 0 : 1 - find_kth_S_googol(CENTER_SEQUENCE[target_index - 1] * 2 - k)
end

get_result
