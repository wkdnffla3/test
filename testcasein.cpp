#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	FILE *fp;
	fp = fopen("testin.txt", "w");
	fprintf(fp, "100\n");
	for (int i = 0; i < 100 * 101 / 2; i++)
		fprintf(fp, "%d\n", rand() % 1000);

	fclose(fp);
	return 0;
}