### Pretraživanje grafa u širinu i u dubinu
Ovi algoritmi se odnose na neusmjereni graf i napisani su u programskom jeziku C.

### Kratko objašnjenje pojmova grafa i njegove pretrage
Graf je vrsta strukture podataka, tačnije apstraktan tip podataka, koji se sastoji od skupa čvorova i skupa grana, koje predstavljaju odnose (veze) između čvorova. Graf kao struktura podataka direktno potiče od matematičkog koncepta grafa. Graf *G* se definiše na sljedeći način: *G = (V, E)*, gdje je *V* konačan, neprazan skup čvorova, a *E* je skup grana (veza između čvorova). Kada grane grafa nemaju određen smjer, tada graf nazivamo neusmjerenim, a u suprotnom graf je usmjeren.

Pretraga grafa je problem posjete svih čvorova u grafu na određeni način. Postoje dva načina pretraživanja: **u širinu** i **u dubinu**.
Pretraga u širinu počinje iz proizvoljnog zadatog čvora *v* koji se označava kao posjećen i dodaje kao jedini element reda. Potom se ponavljaju sljedeći koraci, dok god red ne postane prazan: obriši čvor sa početka reda i svakog neposjećenog susjeda ovog čvora označi kao posjećen i dodaj ga na kraj reda.
Pretraga u dubinu počinje iz proizvoljnog zadatog čvora *v* (korijena) koji se označava kao posjećen, a zatim se pretražuje duž svih grana koliko god je to moguće prije povratka u korijen.

### Ostalo
Pored navedenih algoritama implementirano je kreiranje i ispisivanje grafa preko matrice susjedstva, dodavanje čvorova i grana kao i njihovo brisanje.
