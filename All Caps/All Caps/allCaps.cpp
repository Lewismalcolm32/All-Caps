#include <string>
#include <iostream>

std::string allCaps(const std::string& someString){
	std::string temp = someString;
	for (char& x : temp){
		//if (!(x == *" " || x == *"!" || x == *"," || x == *"?")){
			if ((96< x)&&(x <123)){
				x -= 32;
			}
			/*else if ((64< x) && (x <91)){    	//FOR ALL Lowercase :-P
				x += 32;						//FOR ALL Lowercase :-P
			}*/
			
		}
	//}
	return temp;

}

int main(){
	//std::string x = "Can I get a calll BACK, #ORNAH?!?!?!";
	std::cout << allCaps("Can I get a calll BACK, #ORNAH?!?!?!") << std::endl;//As long as parameters aren't const, I cannot pass in something that can't be changed
	system("pause");
}