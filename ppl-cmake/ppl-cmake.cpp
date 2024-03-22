// ppl-cmake.cpp : Defines the entry point for the application.
//

#include "ppl-cmake.h"

#include <pthread.h>

void* thread1_func(void* arg)
{
	printf("Thread 1\n");
}

int main()
{
	pthread_t thread1, thread2;
	pthread_create(&thread1, nullptr, thread1_func, nullptr);
	pthread_create(&thread2, nullptr, thread1_func, nullptr);

	pthread_join(thread1, nullptr);
	pthread_join(thread2, nullptr);

	return 0;
}
