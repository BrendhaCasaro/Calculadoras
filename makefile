run:
	gcc -o main main.c -lreadline  && ./main && rm -rf main


test:
	gcc -o test math_utils_test.c && ./test && rm test