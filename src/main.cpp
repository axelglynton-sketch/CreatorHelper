#include <Geode/Geode.hpp>

using namespace geode::prelude;

class CreatorHelper : public Mod {
public:
    static CreatorHelper* get() {
        static auto inst = new CreatorHelper();
        return inst;
    }
};

$on_mod(Loaded) {
    log::info("CreatorHelper loaded!");
}
