# C-Electrity-Bill-Calculator
# ⚡ Electricity Bill Calculator | Elektrik Faturası Hesaplama

[English](#english) | [Türkçe](#türkçe)

<a id="english"></a>

## 🇬🇧 English

### About the Project

Electricity Bill Calculator is a simple console-based application written in C. It calculates the estimated electricity bill based on electricity consumption, the previous month's unit price, subscription fee, and monthly inflation rate.

This project was developed to practice fundamental C programming concepts.

### Features

- Calculates electricity consumption using meter readings.
- Updates the unit price according to the inflation rate.
- Updates the subscription fee according to the inflation rate.
- Calculates the estimated total bill.
- Checks user input and invalid meter readings.
- Displays a formatted bill summary.

### Technologies

- **Language:** C
- **Standard Library:** `stdio.h`

### How to Run

1. Clone this repository:

   ```bash
   git clone YOUR_REPOSITORY_URL
   ```

2. Navigate to the project directory.

3. Compile the program using GCC:

   ```bash
   gcc fatura.c -o fatura
   ```

4. Run the program:

   ```bash
   ./fatura
   ```

   On Windows:

   ```bash
   fatura.exe
   ```

### What I Learned

- Variables and data types (`int`, `float`)
- User input with `scanf()`
- Output with `printf()`
- Arithmetic operations
- Conditional statements (`if`)
- Basic input validation

### Disclaimer

This application is an educational project. Its calculation model does not represent an official electricity tariff or an actual utility bill.

---

<a id="türkçe"></a>

## 🇹🇷 Türkçe

### Proje Hakkında

Elektrik Faturası Hesaplama, C dili kullanılarak geliştirilmiş basit bir konsol uygulamasıdır. Elektrik tüketimini, önceki ayın birim fiyatını, abonelik ücretini ve aylık enflasyon oranını kullanarak tahmini fatura tutarını hesaplar.

Bu proje, temel C programlama konularını öğrenmek ve uygulamak amacıyla geliştirilmiştir.

### Özellikler

- Sayaç değerleri arasındaki farktan elektrik tüketimini hesaplar.
- Enflasyon oranına göre birim fiyatı günceller.
- Enflasyon oranına göre abonelik ücretini günceller.
- Tahmini toplam fatura tutarını hesaplar.
- Hatalı girişleri ve geçersiz sayaç değerlerini kontrol eder.
- Düzenli bir fatura özeti sunar.

### Kullanılan Teknolojiler

- **Programlama Dili:** C
- **Standart Kütüphane:** `stdio.h`

### Nasıl Çalıştırılır?

1. Depoyu bilgisayarına klonla:

   ```bash
   git clone YOUR_REPOSITORY_URL
   ```

2. Proje klasörüne gir.

3. GCC ile derle:

   ```bash
   gcc fatura.c -o fatura
   ```

4. Programı çalıştır:

   ```bash
   ./fatura
   ```

   Windows için:

   ```bash
   fatura.exe
   ```

### Öğrendiklerim

- Değişkenler ve veri tipleri (`int`, `float`)
- `scanf()` ile kullanıcıdan veri alma
- `printf()` ile çıktı verme
- Matematiksel işlemler
- Koşullu ifadeler (`if`)
- Temel girdi doğrulama

### Uyarı

Bu uygulama eğitim amaçlıdır. Kullanılan hesaplama modeli resmî elektrik tarifelerini veya gerçek bir elektrik faturasını temsil etmez.

---

**Developer:** Arda Bayraktar  
**Project:** Electricity Bill Calculator  
**Language:** C
