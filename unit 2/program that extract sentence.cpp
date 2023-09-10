#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// Function to extract sentences containing a specific keyword
std::vector<std::string> extract(const std::string& paragraph, const std::string& keyword) {
    std::vector<std::string> extracted_sentences;
    std::istringstream iss(paragraph);
    std::string sentence;

    while (std::getline(iss, sentence, '.')) {
        if (sentence.find(keyword) != std::string::npos) {
            extracted_sentences.push_back(sentence);
        }
    }

    return extracted_sentences;
}

int main() {
    std::string paragraph;
    std::string keyword;

    // Input paragraph from the user
    std::getline(std::cin, paragraph);
    // Input keyword from the user
    std::cin >> keyword;

    // Call the extract function
    std::vector<std::string> extracted_sentences = extract(paragraph, keyword);

    // Display the number of extracted sentences found
    std::cout << extracted_sentences.size() << std::endl;

    // Display the extracted sentences that contain the specified keyword
    for (const std::string& sentence : extracted_sentences) {
        std::cout << sentence << "." << std::endl;
    }

    return 0;
}

