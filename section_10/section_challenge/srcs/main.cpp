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

	string	user_input {""};
	cout << "Please enter your message: ";
	getline(cin, user_input);
	cout << "\nHere is your decrypted message: " << user_input << endl;

	for (size_t i {0}; i < user_input.size(); i++)
	{
		if (!isalpha(user_input.at(i)))
			continue;
		int	letter_pos = alphabet.find(user_input.at(i));
		user_input.at(i) = key.at(letter_pos);
	}
	cout << "Here is your encrypted message: " << user_input << endl;
}
