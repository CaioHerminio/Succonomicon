// 💘 SUCCONOMICON - JavaScript Edition

//______________________________________________________
// You have found the Succonomicon, the forbidden book of the spirits of pleasure and desire. 
// With it, you will be able to discover the secret names of those who govern the course of lust. 
// However, I must warn you to be careful! The greater the pleasure, the greater the pain...
//______________________________________________________


// 💫 LEVEL 1 — AbstractConcept
class AbstractConcept {
    constructor(name, level, power, immortal, description) {
        this.name = name;
        this.level = level;
        this.power = power;
        this.immortal = immortal;
        this.description = description;
    }

    // Method to display info about the spirit
    info() {
        return (
            `🌟 ${this.name} (Level ${this.level})\n` +
            `🧬 Power: ${this.power}\n` +
            `💀 Immortal: ${this.immortal ? 'Yes' : 'No'}\n` +
            `📜 ${this.description}`
        );
    }
}

// 🗿 LEVEL 2 — Titan (inherits from AbstractConcept)
class Titan extends AbstractConcept {
    constructor(name, age, power = 80, description = "The colossal goddesses of cosmic desire who shape the raw, primordial essence of lust.") {
        super(name, 2, power, true, description);
        this.age = age;
    }

    // Overriding the info method
    info() {
        return super.info() + `\n⏳ Age: ${this.age}`;
    }
}

// 💘 LEVEL 3 — Archlover (inherits from Titan)
class Archlover extends Titan {
    constructor(name, legions) {
        super(name, 1000, 60, "The sovereign spirits of passion and grace who kindle love within mortal hearts and whisper beauty into dreams.");
        this.level = 3;
        this.legions = legions;
    }

    // Overriding the info method
    info() {
        return super.info() + `\n🪶 Legions: ${this.legions}`;
    }
}

// 💋 LEVEL 4 — Sensualsapiens (inherits from Archlover)
class Sensualsapiens extends Archlover {
    constructor(name, weapon) {
        super(name, 0);  // No legions, but needed for inheritance
        this.level = 4;
        this.age = 100;
        this.power = 40;
        this.immortal = false;
        this.description = 'Human-like spirits born from the sacred pleasure ignited on a couple’s first night of union, when love reaches its most exalted form.';
        this.weapon = weapon;
        this.legions = null;
    }

    // Overriding the info method
    info() {
        return (
            `💞 ${this.name} (Level ${this.level})\n` +
            `🧬 Power: ${this.power}\n` +
            `💀 Immortal: ${this.immortal ? 'Yes' : 'No'}\n` +
            `⏳ Age: ${this.age}\n` +
            `📜 ${this.description}\n` +
            `🗡️ Weapon: ${this.weapon}`
        );
    }
}

//______________________________________________________
// 🔮 Creating the Pantheon

// 1️⃣ Level 1 - AbstractConcept    
const treah = new AbstractConcept(
    "Treah",
    1,
    100,
    true,
    "The personification of magnetic longing. She is the mother of all succubi, the sacred will that moves molecules, emotions, and thoughts through mechanic desire."
);

// 2️⃣ Level 2 - Titans
const titan1 = new Titan("Yinalah", 9000);
const titan2 = new Titan("Yangilah", 8000);

// 3️⃣ Level 3 - Archlovers
const archlover1 = new Archlover("Merkya", 13);
const archlover2 = new Archlover("Salka", 8);
const archlover3 = new Archlover("Sulxof", 5);

// 4️⃣ Level 4 - Sensualsapiens
const sensual1 = new Sensualsapiens("Pyrana", "Wand of Ecstatic Passion");
const sensual2 = new Sensualsapiens("Hydraka", "Chalice of Poisonous Love");
const sensual3 = new Sensualsapiens("Aerila", "Sword of Dream Pleasure");
const sensual4 = new Sensualsapiens("Terrix", "Shield of Erogenous Laughter");

//______________________________________________________
// ✨ Display all ladies of the pantheon
const pantheon = [
    treah,
    titan1, titan2,
    archlover1, archlover2, archlover3,
    sensual1, sensual2, sensual3, sensual4
];

pantheon.forEach(spirit => {
    console.log("====================================");
    console.log(spirit.info());
    console.log("====================================\n");
});

//______________________________________________________
