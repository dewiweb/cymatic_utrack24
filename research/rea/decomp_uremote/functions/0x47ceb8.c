// rea decompile_all
// name: FUN_0047ceb8
// address: 0x47ceb8
// body: available
// range: 0x47ceb8-0x47cef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0047ceb8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x47cec4;
  puStack_28 = &param_1;
  uStack_24 = param_1;
  puVar2 = &uStack_2c;
  uStack_2c = 0x47ced8;
  (**(code **)(*(int *)*in_ECX + 0x6c))();
  puVar2[-1] = 0x47cedf;
  uVar1 = FUN_0049f81a();
  local_8 = 0;
  puVar2[1] = uVar1;
  *puVar2 = 0x47cee9;
  FUN_0047ceaa();
  puVar3 = (undefined1 *)((int)puVar2 + -4);
  *(undefined4 *)((int)puVar2 + -4) = 0x47cef1;
  FUN_004c4d7a();
  *(undefined4 *)(puVar3 + -4) = 0x47cef6;
  return;
}

