// rea decompile_all
// name: FUN_000f693c
// address: 0xf693c
// body: available
// range: 0xf693c-0xf6b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f693c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_94 [104];
  undefined1 auStack_2c [16];
  
  iVar1 = FUN_0022f0b0(param_1 + 0x123);
  if (iVar1 == 0) {
    iVar1 = FUN_00002898(DAT_000f6b40);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1,1);
    iVar1 = FUN_000f7f20(param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_000f8678(param_1,param_2);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*param_1 + 0x60))(param_1,1,param_2);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            FUN_00122450(param_1 + 0x109,param_2);
            uVar3 = FUN_0012246c(param_1 + 0x109);
            FUN_000989c8(uVar3,param_2);
            FUN_0012e10c(auStack_2c);
            FUN_000b0e64(param_1,auStack_2c,6,param_2);
            FUN_001223b4(auStack_94,param_1 + 0x109,auStack_2c,0);
            uVar3 = FUN_0022f0bc(param_1 + 0x123);
            iVar1 = FUN_000b04a4(param_1,uVar3,auStack_94);
            if (iVar1 == 0) {
              FUN_00002898(_DAT_000f6b44);
              FUN_00122404(auStack_94);
              iVar1 = FUN_0012e13c(auStack_2c);
            }
            else {
              iVar1 = FUN_000f717c(param_1);
              if (iVar1 == 0) {
                FUN_00002898(s___ERROR__DSPAppControl_Custom__s_000f6b46 + 2);
              }
              FUN_00002898(s__________________________________000f6b88);
              FUN_00002898(s_>>_setSampleRate__sample_set_rat_000f6bb4,param_2);
              FUN_00002898(s__________________________________000f6b88);
              piVar4 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
              uVar3 = FUN_0004e2ec(param_2);
              (**(code **)(*piVar4 + 0x18))(piVar4,uVar3);
              FUN_000f8b80(param_1,uVar2);
              piVar4 = (int *)FUN_000dfcb0();
              (**(code **)(*piVar4 + 0x34))(piVar4,param_2);
              FUN_00122404(auStack_94);
              iVar1 = FUN_0012e13c(auStack_2c);
            }
          }
        }
      }
    }
  }
  return iVar1;
}

