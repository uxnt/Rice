# Tbox Language
（T型箱子）语言
Tbox Language

# Tbox Language

[![](Tbox-logo.svg)](https://github.com/beanflame/tbox)

---
## Tbox 你好T型箱子
```tbox
// <=> import console; console.print
import {print} of "console.tbox";
func main() {
	print("Hello, Tbox");
}
```
打印输出：

```
Hello, Tbox
```
----
## Tbox 数学运算
```tbox
//import console;
import "console.tbox";
func main() {
	num i = 1/4 + 4^2;
	console.print(i);
}
```
打印输出：

```
6
```
---
## Tbox 判断
```tbox
//import console;
import {print} of "console.tbox";
func main() {
    num x = 6;
	if(x > 5) {
		print("Well done!");
	}else{
		print("Maybe some errors!");
	}
}
```
打印输出：
```
Well done!
```
---


---
## Tbox 字符串
```tbox
//import console;
import {print} of "console.tbox";
func main() {
	string version = "0.0.1";
	string title = "Text Game";
	string text = "那天，这你来玩呢";
	print(text);
	print("你好，好耶，稍等");
	print("稍等...");
}
```
打印输出：

```
那天，这你来玩呢
你好，好耶，稍等
稍等...
```

## TBox 模块系统
```tbox
// module.tbox
export func add (int a,int b):int{
	return a + b;
}
```

```tbox
//main.tbox
import {add} of module;
import console;

func main(){
     console.print(add(1,2));
}
```

输出:
```
3
```


## Tbox 关键字

关键字|说明
-|-
import|导入
of|取模块内容
export|导出
num|数
string|字符串
func|函数
true|真(1)
false|假(0)
null|空
if|如果
elif|如果否则
else|否则
for|循环
while|循环
break|循环结束
for|计数循环
return|返回

---

|num == int|
|-|
|bool|
|int|
|long|
|double|
|float|



