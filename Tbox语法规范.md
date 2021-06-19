# Tbox 语法规范

## Tbox 是什么
Java是面向对象的编程语言，一个 Java 程序可以认为是一系列对象的集合，而这些对象通过调用彼此的方法来协同工作。下面简要介绍下类、对象、方法和实例变量的概念。
Tbox 是T型箱子编程语言，已经现代化，人人都能做写。



## 基本语法

编写 Tbox 程序时，应注意以下几点：

* 主方法入口：所有的 Tbox 程序由  func main() 方法开始执行。

 

















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
