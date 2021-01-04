#include "../includes/section_challenge/header.h"

int	main()
{
	section_challenge();
	return 0;
}

void	section_challenge()
{
	string	alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string	key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	string	encrypted_message {""};

	string	decrypted_message {""};
	cout << "Please enter your message: ";
	getline(cin, decrypted_message);
	cout << "\nHere is your DEcrypted message: " << decrypted_message << endl;

	for (char c : decrypted_message)
	{
		size_t letter_pos {alphabet.find(c)};
		if (letter_pos == string::npos && !isalpha(c))
			encrypted_message += c;
		else
			encrypted_message += key.at(letter_pos);
	}

	cout << "Here is your ENcrypted message: " << encrypted_message << endl;
}
