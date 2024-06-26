retirement: retirement.c
	gcc -o retirement -pedantic -std=gnu99 -Wall -Werror retirement.c
retirement.txt: retirement
	./retirement > retirement.txt
compare.txt: retirement.txt retirement_ans.txt
	diff -y retirement.txt retirement_ans.txt > compare.txt
retirement.dSYM: retirement.c
	gcc -g retirement.c -o retirement

