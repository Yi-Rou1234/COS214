#include "ResearchLab.h"
#include "PlayerInteraction.h"

ResearchLab::ResearchLab(Bank& bank)
    : gameBank(bank), playerInteraction(playerInteraction), researchTurns(0), currentResearchProgress(0) {
}

// ResearchLab::ResearchLab(Bank& bank, PlayerInteraction& playerInteraction)
//     : gameBank(bank), researchTurns(0), currentResearchProgress(0), playerInteraction(playerInteraction) {
        
//     }

// void ResearchLab::startResearch(const std::string& trapType, int researchCost) {
//     if (gameBank.getCurrentGold() >= researchCost) {
//         gameBank.spendGold(researchCost);
//         notifyEngineAboutResearch(trapType);
//     } else {
//         // Handle insufficient funds error
//     }
// }
void ResearchLab::startResearch(const std::string& trapType, int researchCost , int damage) {
    if (!isResearchInProgress()) {
        if (gameBank.spendGold(researchCost)) {
            researchTurns = 3; // Simulate research taking 3 turns
            currentResearchProgress = 0;
            notifyEngineAboutResearch(trapType);
        } else {
            std::cout << "Insufficient funds for research." << std::endl;
        }
    } else {
        std::cout << "Research is already in progress." << std::endl;
    }

    //store damaged value
    trapDamages[trapType] = damage;
}

bool ResearchLab::isResearchInProgress() const {
    return (0 < researchTurns);
}

void ResearchLab::updateResearchStatus() {
    if (isResearchInProgress()) {
        researchTurns--;
        currentResearchProgress++;
        if (researchTurns == 0) {
            completeResearch();
        }
    }
}

void ResearchLab::completeResearch() {
    // Logic to complete research and create the trap
    std::string trapType = queuedResearch.front();
    queuedResearch.erase(queuedResearch.begin());
    std::cout << "Research on " << trapType << " is complete!" << std::endl;

    //notify the player interaction about the new trap
    // playerInteraction.notifyNewTrap(trapType);
}

int ResearchLab::getCurrentResearchProgress() const {
    return currentResearchProgress;
}

int ResearchLab::getRemainingResearchTurns() const {
    return (researchTurns - currentResearchProgress);
}

void ResearchLab::queueResearch(const std::string& trapType) {
    queuedResearch.push_back(trapType);
}

void ResearchLab::removeQueuedResearch(int index) {
    if (index >= 0 && index < queuedResearch.size()) {
        queuedResearch.erase(queuedResearch.begin() + index);
    }
}

const std::vector<std::string>& ResearchLab::getQueuedResearch() const {
    return queuedResearch;
}

void ResearchLab::notifyEngineAboutResearch(const std::string& trapType) {
    // ...
}

int ResearchLab::getTrapDamage(const std::string& trapType) const {
    // Retrieve the damage value for a specific trap type
    auto it = trapDamages.find(trapType);
    if (it != trapDamages.end()) {
        return it->second;
    } else {
        // Return a default value or handle the case when the trap type is not found
        return 0;
    }
}