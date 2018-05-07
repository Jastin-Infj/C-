#pragma once
#include <memory>
#include <iostream>
class Object
{
public:
	//データ情報
	typedef std::shared_ptr<Object> SP;
	//サブデータ
	typedef std::weak_ptr<Object>   WP;		
	//自分のデータ
	WP me;									
private:
	bool nextTask;		//終了
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