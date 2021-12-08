#ifndef LAB8_NOTE_H
#define LAB8_NOTE_H

#include <iostream>

using namespace std;

class Note {
protected:
    string title;

public:
    string getTitle() {
        return title;
    }

    void setTitle(string title) {
        this->title = title;
    }

    virtual void addContent(string content) = 0;
    virtual string getContent() = 0;
};

class TextNote : public Note {
private:
    string content;

public:
    TextNote() {
        title = "";
        content = "";
    }

    void addContent(string content) {
        this->content = content;
    }
    string getContent() {
        return content;
    }
};

#endif //LAB8_NOTE_H
