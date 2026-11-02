// rea decompile_all
// name: FUN_00061820
// address: 0x61820
// body: available
// range: 0x61820-0x6192d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00061820(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar1 = FUN_001baaba();
  pcVar4 = _DAT_00061930;
  if (uVar1 < 0xd) {
    if ((*(char *)(param_1 + 0xd) == '\b') || (*(char *)(param_1 + 0xd) == '\n')) {
      FUN_001221fa(param_1,0xb,0);
      FUN_001221fa(param_1,10,0);
      FUN_001221fa(param_1,9,0);
      uVar2 = FUN_001baaa0(param_1,4);
      FUN_001221fa(param_1,8,uVar2);
      FUN_001221fa(param_1,7,0);
      FUN_001221fa(param_1,6,0);
      uVar2 = FUN_001baaa0(param_1,3);
      FUN_001221fa(param_1,5,uVar2);
      uVar2 = FUN_001baaa0(param_1,2);
      FUN_001221fa(param_1,4,uVar2);
      uVar1 = FUN_001baaa0(param_1,1);
      FUN_001221fa(param_1,3,uVar1 & 0x1f);
      FUN_001221fa(param_1,2,0);
      uVar1 = FUN_001baaa0(param_1,1);
      FUN_001221fa(param_1,1,uVar1 & 0xffffffe0);
      uVar1 = FUN_001baaa0(param_1,0);
      FUN_001221fa(param_1,0,uVar1 | 0x20);
    }
    else {
      for (uVar1 = FUN_001baaba(param_1); uVar1 < 0xc; uVar1 = uVar1 + 1 & 0xff) {
        iVar3 = FUN_001221fa(param_1,uVar1,0);
        if (iVar3 == 0) {
          pcVar4 = _DAT_00061930 + 0x5c;
          goto LAB_00061926;
        }
      }
    }
    iVar3 = FUN_00122218(param_1,0xc);
    if (iVar3 != 0) {
      return 1;
    }
    pcVar4 = s___ERROR__SCSICommand__transformT_00061932 + 2;
  }
LAB_00061926:
  FUN_00002898(pcVar4);
  return 0;
}

