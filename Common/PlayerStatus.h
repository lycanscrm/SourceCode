

#ifndef __PLAYERSTATUS_H__
#define __PLAYERSTATUS_H__


enum PLAYER_STATUS
{
	/////////////////////////////
	//��Ϸ�������е����״̬
	/////////////////////////////

	//��������ڷ������˵ĳ�ʼ״̬
	PS_SERVER_EMPTY = 100 ,		

	//����������ӳɹ����״̬����һ����Ҫ���͵���Ϣ�ǣ�
	//CGConnect�����N����û�յ������Ϣ����Ͽ�������
	PS_SERVER_CONNECT ,		

	//������볡��ʱ���û��Ǵ�����һ����������ĳ������������ģ�
	//����Ҫ��Դ���������û����ݣ����û����ݷ��͹���ǰ�����״̬
	PS_SERVER_WAITING_FOR_SERVER_DATA ,
	PS_SERVER_WAITING_FOR_SERVER_DATA_INCOMING ,

	// ��������������֤��ȴ��ͻ��˷���CGEnterScene��Ϣ
	// ���һ��ʱ����û���յ�CGEnterScene��Ϣ����Ͽ�����
	PS_SERVER_WAITING_FOR_ENTER ,	
								
	//���ڸս���Ŀͻ������ӣ����������յ�CGEnterScene��Ϣ���
	//IncomingPlayerManager�Ƴ���Ϣ׼������Scene��
	//�����Ѿ��ڳ����еĿͻ������ӣ��ͻ�����Ҫת������
	//�������յ�CGEnterScene��Ϣ���ԭ�������Ƴ���Ϣ��׼�����뵽�³���
	PS_SERVER_READY_TO_ENTER ,	

	//��Ҽ��볡������Ҫ����������� CGEnvRequset��Ϣ������Χ�������Ϣ
	//��ʱ���״̬Ϊ ��
	PS_SERVER_WAITTING_FOR_ENVREQUEST ,


	//�ͻ������״̬����������Ϸ״̬
	PS_SERVER_NORMAL ,

	//�ͻ��˷�����CGAskChangeScene��Ϣ�󣬷����������������ݷ�����������֤
	//��ʱ�ͻ��˼�������Ϸ�����������������ӣ����Ǵ�������״̬��
	PS_SERVER_WAITING_FOR_CHANGESCENE ,
	PS_SERVER_WAITING_FOR_CHANGESCENE_SCENE ,

	//������õ�GUID�Ѿ�������һ���µĵ�½ʹ�ã������ӱ��뱻�ߵ�
	PS_SERVER_ANOTHER_GUID_ENTER ,
	PS_SERVER_ANOTHER_GUID_ALSO_KICK ,

	//����Ѿ��ӷ������϶Ͽ������ҽ������ݱ���׶�
	PS_SERVER_ENTER_RECYCLE ,
	PS_SERVER_LEAVE_RECYCLE ,


	///////////////////////////////
	//��Ϸ�ͻ����е����״̬
	///////////////////////////////
	PS_CLIENT_LOAD = 200 ,
	PS_CLIENT_CONNECT ,

	///////////////////////////////
	//��½�������е����״̬
	///////////////////////////////
	PS_LOGIN_EMPTY			= 300 , //��������
	PS_LOGIN_CONNECT,				//���Ӳ��ҷ���������		
	PS_LOGIN_WAIT_AUTH,				//�ȴ�login ��������֤
	PS_LOGIN_AUTHED,				//��֤ͨ���Ŀͻ���(�Ϸ�),�Ժ���GUID�Ϳ���
	PS_LOGIN_WAIT_PROCESS_TURN,		//�ȴ������߼������ŶӶ���
	PS_LOGIN_PROCESS_TURN,			//�Ѿ����߼������ŶӶ����пͻ���
	PS_LOGIN_NORMAL ,				//�����߼������ͻ��ˡ�
	PS_LOGIN_SERVER_READY,			//���Խ���Server �Ŀͻ���
	

	///////////////////////////////
	//�Ʒ�ϵͳ�е����״̬
	///////////////////////////////
	PS_BILLING_CONNECT = 400 ,

	///////////////////////////////
	//�������ݷ������е�������״̬
	///////////////////////////////
	PS_WORLD_CONNECT = 500 ,
	PS_WORLD_NORMAL ,




};

#endif