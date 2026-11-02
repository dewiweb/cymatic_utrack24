// rea decompile_all
// name: FUN_00088a44
// address: 0x88a44
// body: available
// range: 0x88a44-0x88b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00088a44(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 extraout_var;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [12];
  undefined1 local_24 [4];
  undefined4 local_20;
  int local_1c [2];
  
  iVar1 = FUN_001b6806(param_2);
  if ((((iVar1 == 1) &&
       ((iVar1 = FUN_001b67dc(param_2), iVar1 == 1 || (iVar1 = FUN_001b67dc(param_2), iVar1 == 2))))
      && ((iVar1 = FUN_001b67f4(param_2), iVar1 == 1 ||
          ((iVar1 = FUN_001b67f4(param_2), iVar1 == 2 || (iVar1 = FUN_001b67f4(param_2), iVar1 == 3)
           ))))) && (iVar1 = FUN_001b6846(param_2), iVar1 == 0)) {
    iVar1 = FUN_001b67f4(param_2);
    iVar4 = param_1 + 8;
    if (iVar1 == 3) {
      FUN_00002898(DAT_00088b58);
      FUN_000d3858(iVar4);
    }
    else {
      puVar2 = (undefined4 *)FUN_001ae5e8(auStack_30,param_2);
      *puVar2 = DAT_00088b54;
      local_20 = FUN_001c0d4a(param_3);
      iVar1 = FUN_001b67dc(auStack_30);
      if (iVar1 == 1) {
        FUN_001b6c04(auStack_30);
        local_24[0] = extraout_var;
      }
      else {
        local_24[0] = 0;
      }
      iVar3 = param_1 + DAT_00088b5c;
      iVar1 = param_1 + 0x8a0;
      if (*(char *)(param_1 + 0xa48) != '\x02') {
        iVar1 = iVar3;
      }
      FUN_00233870(local_1c,iVar1,local_24);
      iVar1 = param_1 + 0x8a0;
      if (*(char *)(param_1 + 0xa48) != '\x02') {
        iVar1 = iVar3;
      }
      if (local_1c[0] == *(int *)(iVar1 + 0x10)) {
        FUN_00002898(DAT_00088b60,local_24[0]);
        FUN_000d3858(iVar4);
      }
      else {
        iVar1 = (**(code **)(**(int **)(local_1c[0] + 0x14) + 8))
                          (*(int **)(local_1c[0] + 0x14),auStack_30,local_20);
        if (iVar1 == 0) {
          FUN_00002898(DAT_00088b64);
          FUN_000d3858(iVar4);
        }
      }
      FUN_000a1c14(auStack_30);
    }
    return 0;
  }
  return 1;
}

