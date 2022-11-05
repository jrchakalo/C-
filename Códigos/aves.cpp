#include <iostream>
#include <string>

using namespace std;

int main(void){
	bool simounao;
	
	cin >> simounao;
	
	switch(simounao){
		case 1:
			cin >> simounao;			
			switch(simounao){
				case 1:
					cin >> simounao;
					switch(simounao){
						case 0:
							cin >> simounao;	
							switch(simounao){
								case 1:
									cin >> simounao;
									switch(simounao){
										case 1:
											cout << "garça";
											break;
										case 0:
											cout << "gaivota";
											break;
									}
									break;
								case 0:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "pinguim";
											break;
										default:
											break;
									}
									break;
								default:
									break;
							}	
						default:
							break;		
					}
					break;
				case 0:
					cin >> simounao;
					switch(simounao){
						case 0:
							cin >> simounao;
							switch(simounao){
								case 1:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "pato";
											break;
										default:
											break;
									}
									break;
								default:
									break;
							}
							break;
						default:
							break;
					}
					break;
				default:
					break;
			}
			break;
		case 0:
			cin >> simounao;
			switch(simounao){
				case 1:
					cin >> simounao;
					switch(simounao){
						case 0:
							cin >> simounao;
							switch(simounao){
								case 0:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "ema";
											break;
										default:
											break;
									}
									break;
								case 1:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "falcao";
											break;
										case 1:
											cout << "coruja";
											break;
									}
									break;
								default:
									break;
							}
							break;
						default:
							break;	
					}
					break;
				case 0: 
					cin >> simounao;
					switch(simounao){
						case 0:
							cin >> simounao;
							switch(simounao){
								case 0:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "avestruz";
											break;
										default:
											break;
									}
									break;
								case 1:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "pardal";
											break;
										default:
											break;
									}
									break;
								default:
									break;
							}	
							break;
						case 1:
							cin >> simounao;
							switch(simounao){
								case 1:
									cin >> simounao;
									switch(simounao){
										case 0:
											cout << "galinha";
											break;
										default:
											break;		
									}
									break;
								default:
									break;
							}
							break;
						default:
							break;
					}
					break;
				default:
					break;
			}	
		default:
			break;
	}

    return 0;
}
