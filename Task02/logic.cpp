#include "logic.h"

bool is_the_perfect_number(long long number) {

	if (number % 2 != 0) {
		return false;
	}

	int sum = 1;
	int n = number / 2;
	for (int div = 2; div <= n; div++) {
		if (number % div == 0) {
			sum += div;
		}
	}

	return sum == number;
}

	/*switch (number) {
	case 6:
	case 28:
	case 496:
	case 8128:
	case 33550336:
	case 8589869056:
	case 137438691328:
		return true;
	default:
		return false;
	}
}*/