'Comment
'2nd Comment

Option Explicit

Sub VariablenUndDatentypen()
    Dim ganzeZahl As Integer        
    Dim langeZahl As Long           
    Dim fliesskommaZahl As Double   
    Dim textString As String        
    Dim wahrheitswert As Boolean    
    Dim datumsWert As Date          
    Dim variantTyp As Variant       

    ganzeZahl = 10
    langeZahl = 1234567890
    fliesskommaZahl = 3.14159
    textString = "Hallo VBA!"
    wahrheitswert = True
    datumsWert = #2025/06/29# 
    variantTyp = "Ich bin ein Variant"

    Debug.Print "--- 1. Variablen und Datentypen ---"
    Debug.Print "Ganze Zahl: " & ganzeZahl & ", Typ: " & TypeName(ganzeZahl)
    Debug.Print "Lange Zahl: " & langeZahl & ", Typ: " & TypeName(langeZahl)
    Debug.Print "Fliesskommazahl: " & fliesskommaZahl & ", Typ: " & TypeName(fliesskommaZahl)
    Debug.Print "Text-String: '" & textString & "', Typ: " & TypeName(textString)
    Debug.Print "Wahrheitswert: " & wahrheitswert & ", Typ: " & TypeName(wahrheitswert)
    Debug.Print "Datumswert: " & datumsWert & ", Typ: " & TypeName(datumsWert)
    Debug.Print "Variant Typ: '" & variantTyp & "', Typ: " & TypeName(variantTyp)
    Debug.Print String(30, "-")
End Sub

Sub Operatoren()
    Dim a As Integer
    Dim b As Integer
    a = 15
    b = 4

    Debug.Print Chr(10) & "--- 2. Operatoren ---" 
    Debug.Print "Addition (a + b): " & (a + b)
    Debug.Print "Subtraktion (a - b): " & (a - b)
    Debug.Print "Multiplikation (a * b): " & (a * b)
    Debug.Print "Division (a / b): " & (a / b)
    Debug.Print "Ganzzahlige Division (a \ b): " & (a \ b)
    Debug.Print "Modulo (Rest der Division) (a Mod b): " & (a Mod b)
    Debug.Print "Potenz (a ^ 2): " & (a ^ 2)

    Debug.Print "Ist a gleich b (a = b): " & (a = b)
    Debug.Print "Ist a nicht gleich b (a <> b): " & (a <> b)
    Debug.Print "Ist a größer als b (a > b): " & (a > b)
    Debug.Print "Ist a kleiner als b (a < b): " & (a < b)
    Debug.Print "Ist a größer oder gleich b (a >= b): " & (a >= b)
    Debug.Print "Ist a kleiner oder gleich b (a <= b): " & (a <= b)

    Dim x As Boolean
    Dim y As Boolean
    x = True
    y = False
    Debug.Print "Logisches UND (x And y): " & (x And y)
    Debug.Print "Logisches ODER (x Or y): " & (x Or y)
    Debug.Print "Logisches NICHT (Not x): " & (Not x)
    Debug.Print String(30, "-")
End Sub

Sub Kontrollstrukturen()
    Dim zahl As Integer
    zahl = 20

    Debug.Print Chr(10) & "--- 3. Kontrollstrukturen: If, ElseIf, Else ---"
    If zahl > 0 Then
        Debug.Print zahl & " ist eine positive Zahl."
    ElseIf zahl = 0 Then
        Debug.Print zahl & " ist Null."
    Else
        Debug.Print zahl & " ist eine negative Zahl."
    End If

    Dim alter As Integer
    alter = 17
    If alter >= 18 Then
        Debug.Print "Du bist volljährig."
    Else
        Debug.Print "Du bist minderjährig."
    End If
    Debug.Print String(30, "-")
End Sub

Sub Schleifen()
    Debug.Print Chr(10) & "--- 4. Schleifen: For...Next, For Each...Next und Do While/Until ---"

    Debug.Print "For...Next-Schleife:"
    Dim i As Integer
    For i = 1 To 5 ' Zählt von 1 bis 5
        Debug.Print "Zahl: " & i
    Next i

    Debug.Print Chr(10) & "For...Next-Schleife (mit Step):"
    For i = 2 To 10 Step 2 ' Zählt von 2 bis 10 in Zweierschritten
        Debug.Print "Gerade Zahl: " & i
    Next i

    Debug.Print Chr(10) & "Do While-Schleife:"
    Dim zaehler As Integer
    zaehler = 0
    Do While zaehler < 3
        Debug.Print "Zählerstand: " & zaehler
        zaehler = zaehler + 1
    Loop

    Debug.Print Chr(10) & "Do Until-Schleife:"
    zaehler = 0
    Do Until zaehler = 3
        Debug.Print "Zählerstand (Do Until): " & zaehler
        zaehler = zaehler + 1
    Loop
    Debug.Print String(30, "-")
End Sub

Sub FunktionenUndProzeduren()
    Debug.Print Chr(10) & "--- 5. Funktionen und Sub-Prozeduren ---"

    ' Aufruf einer Sub-Prozedur (ohne Rückgabewert)
    Call Gruss ' 'Call' ist optional, kann weggelassen werden: Gruss

    ' Aufruf einer Sub-Prozedur mit Parametern
    Addiere 5, 7

    ' Aufruf einer Funktion (mit Rückgabewert)
    Dim produktErgebnis As Long
    produktErgebnis = Multipliziere(4, 6)
    Debug.Print "Das Produkt von 4 und 6 ist: " & produktErgebnis

    ' Funktion mit optionalen Parametern
    Begruessung "Alice"
    Begruessung "Bob", "Guten Tag"
    Debug.Print String(30, "-")
End Sub

Sub Gruss()
    Debug.Print "Hallo von der Sub-Prozedur!"
End Sub

Sub Addiere(ByVal zahl1 As Integer, ByVal zahl2 As Integer)
    Dim ergebnis As Integer
    ergebnis = zahl1 + zahl2
    Debug.Print "Die Summe von " & zahl1 & " und " & zahl2 & " ist: " & ergebnis
End Sub

Function Multipliziere(ByVal zahl1 As Integer, ByVal zahl2 As Integer) As Long
    Multipliziere = zahl1 * zahl2 ' Der Funktionsname ist auch die Rückgabevariable
End Function

Sub Begruessung(ByVal name As String, Optional ByVal nachricht As String = "Willkommen")
    Debug.Print nachricht & ", " & name & "!"
End Sub

Sub ArrayOperationen()
    Debug.Print Chr(10) & "--- 6. Array-Operationen ---"

    ' Deklaration und Initialisierung eines statischen Arrays
    Dim zahlen(2) As Integer ' Array mit 3 Elementen (Index 0, 1, 2)
    zahlen(0) = 10
    zahlen(1) = 20
    zahlen(2) = 30
    Debug.Print "Array-Element 0: " & zahlen(0)

    ' Iteration über ein Array
    Debug.Print "Elemente im Array:"
    Dim k As Integer
    For k = LBound(zahlen) To UBound(zahlen) ' LBound ist der unterste, UBound der oberste Index
        Debug.Print "Index " & k & ": " & zahlen(k)
    Next k

    ' Dynamisches Array (Größe kann später geändert werden)
    Dim dynamischesArray() As String
    ReDim dynamischesArray(0 To 1) ' Initialisiert mit 2 Elementen
    dynamischesArray(0) = "Apfel"
    dynamischesArray(1) = "Banane"

    ReDim Preserve dynamischesArray(0 To 2) ' Größe ändern, alte Werte erhalten
    dynamischesArray(2) = "Kirsche"
    Debug.Print "Dynamisches Array nach ReDim Preserve:"
    For k = LBound(dynamischesArray) To UBound(dynamischesArray)
        Debug.Print dynamischesArray(k)
    Next k
    Debug.Print String(30, "-")
End Sub

Sub Fehlerbehandlung()
    Debug.Print Chr(10) & "--- 7. Fehlerbehandlung (On Error GoTo) ---"
    On Error GoTo FehlerRoutine ' Bei einem Fehler springe zu "FehlerRoutine"

    Dim ergebnis As Integer
    ergebnis = 10 / 0 ' Dies wird einen Fehler verursachen

    Debug.Print "Dieses Statement wird nicht erreicht."
    Exit Sub ' Verhindert, dass der Code in die Fehlerroutine fällt, wenn kein Fehler auftritt

FehlerRoutine:
    Debug.Print "Ein Fehler ist aufgetreten: " & Err.Description ' Err.Description gibt die Fehlermeldung
    ' Optional: Fehler löschen, um weitere Fehlerbehandlung zu ermöglichen
    Err.Clear
    Debug.Print String(30, "-")
End Sub

Sub KlassenUndObjekte()
    Debug.Print Chr(10) & "--- 8. Klassen und Objekte ---"

    Dim person1 As clsPerson ' clsPerson ist der Name des Klassenmoduls
    Set person1 = New clsPerson ' Erstellt eine neue Instanz der Klasse

    person1.Name = "Anna"
    person1.Alter = 25

    person1.SagHallo
    person1.GeburtstagFeiern
    person1.SagHallo

    Set person1 = Nothing ' Objektreferenz freigeben
    Debug.Print String(30, "-")
End Sub

Sub ExcelOperationen()
    Debug.Print Chr(10) & "--- 9. Excel-spezifische Operationen ---"

    ' Zugriff auf ein Tabellenblatt und eine Zelle
    ThisWorkbook.Sheets("Tabelle1").Range("A1").Value = "Hallo aus VBA!"
    Debug.Print "Wert in A1: " & ThisWorkbook.Sheets("Tabelle1").Range("A1").Value

    ' Formatierung einer Zelle
    ThisWorkbook.Sheets("Tabelle1").Range("A1").Font.Bold = True
    ThisWorkbook.Sheets("Tabelle1").Range("A1").Interior.Color = RGB(255, 255, 0) ' Gelb

    ' Eine Nachricht anzeigen
    MsgBox "Zelle A1 wurde aktualisiert und formatiert!", vbInformation, "VBA Beispiel"

    Debug.Print String(30, "-")
End Sub

Sub AlleBeispieleAusfuehren()
    Call VariablenUndDatentypen
    Call Operatoren
    Call Kontrollstrukturen
    Call Schleifen
    Call FunktionenUndProzeduren
    Call ArrayOperationen
    Call Fehlerbehandlung
End Sub