#include <stdio.h>
#include <stdlib.h>

typedef int Thuy;
void findTwoSum(Thuy nums[], int size, Thuy target){
	for (int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++){
			if (nums[i] + nums[j] == target){
				printf("Output: [%d %d]\n, i, j");
				return;
			}
		}
	}
	printf(" KHONG TIM THAYA CAP SO THOA MAN.\n");
}

int main(){
	Thuy nums[] = {2, 7, 11, 13};
	Thuy target = 18;
	int size = sizeof(nums) / sizeof(nums[0]);
	
	printf("Input: nums[%d %d], target = %d\n", nums[1], nums[2], target);
	 findTwoSum(nums, size, target);
	 
	 return 0;
}
