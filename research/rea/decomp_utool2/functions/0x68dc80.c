// rea decompile_all
// name: FUN_0068dc80
// address: 0x68dc80
// body: available
// range: 0x68dc80-0x68dd46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068dc80(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = DAT_00c8a67c;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00721689;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ComponentPeer::vftable;
  if (iVar4 == 0) {
    operator_new(0xd0);
    iVar4 = FUN_006cb960();
    DAT_00c8a67c = iVar4;
  }
  FUN_00415ff0(in_ECX);
  piVar6 = (int *)(*(int *)(iVar4 + 0x1c) + 0xc);
  LOCK();
  iVar5 = *piVar6;
  if (iVar5 == 0) {
    *piVar6 = 1;
    iVar5 = 0;
  }
  UNLOCK();
  if ((iVar5 == 0) && (cVar2 = FUN_0063e270(uVar3), cVar2 == '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0xc) = 0;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[9];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = puVar1 + 1;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[8];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = puVar1 + 1;
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

