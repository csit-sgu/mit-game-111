bool CheckFinish(Object& player, Scene& scene){
    for (auto& object : scene) {
        if (object.finish.enabled && CheckCollision(player, object).exists) {
                return true;
        }
    }
    return false;
}