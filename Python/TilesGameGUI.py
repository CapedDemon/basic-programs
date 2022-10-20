import random
import tkinter
from tkinter import *
from tkinter import ttk

arr=[["","","",""],["","","",""],["","","",""]]
sol=[["","","",""],["","","",""],["","","",""]]
con=[0,0,0,0,0,0]
char= ['$', '#', '%', '@','?','+']

root= Tk()
root.title("Tile Flippin Game")
root.geometry("1000x1000")

frame= Frame(root, bg='green')
frame.place(height=100, width=100, relheight=1/2, relwidth=1/2, relx=1/4, rely=1/4)

label = Label(text= "FLIP A TILE", font=('consolas',40))
label.pack(side="top")

def gamegen():
    k=0
    while k<12:
        m,n=random.randint(0,2),random.randint(0,3)
        if sol[m][n]=="":
            if k>5:
                sol[m][n]=char[k-6]
            else:
                sol[m][n]=char[k]
            k+=1
        else:
            continue

def wincheck():
    if arr==sol:
        return True
    else:
        return False

gamegen()

t,m,n=0,0,0

def turn(r, c, btn):
    global t, m , n
    print(t)
    print(r,c)
    prev=0
    if wincheck()==False:
        prev= arr[m][n]
 
        if arr[r][c]=="":
            if t==0:
                arr[r][c]=sol[r][c]
                btn[r][c].config(text=arr[r][c])
                m,n= r, c
                con[char.index(sol[m][n])]+=1
                t+=1
                label.config(text="Flip another tile.")
                
            
            elif con[char.index(sol[m][n])]==2:
                arr[r][c]=sol[r][c]
                btn[r][c].config(text=arr[r][c])
                m,n=r,c
                con[char.index(sol[r][c])]+=1
                prev=sol[r][c]
                label.config(text="Now try finding its pair")

            elif con[char.index(sol[m][n])]==1 and prev==sol[r][c]:
                arr[r][c]=sol[r][c]
                btn[r][c].configure(text=arr[r][c], bg="black", fg='white')
                btn[m][n].configure(text=arr[m][n], bg="black", fg='white')
                m,n=r,c
                con[char.index(sol[m][n])]+=1
                label.config(text="Good Job, Flip Again")

            elif con[char.index(sol[m][n])]==0:
                arr[r][c]=sol[r][c]
                btn[r][c].config(text=arr[r][c])
                m,n= r, c
                con[char.index(sol[m][n])]+=1
                label.config(text = "Now find its partner...")
        
            else:
                arr[m][n]=""
                btn[m][n].config(text="")
                con[char.index(sol[m][n])]-=1
                label.config(text="OOPS, Wrong Tile. Try Again")
  
        else:
            label.config(text="Tile is already flipped.")

        if wincheck()==True:
            label.config(text="YOU WON!!", fg="Green")

button=[['.','.','.','.'],['.','.','.','.'],['.','.','.','.']]

for row in range(3):
    for column in range(4):
        button[row][column] = Button(frame,bg="yellow",bd=5,relief=RAISED, text=arr[row][column],font=('consolas',40), command= lambda x=row, y=column: turn(x, y, button))
        button[row][column].place(relx=(column/4), rely=(row/3), relheight=1/4, relwidth=1/3)

print(button)

root.mainloop()