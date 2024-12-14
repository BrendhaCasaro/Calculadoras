run:
	gcc -o math math_utils.c && ./math && rm math


test:
	gcc -o test math_utils_test.c && ./test &&rm test