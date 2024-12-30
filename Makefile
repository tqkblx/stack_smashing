compile-no-canary:
	gcc main.c -Wno-fstack-protector -o main
compile-canary:
	gcc main.c -fstack-protector -o main
