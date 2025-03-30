#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> dictionary;
    std::string word, meaning;
    
    dictionary["pera"] = "masarap hawakan.";
    dictionary["dog"] = "a friendly animal aw aw.";
    dictionary["water"] = "liquid, colorless.";
    dictionary["posah"] = "small, furry, carnivorous mammal.";
    dictionary["bike"] = "vehicle with two wheels.";
    dictionary["tree"] = "perennial plant with trunk, branches, and leaves.";
    dictionary["pen"] = "writing instrument with ink.";
    dictionary["paper"] = "thin, flexible material for writing.";
    dictionary["house"] = "building for human habitation.";
    dictionary["school"] = "institution for education.";
    dictionary["chair"] = "piece of furniture for sitting.";
    dictionary["table"] = "piece of furniture with flat surface.";
    dictionary["phone"] = "device for communication.";
    dictionary["music"] = "boses nya e.";
    dictionary["flower"] = "reproductive part of a plant.";
    dictionary["bird"] = "warm-blooded, egg-laying vertebrate.";
    dictionary["fish"] = "cold-blooded, aquatic vertebrate.";
    dictionary["computer"] = "electronic device for processing data.";
    dictionary["game"] = "form of play or sport.";
    dictionary["bed"] = "piece of furniture for sleeping.";
    dictionary["door"] = "movable structure for entry/exit.";
    dictionary["window"] = "opening in a wall for light/ventilation.";
    dictionary["food"] = "substance consumed for nutrition.";
    dictionary["water"] = "liquid, colorless.";
    dictionary["mountain"] = "natural elevation of the earth's surface.";
    dictionary["river"] = "natural flowing body of water.";
    dictionary["wave"] = "a disturbance that travels through a medium.";
    dictionary["x-ray"] = "a high-energy beam of electromagnetic radiation.";
    dictionary["yacht"] = "a large, luxurious boat.";
    dictionary["zoo"] = "a place where animals are kept for public display.";
    
    while (true) {
        std::cout << "enter a word to search (or 'exit' to quit): ";
        std::getline(std::cin, word);

        if (word == "exit") {
            std::cout << "See you";
            break;
        }
        
       if (dictionary.find(word) != dictionary.end()) {
            std::cout << word << ": " << dictionary[word] << "";
        } else {
            std::cout << "Word not found";
        }
    }

    return 0;}