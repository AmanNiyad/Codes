class Bill:
    def __init__(self, total):
        print("Total amt: ", total)

class card(Bill):
    def __init__(self,total):
        print("Swipe the card \n")
        super.__init__(total)

class cash(Bill):
    def __init__(self,total):
        print("Swipe the card \n")
        super.__init__(total)

tot = int(input("Enter total "))
opt = int(input("Card: 1, Cash: 2"))

if(opt == 1):
    c = card(tot)
else:
    c = cash(tot)
