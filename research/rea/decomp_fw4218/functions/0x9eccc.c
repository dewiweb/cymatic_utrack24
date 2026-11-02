// rea decompile_all
// name: FUN_0009eccc
// address: 0x9eccc
// body: available
// range: 0x9eccc-0x9ef9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0009eccc(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5844(uVar1);
  if (iVar2 == 0) {
    FUN_001b5b84(auStack_38,uVar1);
    iVar2 = FUN_0022d19c(auStack_38);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00230e4c(&uStack_40);
      uVar3 = FUN_00231ef4(&uStack_3c,&DAT_0009efa0,uVar3);
      FUN_00095440(uVar1,uVar3);
      FUN_00232190(&uStack_3c);
      iVar2 = FUN_0008551c(param_1 + 5,auStack_38);
      uVar3 = 0;
      if (iVar2 != 0) {
        FUN_0023223c(DAT_0009efa8,auStack_38);
        *(undefined1 *)(DAT_0009efa8 + 0x88) = 1;
        FUN_00081bfc(param_1 + 5);
        *DAT_0009efb0 = *DAT_0009efac;
        uVar3 = (**(code **)(*param_1 + 0x7c))(param_1,0);
      }
    }
    if (param_2 != 0) {
      FUN_0011eda0(uVar3);
      FUN_0011f430();
    }
    FUN_001b594c(&uStack_44,uVar1);
    local_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    local_28 = uStack_44;
    uStack_24 = uStack_40;
    uStack_20 = uStack_3c;
    FUN_000bfdd4(param_1 + 5,&local_28);
    (**(code **)(param_1[5] + 0x1c))(param_1 + 5,0,0,1,0);
    uVar1 = FUN_0011eda0();
    FUN_001205a0(uVar1,&DAT_0009efa0);
    (**(code **)(param_1[5] + 0xc))
              (param_1 + 5,*(undefined2 *)(DAT_0009efb4 + 0x1a),*(undefined4 *)(DAT_0009efb4 + 0x1c)
               ,*(undefined2 *)(DAT_0009efb4 + 0x26),1);
    uVar1 = FUN_0011eda0();
    FUN_0011f310(uVar1,&DAT_0009efa0,0,1);
    uVar1 = FUN_0011eda0();
    FUN_000a0ec8(uVar1,5,0);
    uVar1 = FUN_00232190(auStack_38);
  }
  else {
    uVar3 = FUN_0011eda0();
    FUN_000a0ec8(uVar3,6,0);
    uVar3 = FUN_00230e4c(&uStack_20);
    FUN_00232050(&local_28,uVar3);
    FUN_001b5b84(&uStack_24,uVar1);
    FUN_0023223c(&local_28,&uStack_24);
    FUN_00232190(&uStack_24);
    iVar4 = 0;
    iVar2 = FUN_0022d19c(&local_28);
    if (iVar2 != 0) {
      iVar4 = FUN_00085a0c(param_1 + 5,&local_28);
      uVar3 = FUN_00230e4c(&uStack_30);
      uVar3 = FUN_00231ef4(&uStack_2c,&DAT_0009efa0,uVar3);
      FUN_00095440(uVar1,uVar3);
      FUN_00232190(&uStack_2c);
    }
    FUN_00084a18(param_1 + 5);
    FUN_00084b88(param_1 + 5,0,1);
    iVar2 = FUN_0022d19c(&local_28);
    if (iVar2 != 0) {
      FUN_00093a08(uVar1);
      uVar1 = FUN_0007ebdc();
      *DAT_0009efa4 = uVar1;
      FUN_000856e0(param_1 + 5,1);
    }
    if (iVar4 != 0) {
      FUN_0009eb80(param_1);
    }
    uVar1 = FUN_00232190(&local_28);
  }
  return uVar1;
}

