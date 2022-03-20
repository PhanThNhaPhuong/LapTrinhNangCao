string pigLatin(string word){
    if(word[0]=='a'||word[0]=='i'||word[0]=='e'||word[0]=='u'||word[0]=='o'){
        word = word + "way";
      } else {
        char temp = word[0];
        for(int i = 1; i < word.size(); i++) word[i-1] = word[i];
        word[word.size()-1] = temp;
        word = word + "ay";
    }
    return word;
}
