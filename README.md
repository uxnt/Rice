<div align="center">

  <a href="https://github.com/tbox-studio/tbox-language">
    <img width="600" heigth="215" src="https://github.com/tbox-studio/tbox-language/blob/main/tbox-logo-600x215.png">
  </a>

  <div>
	<!--
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3AWindows">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/Windows/dev.svg?style=flat-square&logo=windows" alt="github-ci" />
    </a>
	-->
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3ALinux">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/Linux/dev.svg?style=flat-square&logo=linux" alt="github-ci" />
    </a>
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3AmacOS">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/macOS/dev.svg?style=flat-square&logo=apple" alt="github-ci" />
    </a>
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3AAndroid">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/Android/dev.svg?style=flat-square&logo=android" alt="github-ci" />
    </a>
    <a href="https://github.com/tbox-studio/tbox-language/releases">
      <img src="https://img.shields.io/github/release/tbox-studio/tbox-language.svg?style=flat-square" alt="Github All Releases" /> 
    </a> 
  </div>
  <div>
    <a href="https://github.com/tbox-studio/tbox-language/blob/master/LICENSE.md">
      <img src="https://img.shields.io/github/license/tbox-studio/tbox-language.svg?colorB=f48041&style=flat-square" alt="license" />
    </a>
    <a href="https://www.reddit.com/r/tboox/">
      <img src="https://img.shields.io/badge/chat-on%20reddit-ff3f34.svg?style=flat-square" alt="Reddit" />
    </a>
    <a href="https://gitter.im/tboox/tboox?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge">
      <img src="https://img.shields.io/gitter/room/tbox-studio/tbox-language.svg?style=flat-square&colorB=96c312" alt="Gitter" />
    </a>
    <a href="https://t.me/tbooxorg">
      <img src="https://img.shields.io/badge/chat-on%20telegram-blue.svg?style=flat-square" alt="Telegram" />
    </a>
    <a href="https://jq.qq.com/?_wv=1027&k=5hpwWFv">
      <img src="https://img.shields.io/badge/chat-on%20QQ-ff69b4.svg?style=flat-square" alt="QQ" />
    </a>
    <a href="https://tboox.org/donation/">
      <img src="https://img.shields.io/badge/donate-us-orange.svg?style=flat-square" alt="Donate" />
    </a>  
  </div>
  <p>Tbox编程语言</p>
</div>




[简体中文](tbox-grammatical-norm-lang/tbox-grammatical-norm-zh-cn.md)

[English](tbox-grammatical-norm-lang/tbox-grammatical-norm-en-us.md)


# Tbox Language
Tbox Language


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

|num(int的别称)|
|-|
|bool|
|int|
|long|
|double|
|float|



