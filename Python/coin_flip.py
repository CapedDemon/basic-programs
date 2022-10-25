"""Welcome! This program write for fun gives you chance to play with coin.
Run the code, enter number of throws and the program count for you how many
heads and tails you hit. Awesome!
www.github/bmalvo"""

import random


class Coin:
    """creating properties coin objects"""
    def __init__(self):
        pass

    @classmethod
    def throws(cls,numbers_throws=1):
        """counting hiting for heads and tails"""
        result = {'head':0,
                  'tail':0}
        for throw in range(numbers_throws):
            throw = random.choice(['head','tail'])
            result[throw] += 1

        output=  f"""You throw coin {numbers_throws} times!
Hit Head {result['head']} times.
Hit Tail {result['tail']} times."""

        return output

coin = Coin()

def throws_from_user():
    """retrive data about numbers of throws from user"""
    number_throws = int(input('How manu times You want throw the coin?  '))
    print(coin.throws(number_throws))

throws_from_user()
