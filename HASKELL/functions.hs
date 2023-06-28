sayHello :: String -> Int -> IO()
sayHello name age = do
    putStrLn(name)
    putStrLn("Niyad")
    putStrLn("Age"++ show(age))

main :: IO()
main = do
    putStrLn("Hi, Enter name and then age!")
    name <- getLine
    temp <- getLine
    let age = read temp::Int
    sayHello name age

