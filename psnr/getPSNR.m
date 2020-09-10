origin = imread('.\sample_640x426.pgm');
dec_img = imread('.\sample_640x426_50.jpg');
%enc_img = imread('.\lena_gray_256_50.ppm');
psnr_ori_dec = psnr(origin, dec_img)

%psnr_ori_enc = psnr(origin, enc_img);