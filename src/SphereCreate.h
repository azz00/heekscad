// SphereCreate.h

#pragma once

#include "../interface/InputMode.h"
#include "../interface/LeftAndRight.h"

class CSphereCreate: public CInputMode, CLeftAndRight
{
public:
	int m_mode; // 0 - moving the position, 1 - scaling the radius
	double m_r;
	double m_pos[3];

	CSphereCreate();
	virtual ~CSphereCreate(void){}

	// virtual functions for InputMode
	const char* GetTitle(){return "Creating a sphere";}
	void OnMouse( wxMouseEvent& event );
	void OnKeyDown(wxKeyEvent& event);
	void OnKeyUp(wxKeyEvent& event);
	bool OnStart();
	void OnRender();
	void GetProperties(std::list<Property *> *list);
	void GetTools(std::list<Tool*>* t_list, const wxPoint* p);

	void SetPositionOrRadius(const wxPoint& point);
};

extern CSphereCreate sphere_creator;