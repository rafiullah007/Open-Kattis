from itertools import combinations

def solve():
  
    box_heights = list(map(int, input().split()))
    tower1_height, tower2_height = box_heights[6], box_heights[7]
    box_heights = box_heights[:6]
    
    box_heights.sort()
    
    
    for comb in combinations(box_heights, 3):
        if sum(comb) == tower1_height:
            second_tower = [x for x in box_heights if x not in comb]
            
            first_tower = sorted(comb, reverse=True)
            second_tower = sorted(second_tower, reverse=True)
            
            print(' '.join(map(str, first_tower)),' '.join(map(str, second_tower)))
            break

solve()
