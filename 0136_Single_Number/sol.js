/**
 * @param {number[]} nums
 * @return {number}
 * Time:    O(N)
 * Space:   O(N)
 * Strategy: XOR
 */
var func = function(nums) {
    let result = 0;
    for (const x of nums) {
        result ^= x;
    }
    return result;
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: [2,2,1], expected: 1 },
        { args: [4,1,2,1,2], expected: 4 },
        { args: [1], expected: 1 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        // Use spread syntax (...) to pass array elements as separate arguments
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
