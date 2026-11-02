// rea decompile_all
// name: FUN_004f69da
// address: 0x4f69da
// body: available
// range: 0x4f69da-0x4f6a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004f69da(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  undefined4 *puVar4;
  
  uStack_4 = 0;
  puVar3 = auStack_20;
  local_8 = 0;
  while (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
    puVar1 = *(undefined4 **)(*param_1 + param_1[2] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar1;
      *(undefined4 *)(puVar3 + -4) = 1;
      pcVar2 = (code *)*puVar1;
      puVar4 = (undefined4 *)(puVar3 + -8);
      puVar3 = puVar3 + -8;
      *puVar4 = 0x4f6a06;
      (*pcVar2)();
    }
  }
  local_8 = 0xffffffff;
  *(int *)(puVar3 + -4) = *param_1;
  *(undefined4 *)(puVar3 + -8) = 0x4f6a17;
  _free(*(void **)(puVar3 + -4));
  *(undefined4 *)(puVar3 + -4) = 0x4f6a1d;
  return;
}

