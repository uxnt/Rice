# Tbox 语法规范

## Tbox 是什么
Tbox 是T型箱子编程语言，已经现代化，人人都能做写（人人都可以写作）（人人都可以从零开始写程序）。

有面向对象编程的，有面向现代编程的，有面向跨平台编程的

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

* 合法标识符举例：hello、Hello、_hello、hello_、_hello_、hello612、__1_value 。

* 非法标识符举例：123hello、-hello 。

## Tbox 变量
Tbox 中主要有如下几种类型的变量

~~* 局部变量~~

~~* 类变量（静态变量）~~

~~* 成员变量（非静态变量）~~

## Tbox 数组
数组是储存在堆上的对象，可以保存多个同类型变量。


## Tbox 关键字

关键字|说明
-|-
import|导入
num|数
string|字符串
func|函数
true|真的
false|假的
null|空
if|如果
elif|如果否则
else|否则
for|循环
while|循环
break|循环结束
for|计数循环
return|返回值

---

|num：|
|-|
|bool|
|int|
|long|
|double|
|float|











---
## Tbox 你好T型箱子
```javascript
import "console.tbox";
func main() {
	print("Hello, Tbox");
}
```
打印输出：

```
Hello, Tbox
```
----
## Tbox 算法
```javascript
import "console.tbox";
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
----
## Tbox 你好算法
```javascript
import "console.tbox";
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
---
