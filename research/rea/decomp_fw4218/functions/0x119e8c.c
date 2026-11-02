// rea decompile_all
// name: FUN_00119e8c
// address: 0x119e8c
// body: available
// range: 0x119e8c-0x119fbb inclusive
// range: 0x1bc464-0x1bc46b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00119e8c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [8];
  int *local_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    puVar1 = (undefined4 *)FUN_000b1210(auStack_3c);
    *puVar1 = _DAT_00119fbc;
    uVar2 = FUN_000b4964();
    iVar3 = FUN_000b4840(uVar2,s___SystemDataService_00119fbe + 2,auStack_3c);
    if (iVar3 == 0) {
      FUN_00002898(DAT_00119fec);
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 1;
      FUN_0013879c(auStack_48);
      local_50 = 0;
      uStack_4c = 0;
      uVar2 = FUN_001aaf10(auStack_30,*_DAT_00119fd4);
      (**(code **)(*local_34 + 0x20))(local_34,uVar2,auStack_48);
      FUN_001aafac(auStack_30);
      FUN_00201f54(&local_50);
      iVar3 = FUN_001bc46c(auStack_48);
      if (iVar3 == 0) {
        FUN_00002898(DAT_00119fe8);
      }
      else {
        local_58 = 0;
        uStack_54 = 0;
        uVar2 = FUN_001aaf10(auStack_20,s____FlashPartition_00119fd5 + 3,&local_58);
        iVar3 = FUN_00138414(auStack_48,uVar2);
        FUN_001aafac(auStack_20);
        FUN_00201f54(&local_58);
        if (iVar3 != 0) {
          FUN_001387bc(param_1 + 4,auStack_48);
        }
      }
      FUN_001387a8(auStack_48);
    }
    FUN_000b1228(auStack_3c);
  }
  return *(int *)(param_1 + 4) != 0;
}

