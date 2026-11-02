// rea decompile_all
// name: FUN_000713a0
// address: 0x713a0
// body: available
// range: 0x713a0-0x715f3 inclusive
// range: 0x71708-0x7175f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000713a0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  uint local_3c [3];
  undefined1 uStack_30;
  undefined1 auStack_2f [19];
  
  FUN_00003b88(&uStack_30,&DAT_000715f4,0x14);
  iVar1 = FUN_00003d18(*param_2,&DAT_00071608);
  if (iVar1 == 0) {
    FUN_00178f04();
    FUN_00177638();
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00003d18(*param_2,&DAT_00071610);
    if (iVar1 == 0) {
      FUN_00002898(s_____RTC_registers______00071614);
      uVar2 = FUN_00178f04();
      iVar1 = FUN_001777ec(uVar2,0,&uStack_30,0x11);
      if (iVar1 == 0) {
        FUN_00002898(s_____read_FAILED_________00071630);
      }
      for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
        FUN_00002898(s_Reg__02d___0x_02X_0007164c,uVar3,auStack_2f[uVar3]);
      }
      FUN_00002898(s________________________00071664);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_00003d18(*param_2,&DAT_00071680);
      if ((iVar1 == 0) && (param_3 == 5)) {
        iVar1 = FUN_00003d18(param_2[1],&DAT_00071684);
        if (iVar1 == 0) {
          for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
            FUN_00002fec(param_2[iVar1 + 2],&DAT_0007168c,local_3c + iVar1);
          }
          FUN_00002898(s____set_RTC_time_to__02d__02d__02_00071690,local_3c[2],local_3c[1],
                       local_3c[0]);
          uVar2 = FUN_00178f04();
          FUN_001772fc(uVar2,local_3c[0] & 0xff,local_3c[1] & 0xff,local_3c[2] & 0xff);
          return 0;
        }
        iVar1 = FUN_00003d18(param_2[1],&DAT_000716b8);
        if (iVar1 == 0) {
          for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
            FUN_00002fec(param_2[iVar1 + 2],&DAT_0007168c,local_3c + iVar1);
          }
          if (100 < (int)local_3c[2]) {
            FUN_00003e14(local_3c[2],100);
            local_3c[2] = extraout_r1;
          }
          FUN_00002898(s____set_RTC_date_to__02d__02d_20__000716c0,local_3c[0],local_3c[1],
                       local_3c[2]);
          uVar2 = FUN_00178f04();
          FUN_001772d0(uVar2,local_3c[2] & 0xff,local_3c[1] & 0xff,local_3c[0] & 0xff);
          return 0;
        }
      }
      iVar1 = FUN_00003d18(*param_2,&DAT_00071684);
      if (iVar1 == 0) {
        uVar2 = FUN_00178f04();
        FUN_00176e40(uVar2,local_3c + 2,local_3c + 1,local_3c);
        FUN_00002898(s____RTC_time___02d__02d__02d_000716e8,local_3c[2] & 0xff,local_3c[1] & 0xff,
                     local_3c[0] & 0xff);
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_00003d18(*param_2,&DAT_000716b8);
        if (iVar1 == 0) {
          uVar2 = FUN_00178f04();
          FUN_00176e14(uVar2,local_3c + 2,local_3c + 1,local_3c);
          FUN_00002898(s____RTC_date___02d__02d_20_02d_00071760,local_3c[0] & 0xff,
                       local_3c[1] & 0xff,local_3c[2] & 0xff);
          uVar2 = 0;
        }
        else {
          uVar2 = 6;
        }
      }
    }
  }
  return uVar2;
}

