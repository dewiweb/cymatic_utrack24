// rea decompile_all
// name: FUN_000c899c
// address: 0xc899c
// body: available
// range: 0xc899c-0xc8acb inclusive
// range: 0x15cba0-0x15cba7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000c899c(int param_1)

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
    puVar1 = (undefined4 *)FUN_0008b800(auStack_3c);
    *puVar1 = _DAT_000c8acc;
    uVar2 = FUN_0008cf78();
    iVar3 = FUN_0008ce54(uVar2,s_0__SystemDataService_000c8acd + 3,auStack_3c);
    if (iVar3 == 0) {
      FUN_000028a4(DAT_000c8afc);
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 1;
      FUN_000e1e34(auStack_48);
      local_50 = 0;
      uStack_4c = 0;
      uVar2 = FUN_0014f7cc(auStack_30,*_DAT_000c8ae4);
      (**(code **)(*local_34 + 0x20))(local_34,uVar2,auStack_48);
      FUN_0014f868(auStack_30);
      FUN_001b98a8(&local_50);
      iVar3 = FUN_0015cba8(auStack_48);
      if (iVar3 == 0) {
        FUN_000028a4(DAT_000c8af8);
      }
      else {
        local_58 = 0;
        uStack_54 = 0;
        uVar2 = FUN_0014f7cc(auStack_20,s____FlashPartition_000c8ae5 + 3,&local_58);
        iVar3 = FUN_000e1aac(auStack_48,uVar2);
        FUN_0014f868(auStack_20);
        FUN_001b98a8(&local_58);
        if (iVar3 != 0) {
          FUN_000e1e54(param_1 + 4,auStack_48);
        }
      }
      FUN_000e1e40(auStack_48);
    }
    FUN_0008b818(auStack_3c);
  }
  return *(int *)(param_1 + 4) != 0;
}

