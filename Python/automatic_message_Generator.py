import smtplib as s 

ob =s.SMTP('smtp.gmail.com',587)
ob.ehlo()
ob.starttls()
ob.login('abhisekroy155@gmail.com','123456')  #your email
subject="test python"
body="I love python & hacktoberfest !!"
messege="subject:{}\n\n{}".format(subject,body)
listadd=['royabhisek001@gmail.com','hlo@civo.com','it@email.info.org'] #list of email for receiver

ob.sendmail('abhisekroy155@gmail.com', listadd,messege)
print("Send mail !!")
ob.quit()
