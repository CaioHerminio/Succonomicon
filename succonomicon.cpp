#include <iostream>
#include <string>
#include <vector>

// 💘SUCCONOMICON - C++ Edition

//______________________________________________________
// You have found the Succonomicon, the forbidden book of the spirits of pleasure and desire. 
// With it, you will be able to discover the secret names of those who govern the course of lust. 
// However, I must warn you to be careful! The greater the pleasure, the greater the pain...
//______________________________________________________

// 💫 LEVEL 1 — AbstractConcept
class AbstractConcept {
public:
    std::string name;
    int level;
    int power;
    bool immortal;
    std::string description;

    // Constructor to initialize the AbstractConcept
    AbstractConcept(std::string n, int lvl, int pwr, bool im, std::string desc)
        : name(n), level(lvl), power(pwr), immortal(im), description(desc) {}

    // Method to display information about the spirit
    virtual void info() const {
        std::cout << "🌟 " << name << " (Level " << level << ")\n"
                  << "🧬 Power: " << power << "\n"
                  << "💀 Immortal: " << (immortal ? "Yes" : "No") << "\n"
                  << "📜 " << description << "\n";
    }
};

// 🗿 LEVEL 2 — Titan (inherits from AbstractConcept)
class Titan : public AbstractConcept {
public:
    int age;

    // Constructor to initialize the Titan
    Titan(std::string n, int ag, int pwr = 80, std::string desc = "The colossal goddesses of cosmic desire who shape the raw, primordial essence of lust.")
        : AbstractConcept(n, 2, pwr, true, desc), age(ag) {}

    // Overriding the info method
    void info() const override {
        AbstractConcept::info();
        std::cout << "⏳ Age: " << age << "\n";
    }
};

// 💘 LEVEL 3 — Archlover (inherits from Titan)
class Archlover : public Titan {
public:
    int legions;

    // Constructor to initialize the Archlover
    Archlover(std::string n, int leg = 0)
        : Titan(n, 1000, 60, "The sovereign spirits of passion and grace who kindle love within mortal hearts and whisper beauty into dreams."), legions(leg) {
        level = 3;
    }

    // Overriding the info method
    void info() const override {
        Titan::info();
        std::cout << "🪶 Legions: " << legions << "\n";
    }
};

// 💋 LEVEL 4 — Sensualsapiens (inherits from Archlover)
class Sensualsapiens : public Archlover {
public:
    int age;
    int power;
    bool immortal;
    std::string description;
    std::string weapon;

    // Constructor to initialize the Sensualsapiens
    Sensualsapiens(std::string n, std::string weap)
        : Archlover(n, 0), age(100), power(40), immortal(false), weapon(weap) {
        description = "Human-like spirits born from the sacred pleasure ignited on a couple s first night of union, when love reaches its most exalted form.";
        level = 4;
    }

    // Overriding the info method
    void info() const override {
        std::cout << "💞 " << name << " (Level " << level << ")\n"
                  << "🧬 Power: " << power << "\n"
                  << "💀 Immortal: " << (immortal ? "Yes" : "No") << "\n"
                  << "⏳ Age: " << age << "\n"
                  << "📜 " << description << "\n"
                  << "🗡️ Weapon: " << weapon << "\n";
    }
};

//______________________________________________________
// 🔮 Creating the Pantheon

// 1️⃣ Level 1 - AbstractConcept    
AbstractConcept treah("Treah", 1, 100, true, 
    "The personification of magnetic longing. She is the mother of all succubi, "
    "the sacred will that moves molecules, emotions, and thoughts through mechanic desire."
);

// 2️⃣ Level 2 - Titans
Titan titan1("Yinalah", 9000);
Titan titan2("Yangilah", 8000);

// 3️⃣ Level 3 - Archlovers
Archlover archlover1("Merkya", 13);
Archlover archlover2("Salka", 8);
Archlover archlover3("Sulxof", 5);

// 4️⃣ Level 4 - Sensualsapiens
Sensualsapiens sensual1("Pyrana", "Wand of Ecstatic Passion");
Sensualsapiens sensual2("Hydraka", "Chalice of Poisonous Love");
Sensualsapiens sensual3("Aerila", "Sword of Dream Pleasure");
Sensualsapiens sensual4("Terrix", "Shield of Erogenous Laughter");

//______________________________________________________
// ✨ Display all ladies of the pantheon
std::vector<AbstractConcept*> pantheon = {
    &treah,
    &titan1, &titan2,
    &archlover1, &archlover2, &archlover3,
    &sensual1, &sensual2, &sensual3, &sensual4
};

int main() {
    // Loop to display information of all spirits in the pantheon
    for (const auto& spirit : pantheon) {
        std::cout << "====================================\n";
        spirit->info();
        std::cout << "====================================\n\n";
    }

    return 0;
}

//______________________________________________________
