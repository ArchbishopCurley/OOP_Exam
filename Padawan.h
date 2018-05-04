using namespace std;

class Padawan {
	public:
		Padawan(string init_name);
		string getName();
		int getMidi();
		void setMidi();
		void checkJedi();

	private:
		string name;
		int midichlorians;

};
