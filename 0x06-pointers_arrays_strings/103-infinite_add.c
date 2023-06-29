#include "main.h"
#include <string.h>

/**
 *  * infinite_add - Adds two numbers.
 *   * @n1: The first number.
 *    * @n2: The second number.
 *     * @r: The buffer to store the result.
 *      * @size_r: The size of the buffer.
 *       *
 *        * Return: Pointer to the result or 0 if the result cannot be stored in r.
 *         */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
		int len1, len2, max_len, sum, carry = 0, i, j, k;
			int left = 0;

				len1 = strlen(n1);
					len2 = strlen(n2);
						max_len = (len1 > len2) ? len1 : len2;

							if (max_len + 1 > size_r) 
										return (0);

								r[max_len + 1] = '\0';

									for (i = len1 - 1, j = len2 - 1, k = max_len; k >= 0; i--, j--, k--)
											{
														sum = carry;
																if (i >= 0)
																				sum += n1[i] - '0';
																		if (j >= 0)
																						sum += n2[j] - '0';

																				if (i >= 0 || j >= 0)
																								left = sum / 10;

																						r[k] = sum % 10 + '0';
																								carry = left;
																									}

										if (carry)
												{
															for (i = max_len; i >= 0; i--)
																			r[i + 1] = r[i];
																	r[0] = carry + '0';
																		}

											return (r);
}

