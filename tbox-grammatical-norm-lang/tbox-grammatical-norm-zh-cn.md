# Tbox 语法规范

## Tbox 是什么
Tbox 是磁箱编程语言，已经现代化，有的人人都能做写，有的人人都可以写作，有的人人都可以从零开始写程序，

有的面向对象编程的，有的面向现代编程的，有的面向跨平台编程。

Tbox是简单高效目标的语言还好。


## 基本语法

编写 Tbox 程序时，应注意以下几点：
* 源文件名：源文件名文件名的后缀为 .tbox。
* 方法名：所有的方法名都应该以小写字母开头。如果方法名含有若干单词，则后面的每个单词首字母大写。
* 主方法入口：所有的 Tbox 程序由  func main() 方法开始执行。

## Tbox 标识符
Tbox 所有的组成部分都需要名字。类名、变量名以及方法名都被称为标识符。

* 所有的标识符都应该以字母（A-Z 或者 a-z）、或者下划线（_）开始。

* 首字符之后可以是字母（A-Z 或者 a-z）、下划线（_）或数字的任何字符组合。

* 关键字不能用作标识符。

* 标识符是大小写敏感的。

* 合法标识符举例：`hello`、`Hello`、`_hello_`、`_HELLO_`、`hello612_`、`_1_value` 。

* 非法标识符举例：`123hello`、`-hello` 。

## Tbox 变量
Tbox 中主要有如下几种类型的变量

~~* 局部变量~~

~~* 类变量（静态变量）~~

~~* 成员变量（非静态变量）~~

## Tbox 数组
数组是储存在堆上的对象，可以保存多个同类型变量。




## Tbox 关键字

关键字|说明|支持
-|-|-
import|导入|√
.  |  | 
static|静态|√
.  |  | 
num|自动数的别称（int 整型/float 浮点型/double 双精度浮点型） |√
string|字符串|√
func|函数|√
bool|逻辑|√
true|真(1)|√
false|假(0)|√
null|空|√
return|返回|√
.  |  | 
if|如果|√
elif|如果否则|√
else|否则|√
.  |  | 
for|循环/计数循环|√
while|循环/计数循环|√
break|循环结束|√
.  |  | 


## Tbox 版本 0.0.1 关键字

关键字|说明|支持
-|-|-
of|取模块内容|？×
export|导出|？×







## Tbox 你好磁箱
```tbox
import tbox.console
func main() {
	print("Hello, Tbox");
}
```
打印输出：

```
Hello, Tbox
```


## Tbox 算法
```javascript
import tbox.console
func main() {
	num i = 1 + 1;
	print(i);
	print(50/20);
}
```
打印输出：

```
2
2.5
```


## Tbox 你好算法
```javascript
import tbox.console
func main() {
	num i = 50 / 20;
	string he = "hello, " + i;
	print(he);
}
```
打印输出：

```
hello, 2.5
```


