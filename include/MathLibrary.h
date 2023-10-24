#ifndef MATHLIBRARY_H_

#define MATHLIBRARY_H_


#include <iostream>

#include <limits.h>

#define log(x) do{                     \
std::cout << "LOG:" << x << std::endl; \
                }while(0)

#pragma once

#define VSDLL_EXPORT

#ifdef VSDLL_EXPORT

#define MATHLIBRARY_API __declspec(dllexport)

#else

#define MATHLIBRARY_API __declspec(dllimport)

#endif // VSDLL_IMPORT

#ifdef __cplusplus

extern "C" {

#endif

	void MATHLIBRARY_API __cdecl fibonacci_init( // must used extern "C"
		const unsigned long long a, const unsigned long long b);

	// Produce the next value in the sequence.
	// Returns true on success and updates current value and index;
	// false on overflow, leaves current value and index unchanged.
	bool MATHLIBRARY_API __cdecl fibonacci_next();

	// Get the current value in the sequence.
	unsigned long long MATHLIBRARY_API __cdecl fibonacci_current();

	// Get the position of the current value in the sequence.
	unsigned MATHLIBRARY_API __cdecl fibonacci_index();

	class MATHLIBRARY_API MyClass
	{
	public:
		MyClass();

		~MyClass();

		char p_szSentence[256];

		char szOutofClass[256];

		void* outputWord();

	private:

	};

#ifdef __cplusplus
}
#endif // Define cplusplus 

#endif // Define Header.
      