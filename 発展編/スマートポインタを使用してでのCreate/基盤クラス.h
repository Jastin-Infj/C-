#pragma once
#include <memory>
#include <iostream>
class Object
{
public:
	//�f�[�^���
	typedef std::shared_ptr<Object> SP;
	//�T�u�f�[�^
	typedef std::weak_ptr<Object>   WP;		
	//�����̃f�[�^
	WP me;									
private:
	bool nextTask;		//�I��
	int KillCount;		//
public:
	std::string taskName;

	Object();
	virtual ~Object();
	bool Initialize();
	void T_UpDate();
	void Draw();
	void Delete();
	virtual void UpDate() = 0;
	virtual void Render2D() = 0;
	virtual bool Finalize() = 0;
};