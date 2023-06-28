main = do
    putStrLn("Enter name")
    name <- getLine
    putStrLn(name)
    age <- getLine
    let myAge = read age :: Int
    print(myAge)
    let myAgee = myAge + 10
    print(myAgee)
