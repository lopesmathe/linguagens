import javazoom.jl.decoder.JavaLayerException;
import javazoom.jl.player.advanced.AdvancedPlayer;

import java.io.FileInputStream;
import java.io.FileNotFoundException;

public class Ggizi {
    public static void main(String[] args) {
        try {
            // Carrega o arquivo de áudio MP3
            FileInputStream fileInputStream = new FileInputStream("C:\\Users\\Matheus\\Desktop\\repositorios\\linguagens\\java\\Baka\\Edge of Darkness.mp3");
            AdvancedPlayer player = new AdvancedPlayer(fileInputStream);

            // Inicia a reprodução em uma nova thread para evitar bloqueios
            Thread playerThread = new Thread(() -> {
                try {
                    player.play();
                } catch (JavaLayerException e) {
                    e.printStackTrace();
                }
            });
            playerThread.start();

            // Aguarda até que a reprodução termine
            playerThread.join();

            // Fecha o FileInputStream e libera recursos
            fileInputStream.close();
        } catch (FileNotFoundException | JavaLayerException | InterruptedException e) {
            e.printStackTrace();
        }
    }
}
