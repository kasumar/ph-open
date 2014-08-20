/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Override
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_OVERRIDE_HPP_DECL
#define J2CPP_JAVA_LANG_OVERRIDE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Override;
	class Override
		: public object<Override>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit Override(jobject jobj)
		: object<Override>(jobj)
		{
		}

		operator local_ref<java::lang::annotation::Annotation>() const;
		operator local_ref<java::lang::Object>() const;

	}; //class Override

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_OVERRIDE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_OVERRIDE_HPP_IMPL
#define J2CPP_JAVA_LANG_OVERRIDE_HPP_IMPL

namespace j2cpp {



java::lang::Override::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

java::lang::Override::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(java::lang::Override,"java/lang/Override")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_OVERRIDE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION