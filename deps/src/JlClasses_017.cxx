// this file was auto-generated by wrapit v1.3.3-dirty
#include "Wrapper.h"

#include "jlROOT.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<TF1Parameters> : std::false_type { };
  template<> struct DefaultConstructible<TF1Parameters> : std::false_type { };
}

// Class generating the wrapper for type TF1Parameters
// signature to use in the veto file: TF1Parameters
struct JlTF1Parameters: public Wrapper {

  JlTF1Parameters(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TF1Parameters (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:51:7
    jlcxx::TypeWrapper<TF1Parameters>  t = jlModule.add_type<TF1Parameters>("TF1Parameters");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TF1Parameters>>(new jlcxx::TypeWrapper<TF1Parameters>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void TF1Parameters::TF1Parameters(Int_t) (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:54:4
    t.constructor<Int_t>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void TF1Parameters::TF1Parameters(const TF1Parameters &) (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:63:4
    t.constructor<const TF1Parameters &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for TF1Parameters & TF1Parameters::operator=(const TF1Parameters &) (" __HERE__ ")");
    // signature to use in the veto list: TF1Parameters & TF1Parameters::operator=(const TF1Parameters &)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:68:19
    t.method("assign", static_cast<TF1Parameters & (TF1Parameters::*)(const TF1Parameters &) >(&TF1Parameters::operator=));

    DEBUG_MSG("Adding wrapper for Double_t TF1Parameters::GetParameter(Int_t) (" __HERE__ ")");
    // signature to use in the veto list: Double_t TF1Parameters::GetParameter(Int_t)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:78:13
    t.method("GetParameter", static_cast<Double_t (TF1Parameters::*)(Int_t)  const>(&TF1Parameters::GetParameter));

    DEBUG_MSG("Adding wrapper for Double_t TF1Parameters::GetParameter(const char *) (" __HERE__ ")");
    // signature to use in the veto list: Double_t TF1Parameters::GetParameter(const char *)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:82:13
    t.method("GetParameter", static_cast<Double_t (TF1Parameters::*)(const char *)  const>(&TF1Parameters::GetParameter));

    DEBUG_MSG("Adding wrapper for const Double_t * TF1Parameters::GetParameters() (" __HERE__ ")");
    // signature to use in the veto list: const Double_t * TF1Parameters::GetParameters()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:86:20
    t.method("GetParameters", static_cast<const Double_t * (TF1Parameters::*)()  const>(&TF1Parameters::GetParameters));

    DEBUG_MSG("Adding wrapper for const std::vector<double> & TF1Parameters::ParamsVec() (" __HERE__ ")");
    // signature to use in the veto list: const std::vector<double> & TF1Parameters::ParamsVec()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:90:31
    t.method("ParamsVec", static_cast<const std::vector<double> & (TF1Parameters::*)()  const>(&TF1Parameters::ParamsVec));

    DEBUG_MSG("Adding wrapper for Int_t TF1Parameters::GetParNumber(const char *) (" __HERE__ ")");
    // signature to use in the veto list: Int_t TF1Parameters::GetParNumber(const char *)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:95:10
    t.method("GetParNumber", static_cast<Int_t (TF1Parameters::*)(const char *)  const>(&TF1Parameters::GetParNumber));

    DEBUG_MSG("Adding wrapper for const char * TF1Parameters::GetParName(Int_t) (" __HERE__ ")");
    // signature to use in the veto list: const char * TF1Parameters::GetParName(Int_t)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:97:16
    t.method("GetParName", [](TF1Parameters const& a, Int_t arg0) { return (std::string)a.GetParName(arg0); });
    t.method("GetParName", [](TF1Parameters const* a, Int_t arg0) { return (std::string)a->GetParName(arg0); });

    DEBUG_MSG("Adding wrapper for void TF1Parameters::SetParameter(Int_t, Double_t) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::SetParameter(Int_t, Double_t)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:104:11
    t.method("SetParameter", static_cast<void (TF1Parameters::*)(Int_t, Double_t) >(&TF1Parameters::SetParameter));

    DEBUG_MSG("Adding wrapper for void TF1Parameters::SetParameters(const Double_t *) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::SetParameters(const Double_t *)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:109:10
    t.method("SetParameters", static_cast<void (TF1Parameters::*)(const Double_t *) >(&TF1Parameters::SetParameters));

    DEBUG_MSG("Adding wrapper for void TF1Parameters::SetParameters(Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::SetParameters(Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:113:10
    t.method("SetParameters", static_cast<void (TF1Parameters::*)(Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t, Double_t) >(&TF1Parameters::SetParameters));
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1)->void { a.SetParameters(arg0, arg1); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2)->void { a.SetParameters(arg0, arg1, arg2); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3)->void { a.SetParameters(arg0, arg1, arg2, arg3); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4)->void { a.SetParameters(arg0, arg1, arg2, arg3, arg4); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5)->void { a.SetParameters(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6)->void { a.SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6, Double_t arg7)->void { a.SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6, Double_t arg7, Double_t arg8)->void { a.SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); });
    t.method("SetParameters", [](TF1Parameters& a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6, Double_t arg7, Double_t arg8, Double_t arg9)->void { a.SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1)->void { a->SetParameters(arg0, arg1); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2)->void { a->SetParameters(arg0, arg1, arg2); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3)->void { a->SetParameters(arg0, arg1, arg2, arg3); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4)->void { a->SetParameters(arg0, arg1, arg2, arg3, arg4); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5)->void { a->SetParameters(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6)->void { a->SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6, Double_t arg7)->void { a->SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6, Double_t arg7, Double_t arg8)->void { a->SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); });
    t.method("SetParameters", [](TF1Parameters* a, Double_t arg0, Double_t arg1, Double_t arg2, Double_t arg3, Double_t arg4, Double_t arg5, Double_t arg6, Double_t arg7, Double_t arg8, Double_t arg9)->void { a->SetParameters(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); });

    DEBUG_MSG("Adding wrapper for void TF1Parameters::SetParameter(const char *, Double_t) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::SetParameter(const char *, Double_t)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:117:11
    t.method("SetParameter", static_cast<void (TF1Parameters::*)(const char *, Double_t) >(&TF1Parameters::SetParameter));

    DEBUG_MSG("Adding wrapper for void TF1Parameters::SetParName(Int_t, const char *) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::SetParName(Int_t, const char *)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:121:11
    t.method("SetParName", static_cast<void (TF1Parameters::*)(Int_t, const char *) >(&TF1Parameters::SetParName));

    DEBUG_MSG("Adding wrapper for void TF1Parameters::SetParNames(const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::SetParNames(const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:126:11
    t.method("SetParNames", static_cast<void (TF1Parameters::*)(const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *, const char *) >(&TF1Parameters::SetParNames));
    t.method("SetParNames", [](TF1Parameters& a)->void { a.SetParNames(); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0)->void { a.SetParNames(arg0); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1)->void { a.SetParNames(arg0, arg1); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2)->void { a.SetParNames(arg0, arg1, arg2); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3)->void { a.SetParNames(arg0, arg1, arg2, arg3); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4)->void { a.SetParNames(arg0, arg1, arg2, arg3, arg4); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5)->void { a.SetParNames(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6)->void { a.SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6, const char * arg7)->void { a.SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6, const char * arg7, const char * arg8)->void { a.SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); });
    t.method("SetParNames", [](TF1Parameters& a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6, const char * arg7, const char * arg8, const char * arg9)->void { a.SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); });
    t.method("SetParNames", [](TF1Parameters* a)->void { a->SetParNames(); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0)->void { a->SetParNames(arg0); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1)->void { a->SetParNames(arg0, arg1); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2)->void { a->SetParNames(arg0, arg1, arg2); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3)->void { a->SetParNames(arg0, arg1, arg2, arg3); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4)->void { a->SetParNames(arg0, arg1, arg2, arg3, arg4); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5)->void { a->SetParNames(arg0, arg1, arg2, arg3, arg4, arg5); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6)->void { a->SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6, const char * arg7)->void { a->SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6, const char * arg7, const char * arg8)->void { a->SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); });
    t.method("SetParNames", [](TF1Parameters* a, const char * arg0, const char * arg1, const char * arg2, const char * arg3, const char * arg4, const char * arg5, const char * arg6, const char * arg7, const char * arg8, const char * arg9)->void { a->SetParNames(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); });

    DEBUG_MSG("Adding wrapper for Version_t TF1Parameters::Class_Version() (" __HERE__ ")");
    // signature to use in the veto list: Version_t TF1Parameters::Class_Version()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!Class_Version", static_cast<Version_t (*)() >(&TF1Parameters::Class_Version));

    DEBUG_MSG("Adding wrapper for TClass * TF1Parameters::IsA() (" __HERE__ ")");
    // signature to use in the veto list: TClass * TF1Parameters::IsA()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    t.method("IsA", static_cast<TClass * (TF1Parameters::*)()  const>(&TF1Parameters::IsA));

    DEBUG_MSG("Adding wrapper for void TF1Parameters::StreamerNVirtual(TBuffer &) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::StreamerNVirtual(TBuffer &)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    t.method("StreamerNVirtual", static_cast<void (TF1Parameters::*)(TBuffer &) >(&TF1Parameters::StreamerNVirtual));

    DEBUG_MSG("Adding wrapper for const char * TF1Parameters::DeclFileName() (" __HERE__ ")");
    // signature to use in the veto list: const char * TF1Parameters::DeclFileName()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!DeclFileName", []() { return (std::string)TF1Parameters::DeclFileName(); });

    DEBUG_MSG("Adding wrapper for int TF1Parameters::ImplFileLine() (" __HERE__ ")");
    // signature to use in the veto list: int TF1Parameters::ImplFileLine()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!ImplFileLine", static_cast<int (*)() >(&TF1Parameters::ImplFileLine));

    DEBUG_MSG("Adding wrapper for const char * TF1Parameters::ImplFileName() (" __HERE__ ")");
    // signature to use in the veto list: const char * TF1Parameters::ImplFileName()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!ImplFileName", []() { return (std::string)TF1Parameters::ImplFileName(); });

    DEBUG_MSG("Adding wrapper for const char * TF1Parameters::Class_Name() (" __HERE__ ")");
    // signature to use in the veto list: const char * TF1Parameters::Class_Name()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!Class_Name", []() { return (std::string)TF1Parameters::Class_Name(); });

    DEBUG_MSG("Adding wrapper for TClass * TF1Parameters::Dictionary() (" __HERE__ ")");
    // signature to use in the veto list: TClass * TF1Parameters::Dictionary()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!Dictionary", static_cast<TClass * (*)() >(&TF1Parameters::Dictionary));

    DEBUG_MSG("Adding wrapper for TClass * TF1Parameters::Class() (" __HERE__ ")");
    // signature to use in the veto list: TClass * TF1Parameters::Class()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!Class", static_cast<TClass * (*)() >(&TF1Parameters::Class));

    DEBUG_MSG("Adding wrapper for void TF1Parameters::Streamer(TBuffer &) (" __HERE__ ")");
    // signature to use in the veto list: void TF1Parameters::Streamer(TBuffer &)
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    t.method("Streamer", static_cast<void (TF1Parameters::*)(TBuffer &) >(&TF1Parameters::Streamer));

    DEBUG_MSG("Adding wrapper for int TF1Parameters::DeclFileLine() (" __HERE__ ")");
    // signature to use in the veto list: int TF1Parameters::DeclFileLine()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:133:4
    module_.method("TF1Parameters!DeclFileLine", static_cast<int (*)() >(&TF1Parameters::DeclFileLine));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TF1Parameters>> type_;
};
std::shared_ptr<Wrapper> newJlTF1Parameters(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTF1Parameters(module));
}

namespace jlcxx {
  template<> struct IsMirroredType<TF1::TF1FunctorPointer> : std::false_type { };
  template<> struct DefaultConstructible<TF1::TF1FunctorPointer> : std::false_type { };
}

// Class generating the wrapper for type TF1::TF1FunctorPointer
// signature to use in the veto file: TF1::TF1FunctorPointer
struct JlTF1_TF1FunctorPointer: public Wrapper {

  JlTF1_TF1FunctorPointer(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TF1::TF1FunctorPointer (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:228:11
    jlcxx::TypeWrapper<TF1::TF1FunctorPointer>  t = jlModule.add_type<TF1::TF1FunctorPointer>("TF1!TF1FunctorPointer");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TF1::TF1FunctorPointer>>(new jlcxx::TypeWrapper<TF1::TF1FunctorPointer>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;

    DEBUG_MSG("Adding wrapper for TF1::TF1FunctorPointer * TF1::TF1FunctorPointer::Clone() (" __HERE__ ")");
    // signature to use in the veto list: TF1::TF1FunctorPointer * TF1::TF1FunctorPointer::Clone()
    // defined in /home/pgras/.julia/conda/3/include/TF1.h:230:36
    t.method("Clone", static_cast<TF1::TF1FunctorPointer * (TF1::TF1FunctorPointer::*)()  const>(&TF1::TF1FunctorPointer::Clone));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TF1::TF1FunctorPointer>> type_;
};
std::shared_ptr<Wrapper> newJlTF1_TF1FunctorPointer(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTF1_TF1FunctorPointer(module));
}

namespace jlcxx {
  template<> struct IsMirroredType<TFormula> : std::false_type { };
  template<> struct DefaultConstructible<TFormula> : std::false_type { };
template<> struct SuperType<TFormula> { typedef TNamed type; };
}

// Class generating the wrapper for type TFormula
// signature to use in the veto file: TFormula
struct JlTFormula: public Wrapper {

  JlTFormula(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TFormula (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TFormula.h:86:7
    jlcxx::TypeWrapper<TFormula>  t = jlModule.add_type<TFormula>("TFormula",
      jlcxx::julia_base_type<TNamed>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TFormula>>(new jlcxx::TypeWrapper<TFormula>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TFormula>> type_;
};
std::shared_ptr<Wrapper> newJlTFormula(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTFormula(module));
}

namespace jlcxx {
  template<> struct IsMirroredType<TMethodCall> : std::false_type { };
  template<> struct DefaultConstructible<TMethodCall> : std::false_type { };
template<> struct SuperType<TMethodCall> { typedef TObject type; };
}

// Class generating the wrapper for type TMethodCall
// signature to use in the veto file: TMethodCall
struct JlTMethodCall: public Wrapper {

  JlTMethodCall(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TMethodCall (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TMethodCall.h:37:7
    jlcxx::TypeWrapper<TMethodCall>  t = jlModule.add_type<TMethodCall>("TMethodCall",
      jlcxx::julia_base_type<TObject>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TMethodCall>>(new jlcxx::TypeWrapper<TMethodCall>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TMethodCall>> type_;
};
std::shared_ptr<Wrapper> newJlTMethodCall(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTMethodCall(module));
}