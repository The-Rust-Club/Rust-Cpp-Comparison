all: main

target/debug/libadd.*: src/lib.rs
	cargo build

.PHONY: target/cpp
target/cpp:
	mkdir -p target/cpp

target/cpp/add.o: target/cpp src/main.cpp
	g++ -c -o target/cpp/add.o src/main.cpp

main: target/cpp/add.o
	g++ -o main target/cpp/add.o -ladd -Ltarget/debug
