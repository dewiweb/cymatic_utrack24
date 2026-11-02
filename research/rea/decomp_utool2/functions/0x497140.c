// rea decompile_all
// name: FUN_00497140
// address: 0x497140
// body: available
// range: 0x497140-0x497279 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00497140(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd610;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::PopupMenu::HelperClasses::MenuWindow::vftable;
  puVar4 = in_ECX;
  FUN_00497ab0();
  FUN_00415ff0(puVar4);
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960(uVar3);
  }
  FUN_00415ff0(in_ECX);
  FUN_006cb130();
  puVar4 = (undefined4 *)in_ECX[0x37];
  if (puVar4 != (undefined4 *)0x0) {
    in_ECX[0x37] = 0;
    (**(code **)*puVar4)(1);
  }
  FUN_00407fe0();
  if (in_ECX[0x28] != 0) {
    FID_conflict__free((void *)in_ECX[0x27]);
    in_ECX[0x27] = 0;
    in_ECX[0x28] = 0;
  }
  in_ECX[0x29] = 0;
  FUN_00407640();
  FID_conflict__free((void *)in_ECX[0x38]);
  if ((undefined4 *)in_ECX[0x37] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x37])(1);
  }
  puVar4 = (undefined4 *)in_ECX[0x36];
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  puVar4 = (undefined4 *)in_ECX[0x2b];
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  FUN_00407640();
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

