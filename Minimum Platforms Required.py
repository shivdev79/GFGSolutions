class Solution:
    def minPlatform(self, arr, dep):
        # code here
        temp = []
        platforms = 0
        min_platform = 0
        for i in range(len(arr)):
            temp.append([arr[i], "a"])
            temp.append([dep[i], "d"])
        temp.sort()
      
        for i,j in temp:
            if j == "a":
                platforms += 1
            elif j == "d":
                platforms -= 1
            min_platform = max(min_platform,platforms)
        return min_platform
        