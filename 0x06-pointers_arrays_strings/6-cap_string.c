/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: The string to capitalize.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *s)
{
	int i;
	int prev_sep = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			prev_sep = 1;
		}
		else if (prev_sep && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - ('a' - 'A');
			prev_sep = 0;
		}
		else
		{
			prev_sep = 0;
		}
	}
	
	return s;
}
