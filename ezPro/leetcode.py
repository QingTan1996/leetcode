#!/usr/bin/python3
#coding=utf-8
class solution:
    def move(self,nums):
        nLen=len(nums)
        i=index=0
        while i<nLen:
            if nums[i]!=0:
                nums[index]=nums[i]
                index+=1
            i+=1
        for k in range(index,nLen):
            nums[k]=0


if __name__=='__main__':
    nums=[0,1,2,0,9,10]
    print(nums)
    s=solution()
    s.move(nums)
    print(nums)
