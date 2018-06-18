// Simplified version:
struct retdata {
	int min,
		max,
		avg;
};

int super_func(int *arr, struct retdata *ret)
{
	ret->min = ret->max = ret->avg = *arr;
	return 0;
}
