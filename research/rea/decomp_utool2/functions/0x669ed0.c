// rea decompile_all
// name: FUN_00669ed0
// address: 0x669ed0
// body: available
// range: 0x669ed0-0x669fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x669f9c to 0x669e00 FUN_00669e00 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x669fc7 to 0x669e00 FUN_00669e00 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00669ed0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  if (in_ECX[5] == 0xca) {
    puVar2 = (undefined4 *)(**(code **)in_ECX[1])();
    in_ECX[0x60] = (int)puVar2;
    *puVar2 = FUN_00663da0;
    puVar2[1] = FUN_00663d70;
    *(undefined1 *)(puVar2 + 2) = 0;
    FUN_00663f00();
    if ((char)in_ECX[0x10] != '\0') {
      in_ECX[5] = 0xcf;
      return 1;
    }
    in_ECX[5] = 0xcb;
  }
  if (in_ECX[5] == 0xcb) {
    if (*(char *)(in_ECX[100] + 0x10) != '\0') {
      while( true ) {
        if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
          (**(code **)in_ECX[2])();
        }
        iVar3 = (**(code **)in_ECX[100])();
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar3 == 2) break;
        iVar1 = in_ECX[2];
        if ((iVar1 != 0) && ((iVar3 == 3 || (iVar3 == 1)))) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          iVar3 = *(int *)(in_ECX[2] + 8);
          if (iVar3 <= *(int *)(iVar1 + 4)) {
            *(int *)(in_ECX[2] + 8) = in_ECX[0x47] + iVar3;
          }
        }
      }
    }
    in_ECX[0x21] = in_ECX[0x1f];
    uVar4 = FUN_00669e00();
    return uVar4;
  }
  if (in_ECX[5] != 0xcc) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
  }
  uVar4 = FUN_00669e00();
  return uVar4;
}

