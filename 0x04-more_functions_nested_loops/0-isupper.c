/*
 * _isupper - check if letter is upper case or not
 * Description: check if character is upper case or not 
 * @c: character
 * Return: 1 if upper 0 of lower
 */
int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' || c <= 'z)
	{
		return (0);
	}
}

