/**
 * hash_djb2 -  A hash function that implement the djb2 algo
 * @str:  Pointer to string to be passed to the hash function
 *
 * Return: Hashed number
 */
unsigned long int hash_djb2(unsigned const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 32 + c */
	}
	return (hash);
}
