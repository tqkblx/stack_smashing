compile-no-canary:
	gcc main.c -o main
compile-canary:
	gcc main.c -fstack-protector -o main
