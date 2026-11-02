// rea decompile_all
// name: FUN_0068a760
// address: 0x68a760
// body: available
// range: 0x68a760-0x68a823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a760(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007211d7;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::TopLevelWindow::vftable;
  puVar1 = (undefined4 *)in_ECX[0x1d];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[0x1d] = 0;
    (**(code **)*puVar1)(1,uVar2);
  }
  if (DAT_00c8a6a8 == (undefined4 *)0x0) {
    operator_new(0x28);
    DAT_00c8a6a8 = (undefined4 *)FUN_004a4af0();
  }
  puVar1 = DAT_00c8a6a8;
  FUN_004a4bc0();
  if ((undefined4 *)puVar1[9] == in_ECX) {
    puVar1[9] = 0;
  }
  FUN_00415ff0(in_ECX);
  if ((puVar1[8] == 0) && (DAT_00c8a6a8 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*DAT_00c8a6a8;
    DAT_00c8a6a8 = (undefined4 *)0x0;
    (*(code *)*puVar1)(1);
  }
  if ((undefined4 *)in_ECX[0x1d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1d])(1);
  }
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

