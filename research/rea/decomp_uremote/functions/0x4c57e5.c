// rea decompile_all
// name: FUN_004c57e5
// address: 0x4c57e5
// body: available
// range: 0x4c57e5-0x4c5870 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c57e5(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  puVar1 = &LAB_005e3152;
  if (in_ECX != 0) {
    puVar2 = (undefined4 *)FUN_005af82d(0x44);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004d0389(puVar2,in_ECX);
      *puVar2 = juce::ModalComponentManager::ModalItem::vftable;
      puVar2[0xb] = in_ECX;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 0x10) = 1;
      *(undefined1 *)((int)puVar2 + 0x41) = param_2;
      puVar3 = puVar2;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14) + 1) {
      FUN_004f8197();
    }
    puVar1 = *(undefined1 **)(param_1 + 0x14);
    *(undefined1 **)(param_1 + 0x14) = puVar1 + 1;
    *(undefined4 **)(*(int *)(param_1 + 0xc) + (int)puVar1 * 4) = puVar3;
  }
  return puVar1;
}

