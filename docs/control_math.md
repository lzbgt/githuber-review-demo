# Motor Control Mathematics

These synthetic equations demonstrate inline and display LaTeX rendering without any network font requests.

The electrical model is \(v(t)=R i(t)+L\frac{di(t)}{dt}\). Angular speed is \(\omega=2\pi f\).

## DC motor dynamics

$$
J\frac{d\omega(t)}{dt} = K_t i(t) - B\omega(t)-\tau_L(t)
$$

## Discrete PI velocity control

$$
u[k]=K_p e[k] + K_i T_s\sum_{j=0}^{k}e[j]
$$

## State-space

$$
\dot{\mathbf{x}}=A\mathbf{x}+B\mathbf{u}
$$

See the [sensor fusion flowchart](architecture.md) or [local HTML preview](index.html).