// rea decompile_all
// name: FUN_000f48a8
// address: 0xf48a8
// body: available
// range: 0xf48a8-0xf4a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f48a8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  
  FUN_00203e2c(auStack_28);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s_AudioHWService_000f4a6c,auStack_28);
  if (iVar2 == 0) {
    FUN_00002898(DAT_000f4a7c);
    FUN_000d04f8(auStack_28);
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_0022bc60(auStack_28);
    iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,8,9);
    param_1[0x47] = iVar2;
    if (param_1[0x47] == 0) {
      FUN_00002898(DAT_000f4a80);
      FUN_000d04f8(auStack_28);
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_000966e8(param_1[0x47],2,DAT_000f4a84,param_1);
      if (iVar2 == 0) {
        FUN_00002898(DAT_000f4a88);
        FUN_000d04f8(auStack_28);
        uVar1 = 0;
      }
      else {
        piVar3 = (int *)FUN_0022bc60(auStack_28);
        iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,8,0xc);
        param_1[0x48] = iVar2;
        if (param_1[0x48] == 0) {
          FUN_00002898(_DAT_000f4a8c);
          FUN_000d04f8(auStack_28);
          uVar1 = 0;
        }
        else {
          FUN_00203f0c(auStack_34);
          uVar1 = FUN_000b4964();
          iVar2 = FUN_000b4840(uVar1,s___USBStackService_000f4a8e + 2,auStack_34);
          if (iVar2 == 0) {
            FUN_00002898(DAT_000f4aa0);
            FUN_000d0500(auStack_34);
            FUN_000d04f8(auStack_28);
            uVar1 = 0;
          }
          else {
            FUN_00178f04();
            iVar2 = FUN_001bf37c();
            if (iVar2 == 0) {
              FUN_00096628(param_1[0x47]);
            }
            piVar3 = (int *)FUN_0022bc78(auStack_34);
            (**(code **)(*piVar3 + 0x34))(piVar3,param_1 + 0x45);
            uVar1 = (**(code **)(*param_1 + 8))(param_1);
            FUN_000d0500(auStack_34);
            FUN_000d04f8(auStack_28);
          }
        }
      }
    }
  }
  return uVar1;
}

