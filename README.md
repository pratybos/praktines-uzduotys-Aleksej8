#Užduoties Nuoroda:
https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/

Salyga: 
Duotas sveikasis skaičius "n", šio skaičiaus suma turi būti 
dviejų sveikųjų skaičių, kurie dešimtainėje neturi nulių. Parašykite programą,
kuri apskaičiutų pirmąją "n" skaičiaus sumą.

1. Pavyzdys: skaičius "n" yra lygus 11, o suma bus lygi 2 ir 9, nes
skaičiai 1 ir 10 netinka, skaičius 10 dešimtainėję turi nulį. 
2. Pavyzdys: skaičius "n" yra lygus 69, o suma bus lygi 1 ir 68.

#Atliktos užduoties paaiškinimas:
14 eilutėje prasideda pagrindinė funkcija, "int main()", 16 eilutėje 
sukuriami kintamieji: n-duotasis skaičius; A-pirmojo skaičiaus suma; 
B-antrojo skaičiaus suma.

23 eilutėje sukuriami dar 2 kintamieji: nulA ir nulB. Į šiuos kintamuosius
programa įrašo 1 arbe 0, priklausomai ar tinka skaičius ar ne, nulA atitinka A, o nulB atitinka B skaičiui.

24 eilutėje prasideda ciklas for, kuriame tikrina ar skaičių
sumai bus naudojami taisiklingi skaičiai.

Tiek 28, tiek 29 eilutėse skreipimasi į funkciją "void skaičiuok" norint nustatytį
ar skaičiai yra tinkami, 28 eilutėje tikrina skaičių A, o 29 skaičiu B.

3 eilutėje, "void skaiciuok..", apskaičiuoja
ar skaičius dešimtainėję turi nulį ar ne, jeigu turi užrašomas skaičius
0 į kintamąjį "nul", kuris vėliau gražinamas į "int main", bet jeigu nulio neranda, tai užrašomas 1.

30 eilutėje prasideda sąlyga "if", kurioje tikrina ar abu skaičiai tinka šiai užduočiai t.y.
jeigu nulA ir nulB abu yra vienetai, reiškias ciklas yra sustabdomas, bet jeigu nors vienas yra 0, tai ciklas
tesiamas toliau kol neras tinkamų abiejų skaičių.

Galiausiai 33 eilutėje išvedamas atsakymas su teisingais skaičiais.