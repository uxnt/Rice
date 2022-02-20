<div align="center">

  <a href="https://github.com/tbox-studio/tbox-language">
    <img src="https://github.com/tbox-studio/tbox-language/blob/main/tbox-logo-600x215.png" height="120" >
  </a>

  <div>
	<!--
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3AWindows">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/Windows/dev.svg?style=flat-square&logo=windows" alt="github-ci" />
    </a>
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3ALinux">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/Linux/dev.svg?style=flat-square&logo=linux" alt="github-ci" />
    </a>
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3AmacOS">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/macOS/dev.svg?style=flat-square&logo=apple" alt="github-ci" />
    </a>
    <a href="https://github.com/tbox-studio/tbox-language/actions?query=workflow%3AAndroid">
      <img src="https://img.shields.io/github/workflow/status/tbox-studio/tbox-language/Android/dev.svg?style=flat-square&logo=android" alt="github-ci" />
    </a>
	-->
    <a href="https://github.com/tbox-studio/tbox-language/releases">
      <img src="https://img.shields.io/github/release/tbox-studio/tbox-language.svg?style=flat-square" alt="Github All Releases" /> 
    </a> 
  </div>
  <div>
    <a href="https://github.com/tbox-studio/tbox-language/blob/master/LICENSE">
      <img src="https://img.shields.io/github/license/tbox-studio/tbox-language.svg?colorB=f48041&style=flat-square" alt="license" />
    </a>
    <a href="https://www.reddit.com/r/tbox_language/">
      <img src="https://img.shields.io/badge/chat-on%20reddit-ff3f34.svg?style=flat-square" alt="Reddit" />
    </a>
    <a href="https://gitter.im/tbox-studio/tbox-language?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge">
      <img src="https://img.shields.io/gitter/room/tbox-studio/tbox-language.svg?style=flat-square&colorB=96c312" alt="Gitter" />
    </a>
    <a href="https://t.me/tbox_language">
      <img src="https://img.shields.io/badge/chat-on%20telegram-blue.svg?style=flat-square" alt="Telegram" />
    </a>
    <a href="https://jq.qq.com/?_wv=1027&k=evYz1PC3">
      <img src="https://img.shields.io/badge/chat-on%20QQ-ff69b4.svg?style=flat-square" alt="QQ" />
    </a>
	  <!--
    <a href="https://tboox.org/donation/">
      <img src="https://img.shields.io/badge/donate-us-orange.svg?style=flat-square" alt="Donate" />
    </a>  
	  -->
  </div>
  <p>Tbox编程语言</p>
	
[简体中文](tbox-grammatical-norm-lang/tbox-grammatical-norm-zh-cn.md) • [English](tbox-grammatical-norm-lang/tbox-grammatical-norm-en-us.md)
	
</div>





# Tbox Language

[![Join the chat at https://gitter.im/tbox-studio/tbox](https://badges.gitter.im/tbox-studio/tbox.svg)](https://gitter.im/tbox-studio/tbox?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

Tbox Language

# MIT License
```Copyright (c) 2021 Tbox Studio```

---

## Tbox 你好磁箱

[Tbox-Hello](hello.md)

```tbox
import tbox.console;
func main() {
	print("Hello, Tbox");
}
```
打印输出：

```
Hello, Tbox
```

## Tbox 编译器生成EXE文件

```bat
tbox hello.tbox -o hello.exe
```
