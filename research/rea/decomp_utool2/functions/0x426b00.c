// rea decompile_all
// name: FUN_00426b00
// address: 0x426b00
// body: available
// range: 0x426b00-0x426c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00426b00(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  void *local_18;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return in_ECX + param_3 * 4;
  }
  if ((int)param_2 <= param_3) {
    iVar1 = FUN_004261d0();
    if ((int)param_2 <= iVar1) {
      (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
      FUN_00426800();
      if (local_18 != (void *)0x0) {
        FID_conflict__free(local_18);
      }
      FUN_004c1df0();
      iVar1 = **(int **)(param_4 + 0x10);
      iVar2 = (*(int **)(param_4 + 0x10))[1] - iVar1;
      iVar1 = FUN_004c1df0(param_1 - iVar2,iVar1,iVar2);
      return iVar1;
    }
  }
  iVar1 = FUN_004261d0();
  if (param_3 <= iVar1) {
    (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
    FUN_00426800(param_1,0,0,0,0,*(undefined4 *)(param_4 + 0x10));
    if (local_18 != (void *)0x0) {
      FID_conflict__free(local_18);
    }
    FUN_004c1df0(param_1 - (in_EDX - in_ECX));
    iVar1 = **(int **)(param_4 + 0x10);
    iVar2 = (*(int **)(param_4 + 0x10))[1];
    FUN_004c1df0();
    return (iVar2 - iVar1) + in_ECX;
  }
  if (in_ECX == in_EDX) {
    return param_1;
  }
  if (in_EDX != param_1) {
    param_2 = param_2 & 0xffffff00;
    in_ECX = FUN_00426e90(param_1,param_2);
  }
  return in_ECX;
}

