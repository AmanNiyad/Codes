from subprocess import IDLE_PRIORITY_CLASS


def stack():#practice stack
    print("Enter what to do")
    li=[]
    ch=input("1. Add to listn\n2.Delete from list\n3.Display list")
    if(ch==1):
        while True:
            num=input("Enter the number to add")
            li.append(num)
            ch1=input("Continue to add?(Y/N)")
            if(ch1=='Y' or ch1=="y"):
                continue
            elif(ch1=="N" or ch1=="n"):
                break
            else:
                print("Pls enter a valid input")
    
    elif(ch==2):
        li.pop()
    else:
        print(li)
 