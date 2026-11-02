// rea decompile_all
// name: FUN_00461710
// address: 0x461710
// body: available
// range: 0x461710-0x461797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461710(int *param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    piVar3 = *(int **)(in_ECX + 0x18);
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 8) == *param_2) {
        *param_1 = iVar1;
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
        goto LAB_0046176f;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x20));
  }
  operator_new(0x34);
  iVar2 = FUN_00460e00(param_2);
  FUN_00461880(iVar2,0xffffffff,0);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
LAB_0046176f:
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

