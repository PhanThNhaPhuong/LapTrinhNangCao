// Write your Student class here
class Student {
    int totalScore = 0;
    public:
        vector<int> scores;
        void input() {
            for(int i = 0; i < 5; i++) {
                int x; cin >> x;
                scores.push_back(x) ;
            }
        }
        int calculateTotalScore() {
            for(int i = 0; i < 5; i++) {
                totalScore += scores[i];
            }
            return totalScore;
        }
       
};


