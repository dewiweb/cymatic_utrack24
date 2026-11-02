// rea decompile_all
// name: FUN_0052a450
// address: 0x52a450
// body: available
// range: 0x52a450-0x52a549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a450(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c261;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = ProjectInspector::vftable;
  in_ECX[0x1c] = ProjectInspector::vftable;
  FID_conflict__free((void *)in_ECX[0x143]);
  FID_conflict__free((void *)in_ECX[0x140]);
  FUN_00407640(uVar4);
  local_8 = 0;
  in_ECX[0x5a] = ViewPortContainer::vftable;
  in_ECX[0x76] = ViewPortContainer::vftable;
  in_ECX[0x77] = ViewPortContainer::vftable;
  FUN_006e6350();
  FUN_006e9790(in_ECX[0x5e],in_ECX[0x5f],in_ECX[0x60],100);
  FUN_006ea0b0();
  FUN_006e4de0();
  FUN_006e4a60();
  puVar3 = (undefined4 *)in_ECX[0x25];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FID_conflict__free((void *)in_ECX[0x1e]);
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

