// rea decompile_all
// name: FUN_00696d40
// address: 0x696d40
// body: available
// range: 0x696d40-0x696dd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x696db9 to 0x696cf0 FUN_00696cf0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696d40(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  if (((*(char *)(in_ECX + 0x95) == '\0') || (*(char *)(in_ECX + 0x94) != '\0')) ||
     ((*(byte *)(in_ECX + 0x69) & 0x10) != 0)) {
LAB_00696dbe:
    puVar1 = *(undefined4 **)(in_ECX + 0xf0);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xf0) = 0;
      (**(code **)*puVar1)(1);
    }
  }
  else {
    if (*(int *)(in_ECX + 0xc) != 0) {
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_00696dbe;
    }
    if (*(int *)(in_ECX + 0xf0) == 0) {
      iVar3 = FUN_006e9580();
      puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 0xc) + 0xc))();
      puVar1 = *(undefined4 **)(in_ECX + 0xf0);
      if ((puVar1 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xf0) = puVar4, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      if (*(int *)(in_ECX + 0xf0) != 0) {
        FUN_006e5050(*(int *)(in_ECX + 0xf0),0xffffffff);
      }
      FUN_00696cf0();
      return;
    }
  }
  return;
}

