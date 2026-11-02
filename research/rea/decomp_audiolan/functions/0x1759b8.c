// rea decompile_all
// name: FUN_001759b8
// address: 0x1759b8
// body: available
// range: 0x1759b8-0x175b19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001759b8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  local_20 = 0;
  iVar1 = -2;
  if ((param_2 != 0) && ((param_3 == 0 || (*(int *)(param_3 + 0x2c) != 0)))) {
    if (((param_4 == 0) && (param_4 = FUN_00174688(param_2,param_3), param_4 == 0)) ||
       ((*(int *)(param_4 + 0x20) == 0 || (*(int *)(param_4 + 0x24) == 0)))) {
      iVar1 = -6;
    }
    else {
      iVar1 = FUN_001a4d9c(*(int *)(param_4 + 0x20),&local_20);
      if (iVar1 == 0) {
        iVar1 = FUN_001a4bdc(local_20 + 0xb0,0);
        if (((iVar1 == 0) || (*(int *)(local_20 + 0x70) == 0)) ||
           (*(int *)(*(int *)(local_20 + 0x70) + 4) == 0)) {
          FUN_001a52e0(local_20);
          return -5;
        }
        local_1c = FUN_0000317c();
        if (*(int *)(*(int *)(local_20 + 0x70) + 4) != 0) {
          if ((code *)*DAT_00175b1c == entry) {
            FUN_0018a280();
          }
          else {
            (*(code *)*DAT_00175b1c)();
          }
        }
        iVar1 = FUN_00179370(&DAT_00175b20,local_1c + 1);
        *(int *)(*(int *)(local_20 + 0x70) + 4) = iVar1;
        if (iVar1 == 0) {
          FUN_001a52e0(local_20);
          return -4;
        }
        if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 4), iVar1 != 0)) {
          *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
        }
        iVar1 = FUN_00179ab4(local_20);
        if (iVar1 != 0) {
          FUN_001a52e0(local_20);
          return iVar1;
        }
        iVar1 = *(int *)(param_4 + 0x24);
        if ((*(int *)(iVar1 + 0xc) != 0x191) && (*(int *)(iVar1 + 0xc) != 0x197)) {
          iVar1 = 0;
        }
        FUN_001712b4(param_1,local_20,iVar1);
        FUN_001a52cc(local_20);
        iVar1 = FUN_0017994c(param_1,&local_24,2,*(undefined4 *)(param_1 + 0xa4),local_20);
        if (iVar1 != 0) {
          FUN_001a52e0(local_20);
          return iVar1;
        }
        FUN_001a4a80(*(undefined4 *)(param_3 + 0x2c),local_24,0);
        uVar2 = FUN_001a688c(local_20);
        FUN_001a7804(local_24,param_2);
        FUN_001a77ee(local_24,param_3);
        FUN_001a7216(local_24,uVar2);
        FUN_001799e4(param_1);
        FUN_00179b24(param_1);
        return 0;
      }
    }
  }
  return iVar1;
}

