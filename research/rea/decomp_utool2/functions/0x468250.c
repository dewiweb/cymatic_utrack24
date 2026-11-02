// rea decompile_all
// name: FUN_00468250
// address: 0x468250
// body: available
// range: 0x468250-0x4682ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00468250(void)

{
  int *piVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0061f490();
  FUN_00470030();
  uVar2 = extraout_ECX;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    uVar2 = extraout_ECX_00;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  local_18 = &DAT_00bfe12c;
  local_14 = &DAT_00bfe12c;
  local_10 = 0;
  local_c = 0;
  FUN_0046cc80(uVar2,&local_18,uVar2);
  FUN_00468920();
  FUN_00637f30();
  piVar1 = (int *)(in_ECX + 0x14);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    SetEvent(*(HANDLE *)(in_ECX + 0xc));
  }
  LOCK();
  uVar2 = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 8) = 0;
  UNLOCK();
  return uVar2;
}

