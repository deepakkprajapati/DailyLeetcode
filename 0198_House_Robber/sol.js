/**
 * @param {number[]} nums
 * @return {number}
 * Time:    O(N)
 * Space:   O(1)
 * Strategy: DP(iterative bottom-up)
 */
var func = function(nums) {
    let result = 0;
    let prev =0, prevprev = 0 ;
    for (let i = 0; i < nums.length; i++) {
        result = Math.max(prevprev +nums[i], prev);
        prevprev = prev;
        prev = result;
    }
    return result;
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [1,2,3,1], expected: 4 },
        { args: [2,7,9,3,1], expected: 12 },
        { args: [2,1,1,2], expected: 4 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = func(args);
        const status = (result === expected) ? "✅ PASS" : "❌ FAIL";
        console.log(
            `${status} | Test #${index + 1}: ` +
            `Input: ${JSON.stringify(args)} | ` +
            `Expected: ${expected} | ` +
            `Result: ${result}`
        );
    });
}
test();