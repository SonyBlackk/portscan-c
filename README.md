# Portscan-C
- Esse código foi desenvolvido durante o curso "Pentest do Zero ao Profissional V2024" pela Solyd Offensive Security. Apesar de simples, ele funciona como esperado, retornando as portas abertas em um determinado endereço IP.
# Como funciona ?
- Para executar o programa, basta digitar seu nome seguido do endereço IP desejado. Exemplo: ./portscan 127.0.0.1
# Qual a utilidade ?
- Apesar de já existirem diversos softwares que realizam o mesmo serviço, e de formas muito melhores, como o Nmap, nem sempre eles estarão disponíveis para uso em servidores invadidos. Nessas situações, é necessário criar seu próprio código para essa finalidade, e o programa se torna muito útil, pois pode ser programado diretamente no ambiente Linux.
# Aviso
- O código utiliza o protocolo TCP para realizar a verificação, estabelecendo uma conexão com o host. Apesar de confiável, esse protocolo não é seguro para pentesters, pois ao estabelecer a conexão, ele acaba deixando seu IP registrado no host.
