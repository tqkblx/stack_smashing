compile-no-canary:
	gcc main.c -fno-stack-protector -o main
compile-canary:
	gcc main.c -fstack-protector -o main
