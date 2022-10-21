from tkinter import *
from PIL import Image, ImageTk

root = Tk()
root.title("iconbitmap may be given")

# Add 'your' file paths here
i1 = ImageTk.PhotoImage(Image.open("C:\\Users\\HP\\Pictures\\New folder\\3q4asb3jbqf71.jpg").resize((350,350)))
i2 = ImageTk.PhotoImage(Image.open("C:\\Users\\HP\\Pictures\\New folder\\8ed6544e-89d0-4921-a56d-a3f4bced1084.jpg").resize((350,350)))
i3 = ImageTk.PhotoImage(Image.open("C:\\Users\\HP\\Pictures\\New folder\\Floating Islands - Justin Donaldson, Gouache, 2020.jpg").resize((350,350)))

il = [i1,i2,i3]

ml = Label(image=i1)
ml.grid(row=0,column=0,columnspan=3)

status = Label(root, text="Image 1 of 3", bd=1, relief="sunken", anchor=E)

def forward(imn):
    global ml
    global bf
    global bb
    
    ml.grid_forget()
    ml = Label(image=il[imn])
    if imn>=2:
        bf = Button(root, text=">>", command = lambda:forward(imn+1), state=DISABLED)
    else:
        bf = Button(root, text=">>", command = lambda:forward(imn+1))
    bf.grid(row=1,column=2)
    bb = Button(root, text="<<", command = lambda:back(imn-1))
    bb.grid(row=1,column=0)
    ml.grid(row=0,column=0,columnspan=3)
    Label(root, text=f"Image {imn+1} of 3", bd=1, relief="sunken", anchor=E).grid(row=3,column=0,columnspan=3, sticky=W+E)


def back(imn):
    global ml
    global bf
    global bb
    ml.grid_forget()
    ml = Label(image=il[imn])
    if imn<=0:
        bb = Button(root, text="<<", command = lambda:back(imn-1), state=DISABLED)
    else:
        bb = Button(root, text="<<", command = lambda:back(imn-1))
    bf = Button(root, text=">>", command = lambda:forward(imn+1))
    bf.grid(row=1,column=2)
    bb.grid(row=1,column=0)
    ml.grid(row=0,column=0,columnspan=3)
    Label(root, text=f"Image {imn+1} of 3", bd=1, relief="sunken", anchor=E).grid(row=3,column=0,columnspan=3, sticky=W+E)
    
bb = Button(root, text="<<",state=DISABLED)
bf = Button(root, text=">>", command = lambda:forward(1))
be = Button(root, text="Exit",command=root.quit)
status.grid(row=3,column=0,columnspan=3, sticky=W+E)
bb.grid(row=1,column=0)
be.grid(row=1,column=1)
bf.grid(row=1,column=2)

root.mainloop()
