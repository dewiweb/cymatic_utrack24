// rea decompile_all
// name: FUN_006e27c0
// address: 0x6e27c0
// body: available
// range: 0x6e27c0-0x6e2875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e27c0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  
  iVar3 = in_ECX[2] + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*in_ECX + iVar3 * 4);
    do {
      if (*(int *)*puVar2 == param_1) {
        piVar1 = *(int **)(*in_ECX + iVar3 * 4);
        if (piVar1 != (int *)0x0) goto LAB_006e2852;
        break;
      }
      puVar2 = puVar2 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  piVar1 = operator_new(0x20);
  iVar3 = 0;
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  *piVar1 = param_1;
  if (0 < in_ECX[2]) {
    puVar2 = (undefined4 *)*in_ECX;
    do {
      if (param_1 < *(int *)*puVar2) break;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < in_ECX[2]);
  }
  FUN_00411110(iVar3,piVar1);
LAB_006e2852:
  *(ulonglong *)(piVar1 + 4) = CONCAT44(in_XMM3_Db,in_XMM3_Da);
  *(ulonglong *)(piVar1 + 2) = CONCAT44(in_XMM2_Db,in_XMM2_Da);
  *(undefined8 *)(piVar1 + 6) = param_2;
  piVar1[1] = 0;
  return;
}

