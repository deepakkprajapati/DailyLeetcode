/**
 * Time:   O(1)
 * Space:  O(1)
 * Strategy: [Insert Strategy Name]
 */
const solve = (n: number): number => {
    return Math.max(0, n-999);
};
/**
 * Local testing
 */
interface TestCase {
    args: number;
    expected: number;
}
function test(): void {
    const testCases: TestCase[] = [
        { args: 1002, expected: 3 },
        { args: 998, expected: 0 },
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = solve(args);
        const isPassed = result === expected;
        const status = isPassed ? "✅ PASS" : "❌ FAIL";
        console.log(
            `${status} | Test #${index + 1}: ` +
            `Input: ${JSON.stringify(args)} | ` +
            `Expected: ${expected} | ` +
            `Result: ${result}`
        );
    });
}
test();
export {}; // This forces the file to be treated as a module with its own scope
