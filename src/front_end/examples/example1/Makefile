TBOX := ../compiler/tbox
CLANG := clang

.PHONY: build

build:
	${TBOX} ./a.tbox ./a.o
	${CLANG} ./b.c -c -o ./b.o
	${CLANG} ./a.o ./b.o -o ./example.exe