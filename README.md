# Tiva-TM4-Floatingpoints

Texas Instruments TM4C123GH6PM mikrodenetleyicisi üzerinde floating-point aritmetik işlemlerinin kullanımını açıklayan bir örnek kod geliştirilmiştir. Bu uygulama, mikrodenetleyicinin Floating-Point Unit (FPU) birimini etkin bir şekilde kullanarak, floating-point (kayan noktalı) işlemlerin gömülü sistemlerde nasıl gerçekleştirildiğini göstermeyi amaçlamaktadır. Program, C dilinde yazılmış olup, TivaWare Peripheral Driver Library kullanılarak yapılandırılmıştır.

Bu örnek uygulamada, mikrodenetleyicinin sistem saati 50 MHz olarak ayarlanır ve floating-point işlemleri gerçekleştirmek için FPU birimi etkinleştirilir. Kodda iki floating-point sayı üzerinde temel matematiksel işlemler olan toplama, çıkarma, çarpma ve bölme işlemleri gerçekleştirilir. Bu işlemlerin sonuçları bir debugger yardımıyla kolayca gözlemlenebilir ve doğrulanabilir. Uygulama, floating-point hesaplamaları gömülü sistemlerde kullanmak isteyen mühendisler için temel bir rehber niteliği taşır.

## Özellikler ve Yapılandırmalar
Bu kod, özellikle aşağıdaki temel özellikleri içermektedir:

1.Floating-Point Unit (FPU) Etkinleştirilmesi
Mikrodenetleyicinin Floating-Point Unit (FPU) birimi, floating-point işlemleri donanım hızlandırmasıyla gerçekleştirmek amacıyla etkinleştirilir. Bu, hesaplama süresini azaltır ve işlem verimliliğini artırır.

2.Sistem Saati Yapılandırması
Mikrodenetleyicinin ana osilatör ve PLL (Phase-Locked Loop) modülü kullanılarak, sistem saati 50 MHz'e ayarlanır. Bu ayar, FPU biriminin ve diğer çevre birimlerinin optimize bir şekilde çalışmasını sağlar.

3.Floating-Point Aritmetik İşlemler
İki floating-point sayı arasında toplama, çıkarma, çarpma ve bölme işlemleri gerçekleştirilir. Bu işlemler sırasında mikrodenetleyicinin FPU biriminin etkin bir şekilde kullanıldığı gözlemlenir.

## Kodun Öne Çıkan Özellikleri
FPU Yapılandırması: Floating-Point Unit (FPU) birimi, uygun yapılandırma komutlarıyla etkinleştirilir. Bu işlem, yazılım seviyesindeki floating-point işlemlerinin donanım hızlandırmalı birim tarafından işlenmesini sağlar.
Sistem Saati Ayarı: Mikrodenetleyicinin osilatör ve PLL modülleri kullanılarak sistem saati 50 MHz olarak ayarlanır. Bu, işlemci ve çevre birimlerinin istikrarlı ve hızlı bir şekilde çalışmasını temin eder.
Matematiksel İşlemler: İki floating-point sayı üzerinde yapılan toplama, çıkarma, çarpma ve bölme işlemleri, floating-point hesaplamaların gömülü sistemlerde nasıl kullanılabileceğini açıkça gösterir.
## Çalışma Prensibi
FPU ve Sistem Saatinin Yapılandırılması
İlk olarak, Floating-Point Unit (FPU) etkinleştirilir. Ardından, mikrodenetleyicinin sistem saati PLL modülü kullanılarak 50 MHz'e ayarlanır. Bu yapılandırma, floating-point işlemlerin doğru ve hızlı bir şekilde gerçekleştirilmesi için gereklidir.

Floating-Point Aritmetik İşlemleri
Kodda, iki floating-point sayı tanımlanır ve bu sayılar üzerinde toplama, çıkarma, çarpma ve bölme işlemleri gerçekleştirilir. Her bir işlem sırasında FPU birimi, floating-point verilerin işlenmesini hızlandırır.

Sonuçların İncelenmesi
Floating-point işlemlerin sonuçları, debugger yardımıyla gözlemlenir. Bu sonuçlar, işlemlerin doğruluğunu ve mikrodenetleyicinin FPU biriminin verimliliğini doğrulamak için kullanılabilir.

## Gömülü Sistemlerde Floating-Point Kullanımının Avantajları
Gömülü sistemlerde floating-point işlemlerin donanım tabanlı FPU ile gerçekleştirilmesi, özellikle karmaşık matematiksel işlemlerin gerekli olduğu uygulamalarda büyük avantajlar sunar. Bu yöntem, işlem süresini önemli ölçüde azaltır ve enerji tüketimini optimize eder. Örneğin, sinyal işleme, kontrol sistemleri veya bilimsel hesaplamalarda bu yapılandırma büyük ölçüde tercih edilmektedir.

Bu örnek, Tiva TM4C123GH6PM mikrodenetleyicisinin FPU birimini kullanarak floating-point işlemlerin gömülü sistemlerde nasıl gerçekleştirilebileceğini öğrenmek isteyen mühendisler ve geliştiriciler için önemli bir referans niteliği taşır. Kodun her bir kısmı, uygulama sürecinde kullanıcıya yol gösterici olacak şekilde yapılandırılmıştır. Bu, floating-point işlemleri verimli bir şekilde kullanmak isteyen tüm geliştiriciler için güçlü bir başlangıç noktasıdır.
