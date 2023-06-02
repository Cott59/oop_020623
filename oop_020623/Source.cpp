#include<iostream>
#include<map>// контейнер библ STL


class Client
{
private:
	int _age;
	int _id;

public:
	Client(int age,int id): _age(age),_id(id){}

	Client(Client& client)//корструктор копирования
	{
		_age = client._age;
		_id = client._id;
	}
	void ShowData()
	{
		std::cout << " Age: " << _age << std::endl;
		std::cout << " ID: " << _id << std::endl;

	}


};


int main()
{
	//Client client(24, 1);
	//Client client2(client);// пепедача арг в корструктор копирования
	//client.ShowData();
	//client2.ShowData();
	

	//библиотека map   сортируется авто по "ключу(first)"
	/*
	//1-John
	//std::map<int, std::string> clients = // int-тип ключа, std::string - тип значения
	//{
	//	{23,"John"},// 23-это first  "John"-second
	//	{26,"Alex"},
	//	{30,"Bob"}
	//};

	auto it = clients.begin();
	/*std::cout<< it->first<<'\n';
	std::cout << it->second << '\n';*/

	/*it++;
	std::cout << it->first << '\n';
	std::cout << it->second << '\n';*/

	//std::advance(it, 2);//advance передвигает итерратор it на заданное кол -во ячеек
	//std::cout << it->first << '\n';
	//std::cout << it->second << '\n';

	/*for (; it != clients.end(); ++it)
	{
		std::cout << it->first << '\n';
		std::cout << it->second << '\n';
	}*/

	//clients.insert(std::make_pair(10, "Monica"));
	//clients[55] = "Gari";//добавление Gari // идентично строчке выше

	//std::cout << clients[23] << '\n';

	//it = clients.find(23);//находит элемент с ключом 23 и присваивание указателю it ячейка с ключом 23

	//clients.erase(it); // удаление ячейки на который указывает итерратор it, в данном случае 23

	//for (it = clients.begin(); it != clients.end(); ++it)
	//{
	//	std::cout << it->first << '\n';
	//	std::cout << it->second << '\n';
	//}
	
	//void Foo()
	//{
	//	this->_id; //this - это тот объект который вызвал функцию Foo
	//};

	return 0;
}