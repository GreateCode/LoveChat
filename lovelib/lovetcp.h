#ifndef _LoveChat_UDP_H_
#define _LoveChat_UDP_H_
/*  
	tcp �ṩ��Ϣ�Ķ�ȡ�ͷ���
*/

class CLoveTcp
{
	enum TCPType
	{
		en_Client,
		en_Server,
		en_Other
	};
public:
	CLoveTcp();
	~CLoveTcp();
public:
	void StartTcp(TCPType type=en_Server,const std::string& strIp="",int nPort=9999);
private:
	void Init(); 
private:
	int m_nSocket;
};
#endif