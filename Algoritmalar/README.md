# İçerik

Başlık | İçerik
--- | --- 
[Algoritma Nedir?](#algoritma) | Algoritmanın genel tanımı
[Algoritmalar Nasıl Olmalıdır ?](#ozellikler) | Bir algoritmada olması gereken özellikler
[Algoritmalar Nasıl Yazılır ?](#nasilyazilir) | Algoritma yazarken nelere dikkat edilmelidir ?


# <a name="algoritma"></a>Algoritma Nedir ?

Algoritma, bir sorunun çözümü için adım adım geliştirilen çözüm prosedürüdür.

Algoritma çeşitleri:

* **Arama**, bir veri yapısında herhangi bir veriyi aramak için kullanılan algoritmalardır.
* **Sıralama**, verileri belirli sırada sıralamak için kullanılan algoritmalardır.
* **Ekleme**, bir veri yapısına bir veri eklemek için kullanılan algoritmalardır.
* **Güncelleme**, bir veri yapısında bir veriyi güncellemek için kullanılan algoritmalardır.
* **Silme**, bir veri yapısında belirli bir veriyi silmek için kullanılan algoritmalardır.

## <a name="ozellikler"></a>Algoritmalar nasıl olmalıdır ?

__**Kesin ve net**__: Algoritma kesin, net ve temiz olmalıdır. Her adımı, tüm girdi/çıktıları tek bir anlam belirtecek şekilde olmalıdır.

__**Girdi**__: Bir algoritma, 0 veya daha fazla girdi alabilir.

__**Çıktı**__: Bir algoritma, 1 veya daha fazla çıktıya sahip olabilir. İstenen sonucu vermelidir.

__**Sonluluk**__: Algoritma, belirli adımdan sonra sonlanmalıdır.

__**Uygulanabilir**__: Uygun kaynaklarla uygulanabilir olmalıdır.

__**Dilden bağımsız**__: Algoritma, adım adım talimatlardan oluşur, bu talimatlar herhangi bir programlama dilinden bağımsız olmalıdır.

## <a name="nasilyazilir"></a>Algoritmalar nasıl yazılır ?

Algoritma yazmak için sorun ve kaynak bağımlı herhangi bir standart yoktur.

Tüm programlama dillerinin döngüler(for,while), akış kontrol(if-else) vs. gibi temel kod yapıları vardır.

Bu ortak ve herhangi bir programda yaygın olarak kullanılan yapılar algoritma yazmak için kullanılabilir.

Algoritma yazabilmek için öncelikle problemi net olarak belirlememiz gerekmektedir.

**Örnek**: 2 sayıyı toplayıp sonucu ekrana yazdıran programın algoritmasını tasarlayalım.

    adım 1 - BAŞLA
    adım 2 - integer tipinde x,y ve z isimli 3 adet değişken tanımla
    adım 3 - x ve y'ye bir değer ata
    adım 4 - x ve y'nin değerlerini topla
    adım 5 - adım 4'ün çıktısını z değişkenine ata
    adım 6 - z'yi yazdır
    adım 7 - DUR


Algoritma, programcıya kodun nasıl yazılacağını anlatır.

## <a name="analiz"></a>Algoritmalar nasıl analiz edilir ?

Bilgisayar bilimlerinde temel olarak iki önemli kaynak bulunmaktadır.

* Alan (Hafıza)
* Zaman (Hız)

Buna göre, bir bilgisayar programı, ne kadar fazla alan kapsıyorsa ve ne kadar yavaş çalışıyorsa, o kadar kötü demektir. Tersine, hızlı çalışan ve az yer kaplayan program ise daha iyi olarak düşünülebilir.

Örneğin, birbiri ile etkileşime giren bir milyon kullanıcının tüm etkileşimlerini grafik hâlinde gösterme ihtiyacımız olduğunu düşünelim. Elimizde işlemi gerçekleştiren iki farklı algoritma var, hangisine göre seçim yaparsınız ?

Tabii ki bu önceliğinize göre değişir, hafıza probleminiz varsa önceliği hafızaya verip en az kaynak tüketen algoritmayı seçersiniz, veya hıza daha fazla önem veriyorsanız daha hızlı olanı seçersiniz. 