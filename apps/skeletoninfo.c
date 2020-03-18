#include <stdio.h>
#include <skeleton.h>

int main(void)
{
	printf("libskeleton version is %s\n", 
			skeleton_get_lib_version());
	return 0;
}
