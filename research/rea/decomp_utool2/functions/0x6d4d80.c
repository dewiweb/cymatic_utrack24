// rea decompile_all
// name: FUN_006d4d80
// address: 0x6d4d80
// body: available
// range: 0x6d4d80-0x6d4e5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d4d80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007272d2;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::DocumentWindow::vftable;
  piVar3 = in_ECX + 0x3e;
  iVar4 = 2;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      *piVar3 = 0;
      (**(code **)*puVar1)(1,uVar2);
    }
    piVar3 = piVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar1 = (undefined4 *)in_ECX[0x40];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[0x40] = 0;
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)in_ECX[0x42] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x42])(1);
  }
  if ((undefined4 *)in_ECX[0x40] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x40])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x3f];
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar1 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  _eh_vector_destructor_iterator_(in_ECX + 0x3c,4,3,FUN_00407680);
  FUN_0068bcf0();
  ExceptionList = local_10;
  return;
}

