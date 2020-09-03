token_addi = ['Type', 'Valeur', 'Numéro de ligne'] 
# Si le type est un identificateur alors la valeur sera une chaîne
# Si le type est une constante alors la valeur sera un entier

Lexique = {}

#Opérateurs arithmétiques
Lexique['+']= ["Addition", None, None]
Lexique['-']= ["Soustraction", None, None]
Lexique['*']= ["Multiplication", None, None]
Lexique['/']= ["Division", None, None]
Lexique['%']= ["Modulo", None, None]
Lexique['^']= ["Exposant", None, None]
Lexique['**']= ["Exposant", None, None]
Lexique['=']= ["Affectation", None, None]

#Opérateurs logiques
Lexique['&&']= ["And", None, None]
Lexique['||']= ["Or", None, None]
Lexique['!']= ["Not", None, None]

#Opérateurs de comparaison ope_comp = [">","<",">=","<=","==","!="]
Lexique['>']= ["Supérieur à", None, None]
Lexique['<']= ["Inférieur à ", None, None]
Lexique['>=']= ["Supérieur ou égale", None, None]
Lexique['<=']= ["Inférieur ou égale", None, None]
Lexique['==']= ["Est égale à", None, None]
Lexique['!=']= ["Est différent de", None, None]

#Mots-clés
Lexique['const']= ["Constante", "Valeur entière", None]
Lexique['ident']= ["Identificateur", "Valeur chaîne", None]
Lexique['if']= ["Si conditionnel", None, None]
Lexique['for']= ["Boucle for", None, None]
Lexique['while']= ["Boucle While", None, None]
Lexique['else']= ["Sinon conditionnel", None, None]

#Délimiteurs
Lexique['(']= ["Début de parenthèse", None, None]
Lexique[')']= ["Fin de parenthèse",None, None]
Lexique[',']= ["Virgule", None, None]
#INDENTATION !! Indent - Dedent... 

Lexique["EoF"]= ["Fin du fichier", None, None]
Lexique["#"]= ["Ligne de commentaire", None, None]

#print(Lexique)
#print(Lexique["EoF"])


#Comment définis-t-on les lettres et les chiffres comment constantes ou identifiants ? 
#Si on souhaite que '@' soit accepté dans une variable on j'ajoute Lexique['@']=["Identificateur",None,None]


"""
Tableau des (mots) lexèmes de notre fichier source
"""

word=[]
#Fonction qui permet de récupérer chaque mot de notre fichier et le mettre dans notre tableau word
#Il doit récupérer chaque caractère puis tester si c'est une lettre un chiffre un caractère spécial et travailler par élimination en fonction des 

mot_courant=None
fichier_source = open(...)


"""
Association des mots de notre code source au token correspondant
"""
#boucle qui associe chaque valeur du tableau à son token (valeur et numéro de ligne correspondant) 
#création d'une liste avec comme valeur des unités lexicales code_source = [(identifiant, IMC),(mot-clé,if),...]
#unité lexicale (nom et valeur) exemple : mot-clé : 

code_source=[]
#Mettre en place le message d'erreur si le mot n'est pas dans le dictionnaire Lexique
