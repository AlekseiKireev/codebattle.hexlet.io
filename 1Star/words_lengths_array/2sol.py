from typing import List, Dict

def solution(words: List[str]) -> List[int]:
    return [len(i) for i in words]


def solution(words: List[str]) -> List[int]:
    return list(map(len, words))
