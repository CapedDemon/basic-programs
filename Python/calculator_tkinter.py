from tkinter import *
root = Tk()
root.title("Simple Claculator 👍")
e = Entry(root,width=40, borderwidth=3)
e.grid(row=0,columnspan=3)

def click0():
    e.insert(len(e.get()),string=0)
Button(root, text="0", command=click0, padx=30, pady=30, bg='red').grid(row=4,column=0)

def click1():
    e.insert(len(e.get()),string=1)
Button(root, text="1", command=click1, padx=30, pady=30).grid(row=3,column=2)

def click2():
    e.insert(len(e.get()),string=2)
Button(root, text="2", command=click2, padx=30, pady=30).grid(row=3,column=1)

def click3():
    e.insert(len(e.get()),string=3)
Button(root, text="3", command=click3, padx=30, pady=30).grid(row=3,column=0)

def click4():
    e.insert(len(e.get()),string=4)
Button(root, text="4", command=click4, padx=30, pady=30).grid(row=2,column=2)

def click5():
    e.insert(len(e.get()),string=5)
Button(root, text="5", command=click5, padx=30, pady=30).grid(row=2,column=1)

def click6():
    e.insert(len(e.get()),string=6)
Button(root, text="6", command=click6, padx=30, pady=30).grid(row=2,column=0)

def click7():
    e.insert(len(e.get()),string=7)
Button(root, text="7", command=click7, padx=30, pady=30).grid(row=1,column=2)

def click8():
    e.insert(len(e.get()),string=8)
Button(root, text="8", command=click8, padx=30, pady=30).grid(row=1,column=1)

def click9():
    e.insert(len(e.get()),string=9)
Button(root, text="9", command=click9, padx=30, pady=30).grid(row=1,column=0)

def addup():
    e.insert(len(e.get()),string="+")
Button(root, text="+", command=addup, padx=30, pady=30).grid(row=4,column=1)

def clear():
    e.delete(0, len(e.get()))
Button(root, text="Clear All", command=clear, padx=30, pady=30).grid(row=5,column=0, columnspan=4)

def clearO():
    e.delete(len(e.get())-1, len(e.get()))
Button(root, text="Clear", command=clearO, padx=30, pady=30).grid(row=6,column=0, columnspan=4)

def calc():
    a=e.get().split("+")
    a = sum([int(a) for a in a if a])
    e.delete(0, len(e.get()))
    e.insert(0,string=a)
Button(root, text="=", command=calc, padx=30, pady=30).grid(row=4,column=2)

root.mainloop()
