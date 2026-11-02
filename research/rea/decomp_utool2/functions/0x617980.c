// rea decompile_all
// name: FUN_00617980
// address: 0x617980
// body: available
// range: 0x617980-0x617a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x617a26 to 0x617a50 FUN_00617a50 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00617980(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint in_EDX;
  
  if ((param_1 == (char *)0x0) || (*param_1 != '1')) {
    return 0xfffffffa;
  }
  if (in_ECX != 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    if (*(int *)(in_ECX + 0x20) == 0) {
      *(code **)(in_ECX + 0x20) = FUN_00614140;
      *(undefined4 *)(in_ECX + 0x28) = 0;
    }
    if (*(int *)(in_ECX + 0x24) == 0) {
      *(code **)(in_ECX + 0x24) = FUN_00614130;
    }
    iVar1 = (**(code **)(in_ECX + 0x20))(*(undefined4 *)(in_ECX + 0x28),1,0x2530);
    if (iVar1 == 0) {
      return 0xfffffffc;
    }
    *(int *)(in_ECX + 0x1c) = iVar1;
    if ((int)in_EDX < 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      in_EDX = -in_EDX;
    }
    else {
      *(int *)(iVar1 + 8) = ((int)in_EDX >> 4) + 1;
      if ((int)in_EDX < 0x30) {
        in_EDX = in_EDX & 0xf;
      }
    }
    if (in_EDX - 8 < 8) {
      *(uint *)(iVar1 + 0x24) = in_EDX;
      *(undefined4 *)(iVar1 + 0x34) = 0;
      uVar2 = FUN_00617a50();
      return uVar2;
    }
    (**(code **)(in_ECX + 0x24))(*(undefined4 *)(in_ECX + 0x28),iVar1);
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  return 0xfffffffe;
}

