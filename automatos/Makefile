CC=gcc

all: ex1 ex2 ex3

ex1:
	$(CC) -o ab_star ab_star.c
ex2:
	$(CC) -o a_star_b_star_ab_star a_star_b_star_ab_star.c
ex3:
	$(CC) -o ba_star_dac_star ba_star_dac_star.c

.PHONY: clean
clean:
	rm -f ab_star
	rm -f a_star_b_star_ab_star
	rm -f ba_star_dac_star
