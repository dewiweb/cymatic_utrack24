// rea decompile_all
// name: FUN_006ee990
// address: 0x6ee990
// body: available
// range: 0x6ee990-0x6eea45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_006ee990(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 auStackY_100 [204];
  undefined4 uStackY_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007293f3;
  local_10 = ExceptionList;
  if (*(char *)(in_ECX + 0xa4) != '\0') {
    return auStackY_100;
  }
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0xa7) = 1;
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x7c);
  *(undefined1 *)(iVar2 + 0x60) = 1;
  piVar1 = (int *)(iVar2 + 0x4c);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = (int)&DAT_00bfe12c;
  UNLOCK();
  piVar1 = (int *)(iVar2 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      uStackY_34 = 0x6eea1d;
      FID_conflict__free(piVar1);
    }
  }
  FUN_0063b8c0();
  FUN_006f0510();
  *(undefined1 *)(in_ECX + 0xa7) = 0;
  ExceptionList = local_10;
  return (undefined1 *)0x1;
}

