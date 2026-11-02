// rea decompile_all
// name: FUN_00071d70
// address: 0x71d70
// body: available
// range: 0x71d70-0x71e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00071d70(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_0006f700(param_1,param_2,0,param_7,param_8,param_9,param_10,param_11);
  *puVar2 = DAT_00071e88;
  iVar3 = FUN_001ad814(puVar2 + 0x30);
  iVar4 = FUN_00003738(param_2);
  iVar5 = FUN_001f01c4(iVar4 + 7,1);
  FUN_000036d4(iVar5,param_2);
  FUN_000039e0(iVar5 + iVar4,DAT_00071e8c,7);
  if (param_6 == 0xffff) {
    param_6 = FUN_001eed14();
  }
  iVar4 = FUN_001ad784(iVar3,param_4,param_5,param_6 & 0xff,iVar5);
  if (((iVar4 != 0) && (FUN_001eecc8(iVar5), param_3 != 0)) &&
     (cVar1 = *(char *)(iVar3 + -4), cVar1 == '\x01' || cVar1 == '\x04')) {
    *(undefined1 *)(iVar3 + -4) = 3;
    iVar4 = FUN_001d003c(iVar3 + -0xbc);
    if (iVar4 != 0) {
      *(char *)(iVar3 + -4) = cVar1;
      *(undefined1 *)(iVar3 + -3) = 1;
    }
  }
  return iVar3 + -0xc0;
}

