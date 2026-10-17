// Synthetic example for GitHuber syntax-highlighting and commit-history tests.
#include <algorithm>
#include <cmath>
#include <cstdint>

struct PIController {
    double kp{0.6};
    double ki{0.12};
    double integral{0.0};
    double output_limit{1.0};

    double step(double target_rps, double measured_rps, double dt_seconds) {
        if (dt_seconds <= 0.0 || !std::isfinite(dt_seconds)) return 0.0;
        const double error = target_rps - measured_rps;
        const double candidate = integral + error * dt_seconds;
        const double raw = kp * error + ki * candidate;
        const double clamped = std::clamp(raw, -output_limit, output_limit);
        // Conditional integration anti-windup.
        if (raw == clamped || (raw > clamped && error < 0.0) ||
            (raw < clamped && error > 0.0)) integral = candidate;
        return clamped;
    }
};

int main() {
    PIController controller{};
    double speed = 0.0;
    for (int k = 0; k < 100; ++k) {
        const double throttle = controller.step(2.0, speed, 0.01);
        speed += 0.01 * (5.0 * throttle - speed);
    }
    return speed > 0.0 ? 0 : 1;
}