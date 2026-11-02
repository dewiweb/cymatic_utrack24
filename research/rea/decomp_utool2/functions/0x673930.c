// rea decompile_all
// name: FUN_00673930
// address: 0x673930
// body: available
// range: 0x673930-0x6739f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00673930(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  piVar1 = (int *)FUN_00673860(local_18);
  if ((((*piVar1 < *param_2) || (piVar1[1] < param_2[1])) ||
      (param_2[2] + *param_2 < piVar1[2] + *piVar1)) ||
     (param_2[3] + param_2[1] < piVar1[3] + piVar1[1])) {
    uVar2 = FUN_00673860(local_28);
    FUN_0044db90(local_18,uVar2);
    if ((local_10 < 1) || (local_c < 1)) {
      *param_1 = 0;
    }
    else {
      operator_new(0x40);
      iVar3 = FUN_004660f0(*in_ECX,local_18);
      *param_1 = iVar3;
      if (iVar3 != 0) {
        LOCK();
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        UNLOCK();
        return;
      }
    }
  }
  else {
    iVar3 = *in_ECX;
    *param_1 = iVar3;
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}

