#include "main.h"

int
is_prime_number(int n)
{
	return (beast(n, 1));
}

int
beast(int gg, int nt)
{
	if (gg <= 1)
		return (0);

	if (gg % nt == 0 && nt > 1)
		return (0);

	if ((gg / nt) < nt)
		return (1);

	return (beast(gg, nt + 1));
}
