#include<iostream>
#include<map>// ��������� ���� STL


class Client
{
private:
	int _age;
	int _id;

public:
	Client(int age,int id): _age(age),_id(id){}

	Client(Client& client)//����������� �����������
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
	//Client client2(client);// �������� ��� � ����������� �����������
	//client.ShowData();
	//client2.ShowData();
	

	//���������� map   ����������� ���� �� "�����(first)"
	/*
	//1-John
	//std::map<int, std::string> clients = // int-��� �����, std::string - ��� ��������
	//{
	//	{23,"John"},// 23-��� first  "John"-second
	//	{26,"Alex"},
	//	{30,"Bob"}
	//};

	auto it = clients.begin();
	/*std::cout<< it->first<<'\n';
	std::cout << it->second << '\n';*/

	/*it++;
	std::cout << it->first << '\n';
	std::cout << it->second << '\n';*/

	//std::advance(it, 2);//advance ����������� ��������� it �� �������� ��� -�� �����
	//std::cout << it->first << '\n';
	//std::cout << it->second << '\n';

	/*for (; it != clients.end(); ++it)
	{
		std::cout << it->first << '\n';
		std::cout << it->second << '\n';
	}*/

	//clients.insert(std::make_pair(10, "Monica"));
	//clients[55] = "Gari";//���������� Gari // ��������� ������� ����

	//std::cout << clients[23] << '\n';

	//it = clients.find(23);//������� ������� � ������ 23 � ������������ ��������� it ������ � ������ 23

	//clients.erase(it); // �������� ������ �� ������� ��������� ��������� it, � ������ ������ 23

	//for (it = clients.begin(); it != clients.end(); ++it)
	//{
	//	std::cout << it->first << '\n';
	//	std::cout << it->second << '\n';
	//}
	
	//void Foo()
	//{
	//	this->_id; //this - ��� ��� ������ ������� ������ ������� Foo
	//};

	return 0;
}