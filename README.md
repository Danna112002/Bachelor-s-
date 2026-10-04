# Akcelerator sprzętowy operacji na ciągach znaków UTF-8 — *eng below*

Repozytorium zawiera projekt układu scalonego (ASIC) realizującego sprzętową akcelerację operacji na tekstach kodowanych w standardzie UTF-8. Projekt stanowi część praktyczną pracy inżynierskiej i został zaprojektowany, zweryfikowany oraz zsyntetyzowany w całości z wykorzystaniem otwartoźródłowych narzędzi (Open-Source EDA).

## 🎯 Cel projektu

Głównym założeniem jest optymalizacja przetwarzania danych znakowych w systemach natywnie wykorzystujących kodowanie UTF-8 (takich jak systemy oparte na jądrze Linuksa). Rozwiązanie przenosi wybrane operacje z poziomu oprogramowania na dedykowany układ sprzętowy, odciążając główny procesor i przyspieszając wykonywanie zadań.

## 📁 Zawartość repozytorium

- **Kod źródłowy:** Implementacja architektury akceleratora i jego modułów wewnętrznych (napisana w języku Verilog). Obejmuje logikę sterującą oraz interfejsy komunikacyjne układu.
- **Weryfikacja funkcjonalna (Cocotb):** Zestaw środowisk testowych (testbenches) napisanych w języku Python z użyciem frameworka Cocotb, sprawdzających poprawność działania poszczególnych modułów.
- **Wyniki symulacji i analizy kodu:** W repozytorium znajdują się pozostałe pliki wynikowe z syntez logicznych i symulacji (w tym przebiegi sygnałów w formacie `.vcd`), a także wygenerowane wyniki pokrycia kodu i statycznej analizy (efekty działania poleceń `make coverage` oraz `make lint`).
- **Przepływ syntezy (LibreLane):** Pliki sterujące, konfiguracje i skrypty wykorzystane do automatycznej syntezy układu przy użyciu narzędzia LibreLane, oparte o reguły projektowe PDK (m.in. IHP SG13G2).
  - ⚠️ *Uwaga: W celu zachowania czytelności i uniknięcia przeładowania repozytorium ogromnymi plikami, **nie zamieszczono** tutaj pełnych raportów ani ciężkich plików wynikowych z procesu syntezy fizycznej (Physical Design).*

## 🛠 Wykorzystane technologie

- **Hardware Description:** Verilog
- **Weryfikacja:** Python, framework Cocotb, symulatory cyfrowe
- **Synteza i implementacja (Physical Design):** LibreLane (OpenROAD flow)
- **Technologia:** Open-Source PDK

---

# Hardware Accelerator for UTF-8 String Operations

This repository contains a project of an integrated circuit (ASIC) designed to provide hardware acceleration for operations on text encoded using the UTF-8 standard. The project is the practical part of an engineering thesis and was designed, verified, and synthesized entirely using open-source tools (Open-Source EDA).

## 🎯 Project Goal

The main objective is to optimize character data processing in systems that natively use UTF-8 encoding (such as systems based on the Linux kernel). The solution moves selected operations from the software level to a dedicated hardware implementation, reducing the workload of the main processor and accelerating task execution.

## 📁 Repository Contents

- **Source Code:** Implementation of the accelerator architecture and its internal modules, written in Verilog. It includes the control logic and communication interfaces of the chip.
- **Functional Verification (Cocotb):** A set of testbenches written in Python using the Cocotb framework to verify the correct operation of individual modules.
- **Simulation and Code Analysis Results:** The repository contains various output files from logic synthesis and simulation, including signal waveforms in `.vcd` format, as well as generated code coverage and static analysis results (produced by the `make coverage` and `make lint` commands).
- **Synthesis Flow (LibreLane):** Control files, configurations, and scripts used for automatic synthesis of the design with LibreLane, based on PDK design rules (including IHP SG13G2).
  - ⚠️ *Note: To keep the repository readable and avoid unnecessarily large files, complete reports and large output files from the physical design process are **not included**.*

## 🛠 Technologies Used

- **Hardware Description:** Verilog
- **Verification:** Python, Cocotb framework, digital simulators
- **Synthesis and Physical Design:** LibreLane (OpenROAD flow)
- **Technology:** Open-Source PDK
