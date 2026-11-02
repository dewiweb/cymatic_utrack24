// rea decompile_all
// name: FUN_000f8884
// address: 0xf8884
// body: available
// range: 0xf8884-0xf8b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f8884(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_94 [104];
  undefined1 auStack_2c [16];
  
  if (((param_3 == 0xff) || (iVar1 = FUN_001bab00(param_1 + 0x109), iVar1 == param_3)) &&
     (iVar1 = FUN_001bab30(param_1 + 0x109), iVar1 == param_2)) {
    uVar2 = 1;
  }
  else if (((param_3 == 0xff) || (iVar1 = FUN_001bab00(param_1 + 0x109), iVar1 == param_3)) &&
          (((param_2 == 1 && (iVar1 = FUN_001bab30(param_1 + 0x109), iVar1 == 2)) ||
           ((param_2 == 2 && (iVar1 = FUN_001bab30(param_1 + 0x109), iVar1 == 1)))))) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0022f0b0(param_1 + 0x123);
    if (iVar1 == 0) {
      FUN_00002898(DAT_000f8b74);
      uVar2 = 2;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x34))(param_1,1);
      iVar1 = FUN_000f7f20(param_1);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x58))(param_1,1);
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        else {
          if (param_3 != 0xff) {
            iVar1 = FUN_000f8678(param_1,param_3);
            if (iVar1 != 0) {
              return 0;
            }
            iVar1 = (**(code **)(*param_1 + 0x60))(param_1,1,param_3);
            if (iVar1 == 0) {
              return 2;
            }
            FUN_00122450(param_1 + 0x109,param_3);
            uVar3 = FUN_0012246c(param_1 + 0x109);
            FUN_000989c8(uVar3,param_3);
          }
          FUN_00122478(param_1 + 0x109,param_2);
          FUN_0012e10c(auStack_2c);
          if (param_3 != 0xff) {
            FUN_000b0e64(param_1,auStack_2c,6,param_3);
          }
          FUN_001223b4(auStack_94,param_1 + 0x109,auStack_2c,0);
          uVar3 = FUN_0022f0bc(param_1 + 0x123);
          iVar1 = FUN_000b04a4(param_1,uVar3,auStack_94);
          if (iVar1 == 0) {
            FUN_00002898(DAT_000f8b78);
            FUN_00122404(auStack_94);
            FUN_0012e13c(auStack_2c);
            uVar2 = 2;
          }
          else {
            iVar1 = FUN_000f717c(param_1);
            if (iVar1 == 0) {
              FUN_00002898(DAT_000f8b7c);
            }
            if (param_3 != 0xff) {
              piVar4 = (int *)(**(code **)(*param_1 + 0x40))(param_1);
              uVar3 = FUN_0004e2ec(param_3);
              (**(code **)(*piVar4 + 0x18))(piVar4,uVar3);
            }
            iVar1 = FUN_000f8b80(param_1,uVar2);
            if (iVar1 == 0) {
              FUN_00122404(auStack_94);
              FUN_0012e13c(auStack_2c);
              uVar2 = 2;
            }
            else {
              if (param_3 != 0xff) {
                piVar4 = (int *)FUN_000dfcb0();
                (**(code **)(*piVar4 + 0x34))(piVar4,param_3);
              }
              FUN_00122404(auStack_94);
              FUN_0012e13c(auStack_2c);
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  return uVar2;
}

