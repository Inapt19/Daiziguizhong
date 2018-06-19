有一个考场，考场里有且仅有一排座位，共 `N` 个座位，每个座位按顺序标记为 `0, 1, 2, ..., N-1`.

当有一个学生进入考场时，需要选择一个座位，该座位要和已在座位上的同学相隔 **最远**，如果有多个座位可选，选择 **序号最小的座位**，第一个进入到场的人，选择第 `0` 个座位。

定义如下的类：

```
class ExamRoom {
public:
    ExamRoom(int N) {
        
    }
    
    int seat() {
        
    }
    
    void leave(int p) {
        
    }
};

/**
 * 初始化和调用示例
 * ExamRoom obj = new ExamRoom(N);
 * int param_1 = obj.seat();
 * obj.leave(p);
 */
```

#### 测试用例:
```
Input: ["ExamRoom","seat","seat","seat","seat","leave","seat"], [[10],[],[],[],[],[4],[]]
Output: [null,0,9,4,2,null,5]
解释:
ExamRoom(10) -> null
seat() -> 0, 考场没人，选择第 `0` 个位置
seat() -> 9, 坐在第 `9` 个位置.
seat() -> 4, 可以选 `4, 5`，因此选小的 `4`.
seat() -> 2, 可以选 `2, 6, 7`, 因此选小的 `2` .
leave(4) -> null, 离场 
seat() -> 5, 可以选 `5, 6`, 因此选小的 `5`.
```
**Note:**

1. `1 <= N <= 10^9`
2. `ExamRoom.seat()` 和 `ExamRoom.leave()` 最多被调用 `10^4` 次.
3. 调用 `ExamRoom.leave(p)` 的时候，保证座位 `p` 上有人
#### 原题链接
[Exam Room](https://leetcode.com/problems/exam-room/description/)