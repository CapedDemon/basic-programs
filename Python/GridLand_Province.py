class Solution:
    def __init__(self):
        self.size = int(input())
        self.array = []
        self.array.append(input().strip())
        self.array.append(input().strip())
        self.hash = set()

    def add_to_hash(self, results):
        for set_str in results:
            self.hash.add(hash(set_str))
            self.hash.add(hash(set_str[::-1]))

    def calculate(self):
        if len(set(self.array[0]+self.array[1]))==1:
            return 1
        results = self.get_circles(self.array[0]+self.array[1][::-1])
        full_string1 = self.array[1][::-1]+self.array[0]
        full_string2 = self.array[0][::-1]+self.array[1]
        full_zigzags=self.get_zigzag('',1,0,+1)
        self.add_to_hash(results)
        results=set(full_zigzags.keys())
        for i in range(1,self.size):
            for zig,diverge in full_zigzags.items():
                if diverge < i:
                    continue
                j = self.size -i
                if i%2 == 0:
                    new_str = full_string2[j:-j]+zig[i*2:]
                else:
                    new_str = full_string1[j:-j]+zig[i*2:]
                results.add(new_str)

        self.add_to_hash(results)
        full_zigzags=self.get_zigzag('',0,0,+1)
        results=set(full_zigzags.keys())
        for i in range(1,self.size):
            for zig,diverge in full_zigzags.items():
                if diverge < i:
                    continue
                j = self.size -i
                if i%2 == 0:
                    new_str = full_string1[j:-j]+zig[i*2:]
                else:
                    new_str = full_string2[j:-j]+zig[i*2:]
                results.add(new_str)
        self.add_to_hash(results)
        return len(self.hash)

    def get_circles(self,loop):
        circles = set()
        circles.add(loop)
        for i in range(self.size*2-1):
            loop = loop[1:]+loop[0]
            circles.add(loop)
        return circles

    def get_zigzag(self,seed,row,col,right):
        output = list(seed)
        steps = 0
        zigzags = {}
        while col >=0 and col <self.size:
            output.append(self.array[row][col])
            steps+=1
            row = 0 if row == 1 else 1
            if steps < self.size*2:
                zigzags[self.add_circle_diversion(row,col,right,''.join(output))]=steps//2
            output.append(self.array[row][col])
            steps+=1
            col+=right
        zigzags[''.join(output)]=self.size
        return zigzags

    def add_circle_diversion(self, row, col, right, built_str):
        built_str+=self.array[row][col::right]
        remaining = 2*self.size-len(built_str)
        if remaining == 0:
            return built_str
        row = 0 if row == 1 else 1
        built_str+=self.array[row][::-1*right][:remaining]
        return built_str

def main():
    cases = int(input())
    for i in range(cases):
        my_object = Solution()
        print(my_object.calculate())


def get_int_list(in_str):
    return [int(i) for i in in_str.strip().split()]


if __name__ == "__main__":
    main()
