from tkinter import *
from tkinter import ttk
from tkinter import messagebox
def mobile_email():
    spe_ch = ['@', '.']
    mess = ''
    me = mob_email.get()
    if me == '':
        mess = 'Provide Mobile Number /Email'
    else:
        if any(ch.isdigit() for ch in me):
            if len(me) == 10:
                mob = int(me)
                mess = 'Success'
            else:
                mess = 'Invalid Number!'
        else:
            if not any(ch in spe_ch for ch in me):
                mess = 'Invalid Email!'
            else:
                mess = 'Success!'        
    messagebox.showinfo('message', mess)    
def namevalidation(naam, element):
    mess = ''
    if naam == '':
        mess = f'{element} is required!'
    else:
        if len(naam) <= 2:
            mess = 'Name Too Small'
        elif any(ch.isdigit() for ch in naam):
            mess = 'Invalid Input'
        else:
            mess=f'success for {element}'
    messagebox.showinfo('message', mess)
def button_clickme():
    namevalidation(fname.get(), 'First Name')
    namevalidation(surname.get(), 'Last Name')
    mobile_email()
def fname_change(event):
    fname.configure(state=NORMAL)
    fname.delete(0, END)
    fname.unbind('<Button-1>', on_click_id1)
def surname_change(event):
    surname.configure(state=NORMAL)
    surname.delete(0, END)
    surname.unbind('<Button-1>', on_click_id2)
def mob_email_change(event):
    mob_email.configure(state=NORMAL)
    mob_email.delete(0, END)
    mob_email.unbind('<Button-1>', on_click_id3)
def date(choice):
    choice = day_var.get()
    print(choice)
def month(choice):
    choice = month_var.get()
    print(choice)
def year(choice):
    choice = year_var.get()
    print(choice)
ws = Tk()
ws.title('Suraj Parui Workshop 60003200148')
ws.geometry('550x550')
ws.config(bg='pink')
firstname = StringVar()
username = StringVar()
password = StringVar()
day = [x for x in range(1, 32)]
month = [x for x in range(1, 13)]
year = [x for x in range(1905, 2022)]
print(date)
print(month)
print(year)
Label(ws,text='Form',font = ('sans-serif', 32),bg='pink').grid(row=0, columnspan=2, sticky='EW')
Label(ws, text='11/05/2022',font = ('sans-serif', 15),fg = '#606770',bg='pink',).grid(row=1, columnspan=2, sticky='EW')
Label(ws,text='_'*85,fg='black',bg='pink').grid(row=2, columnspan=2, pady=(0, 20))
fname = Entry(ws,bg='pink',font=('sans-serif', 15))
fname.grid(row=3, column=0, pady=(0, 10))
surname = Entry(ws,bg='pink',font=('sans-serif', 15),)
surname.grid(row=3, column=1, pady=(0, 10))
mob_email = Entry(ws,bg='pink',font=('sans-serif', 15),width=43)
mob_email.grid(row=4, columnspan=2, pady=(0, 10))
fname.insert(0, 'First name')
fname.configure(state=DISABLED)
surname.insert(0, 'Surname')
surname.configure(state=DISABLED)
mob_email.insert(0, 'Mobile number or email address')
mob_email.configure(state=DISABLED)
fname.bind('<Button-1>', fname_change)
surname.bind('<Button-1>', surname_change)
mob_email.bind('<Button-1>', mob_email_change)
on_click_id1 = fname.bind('<Button-1>', fname_change)
on_click_id2 = surname.bind('<Button-1>', surname_change)
on_click_id3 = mob_email.bind('<Button-1>', mob_email_change)
dob = LabelFrame(ws,text='Date of birth',font=('sans-serif', 12),bg='#fff',padx=10,pady=10)
dob.grid(row=5, columnspan=2, sticky='EW', padx=18, pady=(0, 10))
day_var = IntVar()
month_var = StringVar()
year_var = StringVar()
day_var.set(day[0])
month_var.set(month[0])
year_var.set(year[-1])
day_cb=ttk.Combobox(dob,textvariable = day_var,font=('sans-serif', 15),width=12,background= ['pink'] )
day_cb.grid(row=6, column=0, padx=(0, 15), ipady=10)
month_cb = ttk.Combobox(dob,textvariable=month_var,font=('sans-serif', 15),width=12)
month_cb.grid(row=6, column=1, padx=(0, 15), ipady=10)
year_cb = ttk.Combobox(dob,textvariable=year_var,font=('sans-serif', 15),width=12)
year_cb.grid(row=6, column=2, ipady=10)
day_cb['values'] = day
month_cb['values'] = month
year_cb['values'] = year
day_cb['state'] = 'read'
month_cb['state'] = 'read'
year_cb['state'] = 'read'
gender = Frame(ws,bg='pink')
gender.grid(row=7, columnspan=2)
gen_var = IntVar()
gen_var.set(1)
female_rb = Radiobutton(gender,text='Female',bg='pink',variable=gen_var,value=1,font = ('sans-serif', 15),anchor='w')
female_rb.pack(fill=BOTH, expand=True, side=LEFT, padx=10, pady=10, ipadx=10, ipady=10)
male_rb = Radiobutton(gender,text='Male',bg='pink',variable=gen_var,value=2,font = ('sans-serif', 15),anchor='w')
male_rb.pack(fill=BOTH, expand=True, side=LEFT, padx=10, pady=10, ipadx=25, ipady=10)
custom_rb = Radiobutton(gender,text='Others',bg='pink',variable=gen_var,value=3,font = ('sans-serif', 15),anchor='w')
custom_rb.pack(expand=True, fill=BOTH, side=LEFT, padx=10, pady=10, ipadx=10, ipady=10)
terms ="Suraj Manab Parui"
Label(ws,text=terms,wraplength=500,bg='pink').grid(row=8, columnspan=2)
signup_btn = Button(ws,text='Sign Up',command= button_clickme,font = ('sans-serif', 18),padx=40,pady=10,)
signup_btn.grid(row=9, columnspan=2)
ws.mainloop()