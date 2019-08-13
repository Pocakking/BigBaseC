#include "pattern.h"

FORCEINLINE int pattern_matches(const uint8_t *data, size_t length, const uint8_t *pattern, const char *mask)
{
	size_t i;

	for (i = 0; i < length; ++i)
	{
		if (mask[i] != '?' && pattern[i] != data[i])
		{
			return 0;
		}
	}

	return 1;
}

void *find_pattern(void *data, size_t length, const uint8_t *pattern, const char *mask)
{
	size_t pattern_length;
	uint8_t *i;
	uint8_t *end;

	pattern_length = strlen(mask);

	for (i = data, end = i + length - pattern_length; i < end; ++i)
	{
		if (pattern_matches(i, pattern_length, pattern, mask))
		{
			return i;
		}
	}

	return NULL;
}
