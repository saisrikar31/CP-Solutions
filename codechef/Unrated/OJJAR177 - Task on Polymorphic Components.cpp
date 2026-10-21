===FILENAME:src/Text.jsx===

function Text({
  as = 'p',
    children,
      className = '',
        ...props
        }) {
          const Element = as;

            const combinedClassName = [
                'text',
                    `text--${as}`,
                        className
                          ]
                              .filter(Boolean)
                                  .join(' ');

                                    return (
                                        <Element className={combinedClassName} {...props}>
                                              {children}
                                                  </Element>
                                                    );
                                                    }

                                                    export default Text;
                                                    