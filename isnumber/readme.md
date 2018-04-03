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

## 网上的一种解法：

http://www.it610.com/article/5417071.htm

可以根据（+/-、e、.、空格、num）出现的次数和先后信息来判断是否为“数字”：

首先去掉开始的空格和+/-，余下的部分：

	数字可以多次出现，但前面不能有空格；
  
	.只能出现一次，前面不能出现过e，.，空格；
  
	e只能出现一次，前面必须出现过num，不能出现e，空格；后面必须再次出现数字，后面一位可以是+/-；
  
	+/-只能出现一次，必须在e后面（并入e的判断）；
  
	空格可以出现多次，但后面不能出现其他；
  
	出现其余字符为错。

## 自己的解法 有限状态机

也可以使用状态机的思路，上传的代码即状态机思路：

从输入字符串第一位开始，每一位可能出现的情况为：+/-，.，空格，e，num，其他字符;

根据当前状态遇到的字符，来决定跳到下一个合法的状态；

能在几个结尾点结束的为合法数字，在其他状态结束和在某个状态无法跳到下一个状态的均为非法数字。

![FSM](https://github.com/GaofengDong/Common-Algorithms/raw/master/isnumber/FSM.jpg)

