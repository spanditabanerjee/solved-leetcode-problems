from collections import itertools
def topKFrequent(nums,k):
    bucket = [[] for _ in nums]
    for num, freq in collections.Counter(nums).items():
        bucket[-freq].append(num)
    return list(itertools.chain(*bucket))[:k]
