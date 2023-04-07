#### Ikili Agac Karsilastirma

Verilen iki ikili agac rootunu argument olarak alip
ayni yapida olmalari durumunda 1
farkli olmalari durumunda 0 donen fonksiyon.

## Algoritma Adimlari

# compareTrees

1. Agac rootlarini al
   1. Biri bos ise 0 don
   2. Ikisi bos ise 1 don
2. Rootlardaki datalari karsilastir
   1. Don compareTrees(1.rootun 1. cocugu,2.rootun 1. cocugu ) AND compareTrees(1.rootun 1. cocugu,2.rootun 1. cocugu )

## Algoritma Aciklamasi

Alinan iki root bilgisiyle bu rootlarin datalarini karsilastirir
ve karsilastirma sonucu ve bu rootlarin cocuklarinin karsilastirma sonuclarini
mantiksal AND ifadesiyle birlestirip dondurur, bir esitsizlik durumunda 0 donecek aksi halde
1 donecektir.
