/**
 * @param {number} n
 * @return {number}
 * Time:    O(1)
 * Space:   O(1)
 * Strategy: [Insert Strategy Name]
 */
var func = function(n) {
    return Math.max(0, n-999);
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: 1002, expected: 3 },
        { args: 998, expected: 0 },
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