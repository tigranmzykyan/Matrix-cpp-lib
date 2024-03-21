CC=g++
TEST_CC=clang++
CPPFLAGS = -Wall -Werror -Wextra  -pedantic -std=c++17
LINK_GTEST = `pkg-config --libs gtest`
FLAG_GTEST = `pkg-config --cflags gtest`

all: clean s21_matrix_oop.a test

s21_matrix_oop.a:
	$(CC) $(CPPFLAGS) -c *.cpp
	ar rcv $@ *.o
	ranlib $@
	rm *.o

test:
	$(TEST_CC) $(CPPFLAGS) $(FLAG_GTEST) *.cpp __test__/*.cpp -o $@ $(LINK_GTEST)
	./$@

clean:
	rm -rf *.a *.o test