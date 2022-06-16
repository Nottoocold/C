#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//从前向后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}

	}
	else
	{
		//从后往前拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
		}
	}
	return ret;
}


int main()
{
	//void * memcpy ( void * destination, const void * source, size_t num );拷贝不重叠内存
	//void * memmove ( void * destination, const void * source, size_t num );可以拷贝重叠的内存
	int a[] = { 1,2,3,4,5,6,7,8 };
	my_memmove(a, a + 2, 16);
	return 0;
}
