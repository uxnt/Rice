# Tbox 语法规范

## Tbox 是什么
Tbox 是T型箱子编程语言，已经现代化，人人都能做写。

## 基本语法

编写 Tbox 程序时，应注意以下几点：
* 源文件名：源文件名文件名的后缀为 .tbox。
* 方法名：所有的方法名都应该以小写字母开头。如果方法名含有若干单词，则后面的每个单词首字母大写。
* 主方法入口：所有的 Tbox 程序由  func main() 方法开始执行。

## Tbox 标识符
Tbox 所有的组成部分都需要名字。类名、变量名以及方法名都被称为标识符。

* 所有的标识符都应该以字母（A-Z 或者 a-z）,、或者下划线（_）开始。

* 首字符之后可以是字母（A-Z 或者 a-z）,美元符（$）、下划线（_）或数字的任何字符组合。

* 关键字不能用作标识符。

* 标识符是大小写敏感的。

* 合法标识符举例：hello、Hello、_hello、hello_、_hello_、hello612、__1_value 。

* 非法标识符举例：123hello、-hello 。
















---
## Tbox - 你好T型箱子
```javascript
//import console;
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
## Tbox - 算法
```javascript
//import console;
import "console.tbox";
func main() {
	math i = 1 + 1;
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
## Tbox - 你好算法
```javascript
//import console;
import "console.tbox";
func main() {
	math i = 50 / 20;
	string he = "hello, " + i;
	print(he);
}
```
打印输出：

```
hello, 2.5
```
---
