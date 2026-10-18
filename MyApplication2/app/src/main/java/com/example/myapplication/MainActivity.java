package com.example.myapplication;

import android.os.Bundle;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        // Obsługa wcięć systemowych (musi zostać zachowana)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });

        // ZADANIE 1
        System.out.println("--- ZADANIE 1 ---");
        boolean czyPrawda = true;
        int liczbaInt = 5;
        float liczbaFloat = 3.14f;
        char znak = 'A';

        System.out.println("Wartosc zmiennej czyPrawda typu boolean wynosi " + czyPrawda);
        System.out.println("Wartosc zmiennej liczbaInt typu int wynosi " + liczbaInt);
        System.out.println("Wartosc zmiennej liczbaFloat typu float wynosi " + liczbaFloat);
        System.out.println("Wartosc zmiennej znak typu char wynosi " + znak);
        // ZADANIE 2
        System.out.println("\n--- ZADANIE 2 ---");
        int[] tablica1 = {10, 20, 30, 40, 50, 60};
        int[] tablica2 = new int[6];

        for (int i = 0; i < tablica2.length; i++) {
            tablica2[i] = i;
        }

        System.out.println("Tablica 1:");
        for (int i = 0; i < tablica1.length; i++) {
            System.out.println(tablica1[i]);
        }

        System.out.println("Tablica 2:");
        for (int i = 0; i < tablica2.length; i++) {
            System.out.println(tablica2[i]);
        }

        // ZADANIE 3
        System.out.println("\n--- ZADANIE 3 ---");
        String[] owoce = {"Jabłko", "Banan", "Pomarańcza", "Truskawka"};

        for (int i = 0; i < owoce.length; i++) {
            System.out.println(owoce[i]);
        }

        // ZADANIE 4
        System.out.println("\n--- ZADANIE 4 ---");
        int opcja = 2;

        switch (opcja) {
            case 1:
                System.out.println("jeden");
                break;
            case 2:
                System.out.println("dwa");
                break;
            case 3:
                System.out.println("trzy");
                break;
            default:
                System.out.println("inna");
                break;
        }



        // ZADANIE 5

        System.out.println("\n--- ZADANIE 5 ---");
        float liczbaFloat2 = 4.5f;

        if (liczbaFloat2 >= -10 && liczbaFloat2 <= 10) {
            System.out.println("liczba w przedziale");
        } else {
            System.out.println("liczba poza przedziałem");
        }
        // ZADANIE 6
        System.out.println("\n--- ZADANIE 6 ---");
        String imie = "Jan";
        String nazwisko = "Kowalski";

        String imieINazwisko = imie + " " + nazwisko;
        String imieWielkimi = imie.toUpperCase();

        System.out.println("Imię: " + imie);
        System.out.println("Nazwisko: " + nazwisko);
        System.out.println("Imię i nazwisko: " + imieINazwisko);
        System.out.println("Imię wielkimi literami: " + imieWielkimi);


        // ZADANIE 7

        System.out.println("\n--- ZADANIE 7 ---");
        int[] liczby = {5, 10, 15, 20, 25, 30, 35};

        int suma = 0;
        int index = 0;

        while (index < liczby.length) {
            suma += liczby[index];
            index++;
        }

        System.out.println("Suma elementów wynosi: " + suma);
    }
}