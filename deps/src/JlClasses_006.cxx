// this file was auto-generated by wrapit v1.3.2
#include "Wrapper.h"

#include "jlROOT.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<ROOT::TIOFeatures> : std::false_type { };
  template<> struct DefaultConstructible<ROOT::TIOFeatures> : std::false_type { };
}

// Class generating the wrapper for type ROOT::TIOFeatures
// signature to use in the veto file: ROOT::TIOFeatures
struct JlROOT_TIOFeatures: public Wrapper {

  JlROOT_TIOFeatures(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type ROOT::TIOFeatures (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/ROOT/TIOFeatures.hxx:69:7
    jlcxx::TypeWrapper<ROOT::TIOFeatures>  t = jlModule.add_type<ROOT::TIOFeatures>("ROOT!TIOFeatures");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<ROOT::TIOFeatures>>(new jlcxx::TypeWrapper<ROOT::TIOFeatures>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/true);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<ROOT::TIOFeatures>> type_;
};
std::shared_ptr<Wrapper> newJlROOT_TIOFeatures(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlROOT_TIOFeatures(module));
}

namespace jlcxx {
  template<> struct IsMirroredType<TIterator> : std::false_type { };
  template<> struct DefaultConstructible<TIterator> : std::false_type { };
}

// Class generating the wrapper for type TIterator
// signature to use in the veto file: TIterator
struct JlTIterator: public Wrapper {

  JlTIterator(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TIterator (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TIterator.h:30:7
    jlcxx::TypeWrapper<TIterator>  t = jlModule.add_type<TIterator>("TIterator");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TIterator>>(new jlcxx::TypeWrapper<TIterator>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TIterator>> type_;
};
std::shared_ptr<Wrapper> newJlTIterator(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTIterator(module));
}

namespace jlcxx {
  template<> struct IsMirroredType<TVirtualTreePlayer> : std::false_type { };
  template<> struct DefaultConstructible<TVirtualTreePlayer> : std::false_type { };
template<> struct SuperType<TVirtualTreePlayer> { typedef TObject type; };
}

// Class generating the wrapper for type TVirtualTreePlayer
// signature to use in the veto file: TVirtualTreePlayer
struct JlTVirtualTreePlayer: public Wrapper {

  JlTVirtualTreePlayer(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TVirtualTreePlayer (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TVirtualTreePlayer.h:38:7
    jlcxx::TypeWrapper<TVirtualTreePlayer>  t = jlModule.add_type<TVirtualTreePlayer>("TVirtualTreePlayer",
      jlcxx::julia_base_type<TObject>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TVirtualTreePlayer>>(new jlcxx::TypeWrapper<TVirtualTreePlayer>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TVirtualTreePlayer>> type_;
};
std::shared_ptr<Wrapper> newJlTVirtualTreePlayer(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTVirtualTreePlayer(module));
}

namespace jlcxx {
  template<> struct IsMirroredType<TTreeFriendLeafIter> : std::false_type { };
  template<> struct DefaultConstructible<TTreeFriendLeafIter> : std::false_type { };
template<> struct SuperType<TTreeFriendLeafIter> { typedef TIterator type; };
}

// Class generating the wrapper for type TTreeFriendLeafIter
// signature to use in the veto file: TTreeFriendLeafIter
struct JlTTreeFriendLeafIter: public Wrapper {

  JlTTreeFriendLeafIter(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TTreeFriendLeafIter (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:670:7
    jlcxx::TypeWrapper<TTreeFriendLeafIter>  t = jlModule.add_type<TTreeFriendLeafIter>("TTreeFriendLeafIter",
      jlcxx::julia_base_type<TIterator>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<TTreeFriendLeafIter>>(new jlcxx::TypeWrapper<TTreeFriendLeafIter>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;


    DEBUG_MSG("Adding wrapper for void TTreeFriendLeafIter::TTreeFriendLeafIter(const TTree *, Bool_t) (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:682:4
    t.constructor<const TTree *>(/*finalize=*/true);
    t.constructor<const TTree *, Bool_t>(/*finalize=*/true);


    DEBUG_MSG("Adding wrapper for void TTreeFriendLeafIter::TTreeFriendLeafIter(const TTreeFriendLeafIter &) (" __HERE__ ")");
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:683:4
    t.constructor<const TTreeFriendLeafIter &>(/*finalize=*/true);

    DEBUG_MSG("Adding wrapper for TIterator & TTreeFriendLeafIter::operator=(const TIterator &) (" __HERE__ ")");
    // signature to use in the veto list: TIterator & TTreeFriendLeafIter::operator=(const TIterator &)
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:685:15
    t.method("assign", static_cast<TIterator & (TTreeFriendLeafIter::*)(const TIterator &) >(&TTreeFriendLeafIter::operator=));

    DEBUG_MSG("Adding wrapper for TTreeFriendLeafIter & TTreeFriendLeafIter::operator=(const TTreeFriendLeafIter &) (" __HERE__ ")");
    // signature to use in the veto list: TTreeFriendLeafIter & TTreeFriendLeafIter::operator=(const TTreeFriendLeafIter &)
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:686:25
    t.method("assign", static_cast<TTreeFriendLeafIter & (TTreeFriendLeafIter::*)(const TTreeFriendLeafIter &) >(&TTreeFriendLeafIter::operator=));

    DEBUG_MSG("Adding wrapper for const TCollection * TTreeFriendLeafIter::GetCollection() (" __HERE__ ")");
    // signature to use in the veto list: const TCollection * TTreeFriendLeafIter::GetCollection()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:688:23
    t.method("GetCollection", static_cast<const TCollection * (TTreeFriendLeafIter::*)()  const>(&TTreeFriendLeafIter::GetCollection));

    DEBUG_MSG("Adding wrapper for Option_t * TTreeFriendLeafIter::GetOption() (" __HERE__ ")");
    // signature to use in the veto list: Option_t * TTreeFriendLeafIter::GetOption()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:689:23
    t.method("GetOption", static_cast<Option_t * (TTreeFriendLeafIter::*)()  const>(&TTreeFriendLeafIter::GetOption));

    DEBUG_MSG("Adding wrapper for TObject * TTreeFriendLeafIter::Next() (" __HERE__ ")");
    // signature to use in the veto list: TObject * TTreeFriendLeafIter::Next()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:690:23
    t.method("Next", static_cast<TObject * (TTreeFriendLeafIter::*)() >(&TTreeFriendLeafIter::Next));

    DEBUG_MSG("Adding wrapper for void TTreeFriendLeafIter::Reset() (" __HERE__ ")");
    // signature to use in the veto list: void TTreeFriendLeafIter::Reset()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:691:23
    t.method("Reset", static_cast<void (TTreeFriendLeafIter::*)() >(&TTreeFriendLeafIter::Reset));
    module_.set_override_module(jl_base_module);

    DEBUG_MSG("Adding wrapper for Bool_t TTreeFriendLeafIter::operator!=(const TIterator &) (" __HERE__ ")");
    // signature to use in the veto list: Bool_t TTreeFriendLeafIter::operator!=(const TIterator &)
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:692:11
    t.method("!=", static_cast<Bool_t (TTreeFriendLeafIter::*)(const TIterator &)  const>(&TTreeFriendLeafIter::operator!=));

    DEBUG_MSG("Adding wrapper for Bool_t TTreeFriendLeafIter::operator!=(const TTreeFriendLeafIter &) (" __HERE__ ")");
    // signature to use in the veto list: Bool_t TTreeFriendLeafIter::operator!=(const TTreeFriendLeafIter &)
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:696:11
    t.method("!=", static_cast<Bool_t (TTreeFriendLeafIter::*)(const TTreeFriendLeafIter &)  const>(&TTreeFriendLeafIter::operator!=));

    DEBUG_MSG("Adding wrapper for TObject * TTreeFriendLeafIter::operator*() (" __HERE__ ")");
    // signature to use in the veto list: TObject * TTreeFriendLeafIter::operator*()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:700:13
    t.method("getindex", static_cast<TObject * (TTreeFriendLeafIter::*)()  const>(&TTreeFriendLeafIter::operator*));

    module_.unset_override_module();

    DEBUG_MSG("Adding wrapper for Version_t TTreeFriendLeafIter::Class_Version() (" __HERE__ ")");
    // signature to use in the veto list: Version_t TTreeFriendLeafIter::Class_Version()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!Class_Version", static_cast<Version_t (*)() >(&TTreeFriendLeafIter::Class_Version));

    DEBUG_MSG("Adding wrapper for TClass * TTreeFriendLeafIter::IsA() (" __HERE__ ")");
    // signature to use in the veto list: TClass * TTreeFriendLeafIter::IsA()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    t.method("IsA", static_cast<TClass * (TTreeFriendLeafIter::*)()  const>(&TTreeFriendLeafIter::IsA));

    DEBUG_MSG("Adding wrapper for void TTreeFriendLeafIter::StreamerNVirtual(TBuffer &) (" __HERE__ ")");
    // signature to use in the veto list: void TTreeFriendLeafIter::StreamerNVirtual(TBuffer &)
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    t.method("StreamerNVirtual", static_cast<void (TTreeFriendLeafIter::*)(TBuffer &) >(&TTreeFriendLeafIter::StreamerNVirtual));

    DEBUG_MSG("Adding wrapper for const char * TTreeFriendLeafIter::DeclFileName() (" __HERE__ ")");
    // signature to use in the veto list: const char * TTreeFriendLeafIter::DeclFileName()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!DeclFileName", []() { return (std::string)TTreeFriendLeafIter::DeclFileName(); });

    DEBUG_MSG("Adding wrapper for int TTreeFriendLeafIter::ImplFileLine() (" __HERE__ ")");
    // signature to use in the veto list: int TTreeFriendLeafIter::ImplFileLine()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!ImplFileLine", static_cast<int (*)() >(&TTreeFriendLeafIter::ImplFileLine));

    DEBUG_MSG("Adding wrapper for const char * TTreeFriendLeafIter::ImplFileName() (" __HERE__ ")");
    // signature to use in the veto list: const char * TTreeFriendLeafIter::ImplFileName()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!ImplFileName", []() { return (std::string)TTreeFriendLeafIter::ImplFileName(); });

    DEBUG_MSG("Adding wrapper for const char * TTreeFriendLeafIter::Class_Name() (" __HERE__ ")");
    // signature to use in the veto list: const char * TTreeFriendLeafIter::Class_Name()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!Class_Name", []() { return (std::string)TTreeFriendLeafIter::Class_Name(); });

    DEBUG_MSG("Adding wrapper for TClass * TTreeFriendLeafIter::Dictionary() (" __HERE__ ")");
    // signature to use in the veto list: TClass * TTreeFriendLeafIter::Dictionary()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!Dictionary", static_cast<TClass * (*)() >(&TTreeFriendLeafIter::Dictionary));

    DEBUG_MSG("Adding wrapper for TClass * TTreeFriendLeafIter::Class() (" __HERE__ ")");
    // signature to use in the veto list: TClass * TTreeFriendLeafIter::Class()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!Class", static_cast<TClass * (*)() >(&TTreeFriendLeafIter::Class));

    DEBUG_MSG("Adding wrapper for void TTreeFriendLeafIter::Streamer(TBuffer &) (" __HERE__ ")");
    // signature to use in the veto list: void TTreeFriendLeafIter::Streamer(TBuffer &)
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    t.method("Streamer", static_cast<void (TTreeFriendLeafIter::*)(TBuffer &) >(&TTreeFriendLeafIter::Streamer));

    DEBUG_MSG("Adding wrapper for int TTreeFriendLeafIter::DeclFileLine() (" __HERE__ ")");
    // signature to use in the veto list: int TTreeFriendLeafIter::DeclFileLine()
    // defined in /home/pgras/.julia/conda/3/include/TTree.h:704:4
    module_.method("TTreeFriendLeafIter!DeclFileLine", static_cast<int (*)() >(&TTreeFriendLeafIter::DeclFileLine));
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<TTreeFriendLeafIter>> type_;
};
std::shared_ptr<Wrapper> newJlTTreeFriendLeafIter(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTTreeFriendLeafIter(module));
}

namespace jlcxx {

  template<typename T>
  struct BuildParameterList<TBranchPtr<T>>
  {
    typedef ParameterList<T> type;
  };

  template<typename T> struct IsMirroredType<TBranchPtr<T>> : std::false_type { };
  template<typename T> struct DefaultConstructible<TBranchPtr<T>> : std::false_type { };
}

// Class generating the wrapper for type TBranchPtr
// signature to use in the veto file: TBranchPtr
struct JlTBranchPtr: public Wrapper {

  JlTBranchPtr(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type TBranchPtr (" __HERE__ ")");
    // defined in src/TBranchPtr.h:13:7
    jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>>>  t =  jlModule.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("TBranchPtr");
    type_ = std::unique_ptr<jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>>>>(new jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>>>(jlModule, t));
    auto t35_decl_methods = [this]<typename T> (jlcxx::TypeWrapper<TBranchPtr<T>> wrapped){
      auto module_ = this->module_;
      typedef TBranchPtr<T> WrappedType;


      DEBUG_MSG("Adding wrapper for void TBranchPtr::TBranchPtr<T>(TBranch *) (" __HERE__ ")");
      // defined in src/TBranchPtr.h:17:3
      wrapped.template constructor<TBranch *>(/*finalize=*/true);

      DEBUG_MSG("Adding wrapper for TBranch * TBranchPtr::operator->() (" __HERE__ ")");
      // signature to use in the veto list: TBranch * TBranchPtr::operator->()
      // defined in src/TBranchPtr.h:19:12
      wrapped.method("arrow", static_cast<TBranch * (WrappedType::*)()  const>(&WrappedType::operator->));
      module_.set_override_module(jl_base_module);

      DEBUG_MSG("Adding wrapper for TBranch & TBranchPtr::operator*() (" __HERE__ ")");
      // signature to use in the veto list: TBranch & TBranchPtr::operator*()
      // defined in src/TBranchPtr.h:20:12
      wrapped.method("getindex", static_cast<TBranch & (WrappedType::*)()  const>(&WrappedType::operator*));

      module_.unset_override_module();
    };
    t.apply<TBranchPtr<std::vector<double>>, TBranchPtr<std::vector<float>>, TBranchPtr<std::vector<unsigned long>>, TBranchPtr<std::vector<long>>, TBranchPtr<std::vector<unsigned int>>, TBranchPtr<std::vector<int>>, TBranchPtr<std::vector<unsigned short>>, TBranchPtr<std::vector<short>>, TBranchPtr<std::vector<unsigned char>>, TBranchPtr<std::vector<char>>, TBranchPtr<double>, TBranchPtr<float>, TBranchPtr<unsigned long>, TBranchPtr<long>, TBranchPtr<unsigned int>, TBranchPtr<int>, TBranchPtr<unsigned short>, TBranchPtr<short>, TBranchPtr<unsigned char>, TBranchPtr<char>>(t35_decl_methods);
  }

  void add_methods() const{
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<jlcxx::Parametric<jlcxx::TypeVar<1>>>> type_;
};
std::shared_ptr<Wrapper> newJlTBranchPtr(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlTBranchPtr(module));
}
