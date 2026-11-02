// rea decompile_all
// name: FUN_000e55e0
// address: 0xe55e0
// body: available
// range: 0xe55e0-0xe5883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e55e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  FUN_001b5b84(auStack_24,uVar2);
  iVar3 = FUN_0022d19c(auStack_24);
  if (iVar3 != 0) {
    uVar4 = FUN_00230e4c(auStack_2c);
    uVar4 = FUN_00231ef4(auStack_28,&DAT_000e5884,uVar4);
    FUN_00095440(uVar2,uVar4);
    FUN_00232190(auStack_28);
    uVar4 = FUN_0022cefc(auStack_24,&DAT_000e5888,0xffffffff);
    FUN_0022d1b0(auStack_30,auStack_24,0,uVar4);
    FUN_0023223c(DAT_000e588c,auStack_30);
    FUN_00232190(auStack_30);
    FUN_00094f64(uVar2,1);
    iVar3 = FUN_000c0a7c(param_1 + 0x14,DAT_000e588c);
    if ((*DAT_000e5890 == '\x01') && (iVar3 == 0)) {
      *DAT_000e5890 = '\0';
      FUN_000f4e84();
      uVar4 = FUN_000f5144();
      cVar1 = FUN_001b6ec4(uVar4);
      *_DAT_000e5894 = cVar1;
      FUN_00232964(auStack_38,s____Folder_Mode__000e5895 + 3,auStack_34);
      FUN_002325c0(auStack_38,_DAT_000e58a8 + (*_DAT_000e5894 + 1) * 4);
      uVar4 = FUN_0022d49c(auStack_38);
      uVar5 = FUN_0011eda0();
      FUN_0011ff88(uVar5,s____Switching_to_Stereo_Mode_000e58a9 + 3,uVar4);
      uVar4 = FUN_0011eda0();
      FUN_000a1000(uVar4,0x1c);
      FUN_001d0130(2000);
      FUN_002329f0(auStack_38);
    }
    else if ((*DAT_000e5890 == '\0') && (iVar3 != 0)) {
      *DAT_000e5890 = '\x01';
      FUN_00232964(auStack_38,s____Folder_Mode__000e5895 + 3,auStack_34);
      FUN_002325c0(auStack_38,_DAT_000e58a8 + (*_DAT_000e5894 + 1) * 4);
      uVar4 = FUN_0022d49c(auStack_38);
      uVar5 = FUN_0011eda0();
      FUN_0011ff88(uVar5,s_Switching_to_MultiTrack_Mode_000e58c8,uVar4);
      uVar4 = FUN_0011eda0();
      FUN_000a1000(uVar4,0x1c);
      FUN_001d0130(2000);
      FUN_002329f0(auStack_38);
    }
    FUN_00092ea0(uVar2,*DAT_000e5890);
    FUN_0023223c(DAT_000e58e8,auStack_24);
    uVar4 = FUN_00230e4c(auStack_2c);
    uVar4 = FUN_00231ef4(auStack_28,&DAT_000e5884,uVar4);
    FUN_00095440(uVar2,uVar4);
    FUN_00232190(auStack_28);
    FUN_000e724c(param_1);
    FUN_000835e4(param_1 + 0x14);
    FUN_000e7750(param_1);
  }
  FUN_00232190(auStack_24);
  return;
}

