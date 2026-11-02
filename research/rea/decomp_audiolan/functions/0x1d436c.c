// rea decompile_all
// name: FUN_001d436c
// address: 0x1d436c
// body: available
// range: 0x1d436c-0x1d444f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d4388 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_001d436c(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  if ((param_2 == (char *)0x0) || (param_1[3] != 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  cVar1 = *param_2;
  pcVar5 = param_2;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  puVar6 = (undefined4 *)*param_1;
  if ((param_1[1] & 0x7ffffffU) != 0) {
    do {
      if ((puVar6[1] == (int)pcVar5 - (int)param_2) &&
         (iVar4 = FUN_0000339c(*puVar6,param_2,(int)pcVar5 - (int)param_2), iVar4 == 0)) {
        if (puVar6 != (undefined4 *)0x0) {
          return puVar6 + 4;
        }
        break;
      }
      puVar6 = puVar6 + 8;
    } while ((undefined4 *)(*param_1 + param_1[1] * 0x20) != puVar6);
  }
  if (((*DAT_001d4450 & 1) == 0) &&
     (iVar4 = FUN_0016ddfa(DAT_001d4450), uVar3 = DAT_001d445c, uVar2 = DAT_001d4458,
     puVar6 = DAT_001d4454, iVar4 != 0)) {
    DAT_001d4454[3] = 0;
    FUN_0016dd44(puVar6,uVar3,uVar2);
  }
  return DAT_001d4454;
}

