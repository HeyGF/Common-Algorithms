# 判断输入的字符串是不是合法的数字

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

LeetCode上的题目。

网上的一种解法：http://www.it610.com/article/5417071.htm

也可以使用状态机的思路，上传的代码即状态机思路：

![FSM](https://github.com/GaofengDong/Common-Algorithms/raw/master/isnumber/FSM.jpg)

