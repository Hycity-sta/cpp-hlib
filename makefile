.DEFAULT_GOAL:=all

cpp:=clang++ -std=c++20 -I include/

hlib.%:
	@$(cpp) src/$@.cpp -o cache/$@
	@echo build cache/$@

hlib.print:
hlib.assert:

all:\
	hlib.print\
	hlib.assert

clean:
	rm cache/*

