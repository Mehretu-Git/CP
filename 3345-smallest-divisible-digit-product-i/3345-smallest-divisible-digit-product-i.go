func digitProduct(n int) int{
    if n < 10{
        return n;
    }
    x := n/10
    y := n%10
    return (n*n - y*y - 100*x*x)/20
}
func smallestNumber(n int, t int) int {
    for(digitProduct(n) % t != 0){
        n++
    }
    return n
}