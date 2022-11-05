#include <stdio.h>

long long getBranches(long long maxLevel, long long branches , long long currentLevel) {
  long long branchCount = branches;
  branchCount--;
  if (maxLevel == currentLevel) {
    return 0; 
  } else {
    long long childBranchCount = getBranches(maxLevel, branches-1, currentLevel+1);
    long long childBranch = branches - 1;
    branchCount += childBranchCount * childBranch;
    branchCount %= 1000000000;
    branchCount += maxLevel-currentLevel; 
    branchCount %= 1000000000;
  }

  return branchCount;
}

int main()
{
    long long test;
    scanf("%lld", &test);
    for (long long t = 0; t < test; t++)
    {
        long long height, rootBranch;
        scanf("%lld %lld", &height, &rootBranch);
        printf("%lld %lld", height, rootBranch);
        printf("Case #%lld: %lld\n", t+1, getBranches(height, rootBranch, 0));
    }

    return 0;
}