OBJS	= Cafe_mocha.o Ciekawa_ProjektApp.o Ciekawa_ProjektMain.o Espresso.o espresso_dopio.o Flat_white.o Herbata.o Irish_Caffe.o Kamikadze.o Latte_macchiato.o MalibuSunrise.o Menu_okno.o Poradnik_kawy.o Poradnik_podstawy.o RedGentelman.o Sexonthebeach.o Smerf.o TequillaSunrise.o Tropical.o Zamowienia_okno.o
SOURCE	= Cafe_mocha.cpp Ciekawa_ProjektApp.cpp Ciekawa_ProjektMain.cpp Espresso.cpp espresso_dopio.cpp Flat_white.cpp Herbata.cpp Irish_Caffe.cpp Kamikadze.cpp Latte_macchiato.cpp MalibuSunrise.cpp Menu_okno.cpp Poradnik_kawy.cpp Poradnik_podstawy.cpp RedGentelman.cpp Sexonthebeach.cpp Smerf.cpp TequillaSunrise.cpp Tropical.cpp Zamowienia_okno.cpp
HEADER	= Cafe_mocha.h Ciekawa_ProjektApp.h Ciekawa_ProjektMain.h Espresso.h espresso_dopio.h Flat_white.h Herbata.h Irish_Caffe.h Kamikadze.h Latte_macchiato.h MalibuSunrise.h Menu_okno.h Poradnik_kawy.h Poradnik_podstawy.h RedGentelman.h Sexonthebeach.h Smerf.h TequillaSunrise.h Tropical.h Zamowienia_okno.h
OUT	= a.out
CC	 = g++
FLAGS	= -g -c -Wall wx-config --cxxflags --libs all
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Cafe_mocha.o: Cafe_mocha.cpp
	$(CC) $(FLAGS) Cafe_mocha.cpp 

Ciekawa_ProjektApp.o: Ciekawa_ProjektApp.cpp
	$(CC) $(FLAGS) Ciekawa_ProjektApp.cpp 

Ciekawa_ProjektMain.o: Ciekawa_ProjektMain.cpp
	$(CC) $(FLAGS) Ciekawa_ProjektMain.cpp 

Espresso.o: Espresso.cpp
	$(CC) $(FLAGS) Espresso.cpp 

espresso_dopio.o: espresso_dopio.cpp
	$(CC) $(FLAGS) espresso_dopio.cpp 

Flat_white.o: Flat_white.cpp
	$(CC) $(FLAGS) Flat_white.cpp 

Herbata.o: Herbata.cpp
	$(CC) $(FLAGS) Herbata.cpp 

Irish_Caffe.o: Irish_Caffe.cpp
	$(CC) $(FLAGS) Irish_Caffe.cpp 

Kamikadze.o: Kamikadze.cpp
	$(CC) $(FLAGS) Kamikadze.cpp 

Latte_macchiato.o: Latte_macchiato.cpp
	$(CC) $(FLAGS) Latte_macchiato.cpp 

MalibuSunrise.o: MalibuSunrise.cpp
	$(CC) $(FLAGS) MalibuSunrise.cpp 

Menu_okno.o: Menu_okno.cpp
	$(CC) $(FLAGS) Menu_okno.cpp 

Poradnik_kawy.o: Poradnik_kawy.cpp
	$(CC) $(FLAGS) Poradnik_kawy.cpp 

Poradnik_podstawy.o: Poradnik_podstawy.cpp
	$(CC) $(FLAGS) Poradnik_podstawy.cpp 

RedGentelman.o: RedGentelman.cpp
	$(CC) $(FLAGS) RedGentelman.cpp 

Sexonthebeach.o: Sexonthebeach.cpp
	$(CC) $(FLAGS) Sexonthebeach.cpp 

Smerf.o: Smerf.cpp
	$(CC) $(FLAGS) Smerf.cpp 

TequillaSunrise.o: TequillaSunrise.cpp
	$(CC) $(FLAGS) TequillaSunrise.cpp 

Tropical.o: Tropical.cpp
	$(CC) $(FLAGS) Tropical.cpp 

Zamowienia_okno.o: Zamowienia_okno.cpp
	$(CC) $(FLAGS) Zamowienia_okno.cpp 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)