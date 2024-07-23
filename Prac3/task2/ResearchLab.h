#ifndef RESEARCHLAB_H
#define RESEARCHLAB_H

#include <vector>
#include <queue>
#include <iostream>
#include "Trap.h" 
#include "Bank.h" 
#include "PlayerInteraction.h"

class ResearchLab {
public:
    ResearchLab(Bank& bank);

    void startResearch(const std::string& trapType, int researchCost , int damage);
    bool isResearchInProgress() const;
    void updateResearchStatus();
    void completeResearch();
    int getCurrentResearchProgress() const;
    int getRemainingResearchTurns() const;
    void queueResearch(const std::string& trapType);
    void removeQueuedResearch(int index);
    const std::vector<std::string>& getQueuedResearch() const;
    void notifyEngineAboutResearch(const std::string& trapType);
    int getTrapDamage(const std::string& trapType) const;

private:
    Bank& gameBank; 
    int researchTurns; 
    int currentResearchProgress; 
    std::vector<std::string> queuedResearch;
    PlayerInteraction& playerInteraction;
    std::unordered_map<std::string, int> trapDamages;
};

#endif // RESEARCHLAB_H
