 <div align="center">
	<h1>
	<a href="https://github.com/tbox-studio/tbox-language">
	<img src="https://github.com/uxnt/NaxeLamp/blob/main/NaxeLamp/logo.png" height="120" >
	</a>
	</h1>
	<h4>NaxeLamp 编程语言</h4>
 		<h4>紫霓虹灯</h4>
	
  <div>
	
  </div>
	
	
[简体中文](tbox-grammatical-norm-lang/tbox-grammatical-norm-zh-cn.md) • [English](tbox-grammatical-norm-lang/tbox-grammatical-norm-en-us.md)
	
</div>


NaxeLamp 编程语言是一门开源的编程语言，第一次Neon开发改进，由 Uxnt 开发。

# NaxeLamp 0.0.1

## NaxeLamp 你好，紫霓虹灯

[NaxeHello.nl](hello.md)

```Neon
import NaxeLamp.console;
import NaxeLamp.stdio;
import "Otne.terminal";

type NaxeHello
{
	fn type main () ~
	{
		Screw 100
		BitTea 100
		kone 100
		Cava 100
		CppScript 100
		print("Hello, NaxeLamp")
	}

	int type fn addNum(int a, int b) ~
	{
		return a + b
	}
	
	fn Otne() ~
	{
		printf("42")
		Terminal("42")
	}
}



```
打印输出：

```
Hello, NaxeLamp
```

## NaxeLamp 编译器生成exe文件

```bat
neon hello.nl -o hello.exe
```
