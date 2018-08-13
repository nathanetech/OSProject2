// OSProject2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <cstdlib>
#include <pthread.h>
#include <semaphore.h>
#include <iostream>
#include <ctime>

using namespace std;

char randomChar()
{
	srand(time(NULL));
	char c = 'a' + rand() % 26;
	return c;
}

int main()
{
	pthread_t produce;
	int producerThread;

	pthread_t consume;
	int consumerThread;

	producerThread = pthread_create(&produce, NULL, &producer, NULL);
	consumerThread = pthread_create(&consume, NULL, &consumer, NULL);
	return 0;
}

