/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 * Time:    O(N)
 * Space:   O(1)
 * Strategy: sumofarray%k
 */
var func = function(nums, k) {
    let sum =0;
    for (const x of nums) {
        sum += x;
    }
    return sum%k;
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [[3,9,7], 5], expected: 4 },
        { args: [[4,1,3],4], expected: 0 },
        { args: [[3,2],6], expected: 5 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = func(...args);
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
