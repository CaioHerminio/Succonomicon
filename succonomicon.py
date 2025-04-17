# 💘SUCCONOMICON - Python Edition


#______________________________________________________
# You have found the Succonomicon, the forbidden book of the spirits of pleasure and desire. With it, you will be able to discover the secret names of those who govern the course of lust. However, I must warn you to be careful! The greater the pleasure, the greater the pain...
#______________________________________________________

# 💫 LEVEL 1 — AbstractConcept
class AbstractConcept:
    def __init__(self, name, level, power, immortal, description):
        self.name = name
        self.level = level
        self.power = power
        self.immortal = immortal
        self.description = description

    def info(self):
        return (
            f"🌟 {self.name} (Level {self.level})\n"
            f"🧬 Power: {self.power}\n"
            f"💀 Immortal: {self.immortal}\n"
            f"📜 {self.description}"
        )

# 🗿 LEVEL 2 — Titan (inherits from AbstractConcept)
class Titan(AbstractConcept):
    def __init__(self, name, age, power=80, description="The colossal goddesses of cosmic desire who shape the raw, primordial essence of lust."):
        super().__init__(name, level=2, power=power, immortal=True, description=description)
        self.age = age

    def info(self):
        base_info = super().info()
        return f"{base_info}\n⏳ Age: {self.age}"

# 💘 LEVEL 3 — Archlover (inherits from Titan)
class Archlover(Titan):
    def __init__(self, name, legions):
        super().__init__(
            name=name,
            age=1000,
            power=60,
            description="The sovereign spirits of passion and grace who kindle love within mortal hearts and whisper beauty into dreams."
        )
        self.level = 3
        self.legions = legions

    def info(self):
        base_info = super().info()
        return f"{base_info}\n🪶 Legions: {self.legions}"

# 💋 LEVEL 4 — Sensualsapiens (inherits from Archlover)
class Sensualsapiens(Archlover):
    def __init__(self, name, weapon):
        super().__init__(name=name, legions=0)  # No legions, but needed for inheritance
        self.level = 4
        self.age = 100
        self.power = 40
        self.immortal = False
        self.description = ('Human-like spirits born from the sacred pleasure ignited on a couple’s first night of union, when love reaches its most exalted form.')

        self.weapon = weapon
        self.legions = None

    def info(self):
        return (
            f"💞 {self.name} (Level {self.level})\n"
            f"🧬 Power: {self.power}\n"
            f"💀 Immortal: {self.immortal}\n"
            f"⏳ Age: {self.age}\n"
            f"📜 {self.description}\n"
            f"🗡️ Weapon: {self.weapon}"
        )

#______________________________________________________

# 🔮 Creating the Pantheon

# 1️⃣ Level 1 - AbstractConcept    
treah = AbstractConcept(
    name="Treah",
    level=1,
    power=100,
    immortal=True,
    description="The personification of magnetic longing. She is the mother of all succubi, the sacred will that moves molecules, emotions, and thoughts through mechanic desire."
)

# 2️⃣ Level 2 - Titans
titan1 = Titan(name="Yinalah", age=9000)
titan2 = Titan(name="Yangilah", age=8000)

# 3️⃣ Level 3 - Archlovers
archlover1 = Archlover(name="Merkya", legions=13)
archlover2 = Archlover(name="Salka", legions=8)
archlover3 = Archlover(name="Sulxof", legions=5)

# 4️⃣ Level 4 - Sensualsapiens
sensual1 = Sensualsapiens(name="Pyrana", weapon="Wand of Ecstatic Passion")
sensual2 = Sensualsapiens(name="Hydraka", weapon="Chalice of Poisonous Love")
sensual3 = Sensualsapiens(name="Aerila", weapon="Sword of Dream Pleasure")
sensual4 = Sensualsapiens(name="Terrix", weapon="Shield of Erogenous Laughter")

#______________________________________________________

# ✨ Display all ladies of the pantheon
pantheon = [
    treah,
    titan1, titan2,
    archlover1, archlover2, archlover3,
    sensual1, sensual2, sensual3, sensual4
]

for spirit in pantheon:
    print("====================================")
    print(spirit.info())
    print("====================================\n")

#______________________________________________________
