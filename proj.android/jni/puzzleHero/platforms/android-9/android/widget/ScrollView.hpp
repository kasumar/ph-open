/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ScrollView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SCROLLVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SCROLLVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/FrameLayout.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ScrollView;
	class ScrollView
		: public object<ScrollView>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)

		explicit ScrollView(jobject jobj)
		: object<ScrollView>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::widget::FrameLayout>() const;


		ScrollView(local_ref< android::content::Context > const&);
		ScrollView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		ScrollView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		jint getMaxScrollAmount();
		void addView(local_ref< android::view::View >  const&);
		void addView(local_ref< android::view::View >  const&, jint);
		void addView(local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		void addView(local_ref< android::view::View >  const&, jint, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		jboolean isFillViewport();
		void setFillViewport(jboolean);
		jboolean isSmoothScrollingEnabled();
		void setSmoothScrollingEnabled(jboolean);
		jboolean dispatchKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean executeKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean onInterceptTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean pageScroll(jint);
		jboolean fullScroll(jint);
		jboolean arrowScroll(jint);
		void smoothScrollBy(jint, jint);
		void smoothScrollTo(jint, jint);
		void computeScroll();
		void requestChildFocus(local_ref< android::view::View >  const&, local_ref< android::view::View >  const&);
		jboolean requestChildRectangleOnScreen(local_ref< android::view::View >  const&, local_ref< android::graphics::Rect >  const&, jboolean);
		void requestLayout();
		void fling(jint);
		void scrollTo(jint, jint);
		void setOverScrollMode(jint);
		void draw(local_ref< android::graphics::Canvas >  const&);
	}; //class ScrollView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SCROLLVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SCROLLVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SCROLLVIEW_HPP_IMPL

namespace j2cpp {



android::widget::ScrollView::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::ScrollView::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}


android::widget::ScrollView::ScrollView(local_ref< android::content::Context > const &a0)
: object<android::widget::ScrollView>(
	call_new_object<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(0),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::ScrollView::ScrollView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ScrollView>(
	call_new_object<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(1),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::ScrollView::ScrollView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::ScrollView>(
	call_new_object<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(2),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}




jint android::widget::ScrollView::getMaxScrollAmount()
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(5),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::widget::ScrollView::addView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(6),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::widget::ScrollView::addView(local_ref< android::view::View > const &a0, jint a1)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(7),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::ScrollView::addView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup_::LayoutParams > const &a1)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(8),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::ScrollView::addView(local_ref< android::view::View > const &a0, jint a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(9),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2);
}

jboolean android::widget::ScrollView::isFillViewport()
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(10),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

void android::widget::ScrollView::setFillViewport(jboolean a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(11),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::ScrollView::isSmoothScrollingEnabled()
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(12),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

void android::widget::ScrollView::setSmoothScrollingEnabled(jboolean a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(13),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}


jboolean android::widget::ScrollView::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(15),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ScrollView::executeKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(16),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ScrollView::onInterceptTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(17),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ScrollView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(18),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject(), a0);
}


jboolean android::widget::ScrollView::pageScroll(jint a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(20),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ScrollView::fullScroll(jint a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(21),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ScrollView::arrowScroll(jint a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(22),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject(), a0);
}

void android::widget::ScrollView::smoothScrollBy(jint a0, jint a1)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(23),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::ScrollView::smoothScrollTo(jint a0, jint a1)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(24),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(24), 
		void
	>(get_jobject(), a0, a1);
}





void android::widget::ScrollView::computeScroll()
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(29),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject());
}


void android::widget::ScrollView::requestChildFocus(local_ref< android::view::View > const &a0, local_ref< android::view::View > const &a1)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(31),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0, a1);
}


jboolean android::widget::ScrollView::requestChildRectangleOnScreen(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1, jboolean a2)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(33),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(33), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

void android::widget::ScrollView::requestLayout()
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(34),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject());
}



void android::widget::ScrollView::fling(jint a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(37),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(37), 
		void
	>(get_jobject(), a0);
}

void android::widget::ScrollView::scrollTo(jint a0, jint a1)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(38),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject(), a0, a1);
}

void android::widget::ScrollView::setOverScrollMode(jint a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(39),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(39), 
		void
	>(get_jobject(), a0);
}

void android::widget::ScrollView::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::widget::ScrollView::J2CPP_CLASS_NAME,
		android::widget::ScrollView::J2CPP_METHOD_NAME(40),
		android::widget::ScrollView::J2CPP_METHOD_SIGNATURE(40), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::ScrollView,"android/widget/ScrollView")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,3,"getTopFadingEdgeStrength","()F")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,4,"getBottomFadingEdgeStrength","()F")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,5,"getMaxScrollAmount","()I")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,6,"addView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,7,"addView","(Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,8,"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,9,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,10,"isFillViewport","()Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,11,"setFillViewport","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,12,"isSmoothScrollingEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,13,"setSmoothScrollingEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,14,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,15,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,16,"executeKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,17,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,18,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,19,"onOverScrolled","(IIZZ)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,20,"pageScroll","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,21,"fullScroll","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,22,"arrowScroll","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,23,"smoothScrollBy","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,24,"smoothScrollTo","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,25,"computeVerticalScrollRange","()I")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,26,"computeVerticalScrollOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,27,"measureChild","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,28,"measureChildWithMargins","(Landroid/view/View;IIII)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,29,"computeScroll","()V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,30,"computeScrollDeltaToGetChildRectOnScreen","(Landroid/graphics/Rect;)I")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,31,"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,32,"onRequestFocusInDescendants","(ILandroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,33,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,34,"requestLayout","()V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,35,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,36,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,37,"fling","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,38,"scrollTo","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,39,"setOverScrollMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ScrollView,40,"draw","(Landroid/graphics/Canvas;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SCROLLVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
