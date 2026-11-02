// rea decompile_all
// name: FUN_000ea530
// address: 0xea530
// body: available
// range: 0xea530-0xea5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000ea530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_2c [4];
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar1 = FUN_001c0d74(param_3);
  if (iVar1 == 0) {
    iVar1 = DAT_000ea5fc + -0xa4;
  }
  else {
    iVar2 = param_1 + 0x104;
    FUN_00122318(iVar2,param_3);
    iVar1 = FUN_001c0d74(iVar2);
    if (iVar1 == 0) {
      iVar1 = DAT_000ea5fc + -0x58;
    }
    else {
      local_28 = param_1 + 0x14;
      FUN_001b91a8(auStack_2c);
      uVar3 = FUN_001b3cc0(auStack_2c);
      iVar4 = FUN_001ae444(iVar2,uVar3);
      FUN_00079844(auStack_2c);
      iVar1 = DAT_000ea5fc;
      if (iVar4 == 1) {
        FUN_001b91a8(auStack_2c,local_28);
        uVar3 = FUN_001b3cb0(auStack_2c);
        iVar1 = FUN_001ae468(iVar2,uVar3);
        FUN_00079844(auStack_2c);
        if (iVar1 == 1) {
          iVar1 = FUN_00122268(iVar2,local_20);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x114) = param_4;
            if (*(char *)(param_1 + 0x11d) != '\0') {
              for (uVar6 = 0; uVar5 = FUN_001baaba(iVar2), uVar6 < uVar5; uVar6 = uVar6 + 1) {
                FUN_001baaba(iVar2);
              }
            }
            return 1;
          }
          iVar1 = DAT_000ea5fc + 0xa4;
        }
        else {
          iVar1 = DAT_000ea5fc + 0x50;
        }
      }
    }
  }
  FUN_00002898(iVar1);
  return 0;
}

