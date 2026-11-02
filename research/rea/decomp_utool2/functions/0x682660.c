// rea decompile_all
// name: FUN_00682660
// address: 0x682660
// body: available
// range: 0x682660-0x682707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00682660(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  int *local_8;
  
  if ((param_3 < 0) || (in_ECX[2] < param_2 + param_3)) {
    param_3 = in_ECX[2] - param_2;
  }
  param_3 = param_3 + -1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (-1 < param_3) {
    param_2 = param_2 * 0x1c;
    local_8 = in_ECX;
    do {
      iVar3 = *local_8 + param_2;
      param_2 = param_2 + 0x1c;
      if ((param_4 != '\0') || (*(char *)(iVar3 + 0x18) == '\0')) {
        uVar1 = FUN_00464460(local_18);
        puVar2 = (undefined4 *)FUN_0046f9b0(local_28,uVar1);
        *param_1 = *puVar2;
        param_1[1] = puVar2[1];
        param_1[2] = puVar2[2];
        param_1[3] = puVar2[3];
      }
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return param_1;
}

