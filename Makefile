all: clean sds-test

sds-test: sds.c sds.h testhelp.h
	$(CC) -o sds-test sds.c run.c -Wall -std=c99 -pedantic -O2
	@echo ">>> Type ./sds-test to run the sds.c unit tests."
	./sds-test

clean:
	rm -f sds-test
