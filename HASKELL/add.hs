add :: Int -> Int -> Int
add num1 num2 = num1+ num2


main = do
    putStrLn("Enter the numbers")
    temp<-getLine
    let num1=read temp::Int
    temp<-getLine
    let num2=read temp::Int
    let res = add num1 num2
    print(res)
