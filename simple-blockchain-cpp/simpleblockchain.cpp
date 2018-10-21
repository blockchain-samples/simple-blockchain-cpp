// simpleblockchain.cpp : Defines the entry point for the console application.
#include "stdafx.h"

int main()
{
	blockchain bc;

	std::string data;
	std::cout << "Input number of blocks: ";
	std::getline(std::cin, data);
	const int numBlocksToInput = std::stoi(data);	

	for (int i = 0; i < numBlocksToInput; ++i) {
		std::cout << "Input block data: ";
		std::getline(std::cin, data);
		bc.createBlock(data);
	}

	const bool blockchainValid = bc.validateBlockchain();
	if (blockchainValid) {
		std::cout << "Blockchain is valid.\n";
	}
	else {
		std::cerr << "Error: Blockchain is not valid.\n";
	}

	return 0;
}