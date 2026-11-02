// rea decompile_all
// name: FUN_00692320
// address: 0x692320
// body: available
// range: 0x692320-0x692463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00692320(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  int in_EDX;
  undefined4 uVar2;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721abb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_EDX == -1) {
    uVar2 = 0x114;
    puVar1 = operator_new(0x114);
    local_14 = &DAT_00bfe12c;
    local_8 = 1;
    FUN_00692a10(0xffffffff,&local_14,uVar2);
    *(byte *)(puVar1 + 0x1a) = *(byte *)(puVar1 + 0x1a) & 0xdf;
    *puVar1 = juce::Toolbar::Spacer::vftable;
    puVar1[0x1c] = juce::Toolbar::Spacer::vftable;
    puVar1[0x43] = 0x3dcccccd;
    *(undefined1 *)(puVar1 + 0x44) = 1;
    ExceptionList = local_10;
    return puVar1;
  }
  if (in_EDX == -2) {
    uVar2 = 0x114;
    puVar1 = operator_new(0x114);
    local_14 = &DAT_00bfe12c;
    local_8 = 3;
    FUN_00692a10(0xfffffffe,&local_14,uVar2);
    *(byte *)(puVar1 + 0x1a) = *(byte *)(puVar1 + 0x1a) & 0xdf;
    *puVar1 = juce::Toolbar::Spacer::vftable;
    puVar1[0x1c] = juce::Toolbar::Spacer::vftable;
    puVar1[0x43] = 0x3f000000;
    *(undefined1 *)(puVar1 + 0x44) = 0;
    ExceptionList = local_10;
    return puVar1;
  }
  if (in_EDX == -3) {
    operator_new(0x114);
    local_8 = 4;
    puVar1 = (undefined4 *)FUN_004a2930(0xfffffffd,0);
    ExceptionList = local_10;
    return puVar1;
  }
  puVar1 = (undefined4 *)(**(code **)(*in_ECX + 0xc))();
  ExceptionList = local_10;
  return puVar1;
}

