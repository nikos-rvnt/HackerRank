

class Message {
    private: 
        string text_v;
        static int id;
        int current_id;
    public: 
        Message() {}
        Message( string& mess) { 
            text_v = mess;
            current_id = ++id;
        }
        const string& get_text() {
            return text_v;
        }
        bool operator<(const Message& mes){
            if(this->current_id<mes.current_id)
                return true;
            else 
                return false;
        }
};
int Message::id = 0;

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message( string& text) {
        Message ms = Message( text);
        return ms;
    }
};

