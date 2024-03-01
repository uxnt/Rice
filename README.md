 <div align="center">
	<h1>
	<a href="https://github.com/tbox-studio/tbox-language">
	<img src="https://github.com/uxnt/NaxeLamp/blob/main/NaxeLamp/logo.png" height="120" >
	</a>
	</h1>
	<h4>Rice 编程语言</h4>
  <div>
  </div>
	
	
[简体中文](tbox-grammatical-norm-lang/tbox-grammatical-norm-zh-cn.md) • [English](tbox-grammatical-norm-lang/tbox-grammatical-norm-en-us.md)
	
</div>

Rice 编程语言是一门开源的大米编程语言，第一次Neon/NaxeLamp开发改进，由 Uxnt大量团队开发。

# Rice 0.0.1

## Rice 你好，大米

[NaxeHello.nl](hello.md)

```Neon
import Rice.console;
import Rice.stdio;
import "Otne.terminal";

class RiceHello {
	fn type main () {
		// Screw 100
		// BitTea 100
		// kone 100
		// Cava 100
		// CppScript 100
		print("Hello, Rice")
	}
	int type fn addNum(int a, int b) {
		return a + b
	}
	fn Otne() {
		printf("42")
		Terminal("42")
	}
}

```
打印输出：

```
Hello, Rice
```

## Rice 编译器生成exe文件

```bat
rice hello.ri -o hello.exe
```
