# coding: utf-8
#-------------------------------------------------------------
# Younes Derfoufi 
# chanel : https://www.youtube.com/user/InformatiquesFacile
# Site   : https://www.tresfacile.net/
#--------------------------------------------------------------
#--------------------------------------------------------------
# Vous devez installer le module verbecc :  pip install verbecc
#--------------------------------------------------------------
#--------------------------------------------------------------
from verbecc import Conjugator
from tkinter import Text
import tkinter as tk
from tkinter import ttk
 
def conjuguer():
    verbe = entryVerbe.get()
    temps = listeVerbes.get()
    cg = Conjugator(lang='fr')
    conjugation = cg.conjugate(verbe)
    conj = conjugation['moods']['indicatif'][temps]
    result = ""
    for element in conj:
        result = result + element + '\n'
        
    T.insert(1.0 , "Conjugaison du verbe " + verbe + ' au ' + temps + '\n\n' + result)
    
 
#--------------------
# fenetre principale
#-------------------
root = tk.Tk()
root.title("Conjugaison")
root.geometry("600x400")
# création du titre de la fenêtre
lblTitle = tk.Label(root , 
                    text = " Conjugaison des verbes" , 
                    font = ("Arial" , 16) ,
                    foreground='white', 
                    background='darkblue')
lblTitle.place(x=0 , y= 0 , width=600 ) 
 
#-----------------------------------------------------
# label qui demande à l'utilisateur de saisir un verbe
#-----------------------------------------------------
lblVerbe = tk.Label(root , text = "Saisir un verbe")
lblVerbe.place( x = 10 , y = 50)
 
entryVerbe = tk.Entry(root)
entryVerbe.place(x = 100 , y = 50 , width = 200)
 
#------------------
# liste verbes
#-----------------
listeTemps = ["présent",  "passé-composé", "passé-simple", 
              "imparfait", "plus-que-parfait", "futur-simple", 
              "futur-antérieur",  "passé-antérieur"]
listeVerbes = ttk.Combobox(root , values = listeTemps)
listeVerbes.place(x = 350 , y = 50 , width = 200)
listeVerbes.current(0)
 
#-----------------------------------------------------
# zone de texte pour afficher les verbes conjugués
#-----------------------------------------------------
T = Text( root )
T.place(x = 100 , y = 100 , width = 450 , height = 200)
 
#------------------
# Bouton conjuguer
#-----------------
bConjug = tk.Button(root , text = "Conjuguer" , command = conjuguer )
bConjug.place(x = 100 , y = 310 , width = 450)
 
root.mainloop()
 