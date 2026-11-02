// rea decompile_all
// name: FUN_005135d0
// address: 0x5135d0
// body: available
// range: 0x5135d0-0x513672 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005135d0(uint param_1,float param_2,undefined4 param_3,undefined1 param_4)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)(in_ECX + 8);
    if ((iVar1 == 0) || ((int)*(uint *)(iVar1 + 0x5c) <= (int)param_1)) goto LAB_00513638;
    if (*(uint *)(iVar1 + 0x5c) <= param_1) goto LAB_0051360b;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x54) + param_1 * 4);
  }
  else {
    if ((int)*(uint *)(iVar1 + 0x4bc) <= (int)param_1) goto LAB_00513638;
    if (param_1 < *(uint *)(iVar1 + 0x4bc)) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x4b4) + param_1 * 4);
    }
    else {
LAB_0051360b:
      iVar1 = 0;
    }
  }
  if (iVar1 != 0) {
    if (param_2 <= -64.0) {
      param_2 = -64.0;
    }
    *(undefined1 *)(iVar1 + 0x34) = param_4;
    *(float *)(iVar1 + 0x2c) = param_2;
    *(undefined4 *)(iVar1 + 0x30) = param_3;
    return;
  }
LAB_00513638:
  if (*(int *)(in_ECX + 0xc) != 0) {
    *(float *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x5c) + 0xc + param_1 * 0x18) = param_2;
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x5c) + 0x14 + param_1 * 0x18) = param_3;
    *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x5c) + 0x10 + param_1 * 0x18) = param_4;
  }
  return;
}

