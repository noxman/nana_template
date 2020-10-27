/*****************************************************
 *	C++ code generated with Nana Creator (0.25.0)
 *	GitHub repo: https://github.com/besh81/nana-creator
 *
 * PLEASE EDIT ONLY INSIDE THE TAGS:
 *		//<*tag
 *			user code
 *		//*>
*****************************************************/

#ifndef NANAFORM_H
#define NANAFORM_H

#include <nana/gui.hpp>
#include <nana/gui/place.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
#include <nana/gui/widgets/textbox.hpp>

//<*includes

//*>


class nanaform
	: public nana::form
{
public:
	nanaform(nana::window wd, const ::nana::size& sz = {640, 480}, const nana::appearance& apr = {true, true, false, false, false, false, false})
		: nana::form(wd, sz, apr)
	{
		init_();

		//<*ctor

		//*>
	}

	~nanaform()
	{
		//<*dtor

		//*>
	}


private:
	void init_()
	{
		_place.div("vert margin=[5,5,5,5] <margin=[5,5,5,5] gap=2 field1><margin=[5,5,5,5] gap=2 field2>");
		caption("Form");
		// label1
		label1.create(*this);
		_place["field1"] << label1;
		label1.caption("label");
		// button1
		button1.create(*this);
		_place["field1"] << button1;
		button1.caption("button");
		// textbox1
		textbox1.create(*this);
		_place["field2"] << textbox1;

		_place.collocate();
	}


protected:
	nana::place _place{ *this };
	nana::label label1;
	nana::button button1;
	nana::textbox textbox1;


	//<*declarations

	//*>
};

#endif //NANAFORM_H

