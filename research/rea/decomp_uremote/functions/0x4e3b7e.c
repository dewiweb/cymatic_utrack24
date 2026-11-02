// rea decompile_all
// name: FUN_004e3b7e
// address: 0x4e3b7e
// body: available
// range: 0x4e3b7e-0x4e3bc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 * FUN_004e3b7e(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *unaff_EDI;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  undefined4 *puVar5;
  
  uStack_4 = 0;
  puVar4 = auStack_20;
  iVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  if (0 < unaff_EDI[2]) {
    do {
      pcVar1 = *(code **)(**(int **)(*unaff_EDI + iVar3 * 4) + 0x10);
      puVar5 = (undefined4 *)(puVar4 + -4);
      puVar4 = puVar4 + -4;
      *puVar5 = 0x4e3bb0;
      uVar2 = (*pcVar1)();
      *(undefined4 *)(puVar4 + -4) = uVar2;
      *(undefined4 *)(puVar4 + -8) = 0x4e3bb6;
      FUN_004f6e80();
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI[2]);
  }
  *(undefined4 *)(puVar4 + -4) = 0x4e3bc3;
  return param_1;
}

