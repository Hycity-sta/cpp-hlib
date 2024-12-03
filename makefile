cpp:=clang++ -std=c++20 -I./

.PHONY: cache/hlib.print.test
cache/hlib.print.test:
	$(cpp) hlib.print.test.cpp --output=cache/hlib.print.test

clean:
	rm cache/*

