# comment
# 2nd comment
---
ganze_zahl = 10
fliesskommazahl = 3.14
text_string = "Hallo Python!"
wahrheitswert = True
leere_liste = []
initialisierte_liste = [1, 2, 3, "vier"]
leeres_tuple = ()
initialisiertes_tuple = (10, 20, "dreißig")
leeres_dictionary = {}
initialisiertes_dictionary = {"schluessel1": "wert1", "schluessel2": 123}
kein_wert = None

print("--- 1. Variablen und Datentypen ---")
print(f"Ganze Zahl: {ganze_zahl}, Typ: {type(ganze_zahl)}")
print(f"Fließkommazahl: {fliesskommazahl}, Typ: {type(fliesskommazahl)}")
print(f"Text-String: '{text_string}', Typ: {type(text_string)}")
print(f"Wahrheitswert: {wahrheitswert}, Typ: {type(wahrheitswert)}")
print(f"Leere Liste: {leere_liste}, Typ: {type(leere_liste)}")
print(f"Initialisierte Liste: {initialisierte_liste}, Typ: {type(initialisierte_liste)}")
print(f"Leeres Tuple: {leeres_tuple}, Typ: {type(leeres_tuple)}")
print(f"Initialisiertes Tuple: {initialisiertes_tuple}, Typ: {type(initialisiertes_tuple)}")
print(f"Leeres Dictionary: {leeres_dictionary}, Typ: {type(leeres_dictionary)}")
print(f"Initialisiertes Dictionary: {initialisiertes_dictionary}, Typ: {type(initialisiertes_dictionary)}")
print(f"Kein Wert (None): {kein_wert}, Typ: {type(kein_wert)}")
print("-" * 30)

---
a = 15
b = 4
print("\n--- 2. Operatoren ---")
print(f"Addition (a + b): {a + b}")
print(f"Subtraktion (a - b): {a - b}")
print(f"Multiplikation (a * b): {a * b}")
print(f"Division (a / b): {a / b} (führt zu einer Fließkommazahl)")
print(f"Ganzzahlige Division (a // b): {a // b} (ignoriert Dezimalstellen)")
print(f"Modulo (Rest der Division) (a % b): {a % b}")
print(f"Potenz (a ** 2): {a ** 2}")

print(f"Ist a gleich b (a == b): {a == b}")
print(f"Ist a nicht gleich b (a != b): {a != b}")
print(f"Ist a größer als b (a > b): {a > b}")
print(f"Ist a kleiner als b (a < b): {a < b}")
print(f"Ist a größer oder gleich b (a >= b): {a >= b}")
print(f"Ist a kleiner oder gleich b (a <= b): {a <= b}")

x = True
y = False
print(f"Logisches UND (x and y): {x and y}")
print(f"Logisches ODER (x or y): {x or y}")
print(f"Logisches NICHT (not x): {not x}")
print("-" * 30)

---
zahl = 20
print("\n--- 3. Kontrollstrukturen: if, elif, else ---")
if zahl > 0:
    print(f"{zahl} ist eine positive Zahl.")
elif zahl == 0:
    print(f"{zahl} ist Null.")
else:
    print(f"{zahl} ist eine negative Zahl.")

alter = 17
if alter >= 18:
    print("Du bist volljährig.")
else:
    print("Du bist minderjährig.")
print("-" * 30)

---
print("\n--- 4. Schleifen: for und while ---")
# for-Schleife (Iteration über eine Liste)
print("For-Schleife (über eine Liste):")
früchte = ["Apfel", "Banane", "Kirsche"]
for frucht in früchte:
    print(frucht)

print("\nFor-Schleife (mit range()):")
for i in range(5): # Zählt von 0 bis 4
    print(f"Zahl: {i}")

print("\nFor-Schleife (mit range(start, ende, schritt)):")
for i in range(2, 10, 2): # Zählt von 2 bis 8 in Zweierschritten
    print(f"Gerade Zahl: {i}")

print("\nWhile-Schleife:")
zaehler = 0
while zaehler < 3:
    print(f"Zählerstand: {zaehler}")
    zaehler += 1 # Entspricht zaehler = zaehler + 1
print("-" * 30)

---
print("\n--- 5. Funktionen ---")
def gruss():
    print("Hallo von der Funktion!")

gruss() # Aufruf der Funktion

def addiere(zahl1, zahl2):
    ergebnis = zahl1 + zahl2
    print(f"Die Summe von {zahl1} und {zahl2} ist: {ergebnis}")

addiere(5, 7)
addiere(100, 200)

def multipliziere(zahl1, zahl2):
    return zahl1 * zahl2

produkt = multipliziere(4, 6)
print(f"Das Produkt von 4 und 6 ist: {produkt}")

def begruessung(name, nachricht="Willkommen"):
    print(f"{nachricht}, {name}!")

begruessung("Alice")
begruessung("Bob", "Guten Tag")
print("-" * 30)

---
print("\n--- 6. Listen-Operationen ---")
meine_liste = [10, 20, 30, 40, 50]
print(f"Ursprüngliche Liste: {meine_liste}")

meine_liste.append(60)
print(f"Nach append(60): {meine_liste}")

meine_liste.remove(20)
print(f"Nach remove(20): {meine_liste}")

del meine_liste[0] # Entfernt das erste Element (Index 0)
print(f"Nach del meine_liste[0]: {meine_liste}")

print(f"Erstes Element: {meine_liste[0]}")
print(f"Letztes Element: {meine_liste[-1]}")

print(f"Teil der Liste (Index 1 bis 3 exklusiv): {meine_liste[1:3]}")
print("-" * 30)

---
print("\n--- 7. Dictionary-Operationen ---")
mein_dict = {"Name": "Max", "Alter": 30, "Stadt": "Berlin"}
print(f"Ursprüngliches Dictionary: {mein_dict}")

print(f"Name: {mein_dict['Name']}")
print(f"Alter: {mein_dict.get('Alter')}") 

mein_dict["Alter"] = 31
print(f"Nach Änderung des Alters: {mein_dict}")

mein_dict["Beruf"] = "Entwickler"
print(f"Nach Hinzufügen von 'Beruf': {mein_dict}")

del mein_dict["Stadt"]
print(f"Nach Entfernen von 'Stadt': {mein_dict}")

print("Schlüssel im Dictionary:")
for schluessel in mein_dict:
    print(schluessel)

print("Werte im Dictionary:")
for wert in mein_dict.values():
    print(wert)

print("Schlüssel-Wert-Paare im Dictionary:")
for schluessel, wert in mein_dict.items():
    print(f"{schluessel}: {wert}")
print("-" * 30)

---
print("\n--- 8. Fehlerbehandlung (Try-Except) ---")
try:
    ergebnis = 10 / 0
    print(ergebnis)
except ZeroDivisionError:
    print("Fehler: Division durch Null ist nicht erlaubt!")
except TypeError:
    print("Fehler: Typfehler aufgetreten.")
except Exception as e: # Fängt alle anderen Fehler ab
    print(f"Ein unerwarteter Fehler ist aufgetreten: {e}")
finally:
    print("Dieser Block wird immer ausgeführt, egal ob ein Fehler auftritt oder nicht.")

try:
    zahl = int("abc") # Versucht, einen String in eine Zahl umzuwandeln
except ValueError:
    print("Fehler: Konnte den String nicht in eine Ganzzahl umwandeln.")
print("-" * 30)

---
print("\n--- 9. Klassen und Objekte ---")
class Person:
    def __init__(self, name, alter):
        self.name = name
        self.alter = alter

    def sag_hallo(self):
        print(f"Hallo, mein Name ist {self.name} und ich bin {self.alter} Jahre alt.")

    def geburtstag_feiern(self):
        self.alter += 1
        print(f"Herzlichen Glückwunsch zum Geburtstag! Ich bin jetzt {self.alter} Jahre alt.")

person1 = Person("Anna", 25)
person2 = Person("Marc", 30)

person1.sag_hallo()
person2.sag_hallo()

person1.geburtstag_feiern()
person1.sag_hallo()
print("-" * 30)

---
print("\n--- 10. Modulimport ---")
import math # Importiert das gesamte math-Modul
print(f"Der Wert von Pi aus dem math-Modul: {math.pi}")
print(f"Wurzel aus 16: {math.sqrt(16)}")

from datetime import date
heute = date.today()
print(f"Heutiges Datum: {heute}")

print("-" * 30)

print("\n--- Dummy-Code Ende ---")