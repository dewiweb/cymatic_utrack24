// rea decompile_all
// name: FUN_0044d910
// address: 0x44d910
// body: available
// range: 0x44d910-0x44da02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044d910(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < (int)param_3) {
    iVar1 = in_ECX[2] + param_3;
    if (in_ECX[1] < iVar1) {
      FUN_00411870(iVar1 / 2 + iVar1 + 8 & 0xfffffff8);
    }
    if (in_ECX[2] == 0) {
      puVar3 = (undefined4 *)*in_ECX;
    }
    else {
      puVar3 = (undefined4 *)*in_ECX;
      FUN_004c1df0(puVar3 + param_3 * 2,puVar3,in_ECX[2] * 8);
    }
    in_ECX[2] = in_ECX[2] + param_3;
    iVar1 = param_3 - 1;
    if (-1 < iVar1) {
      if (3 < (int)param_3) {
        param_3 = param_3 >> 2;
        puVar2 = puVar3 + 5;
        iVar1 = iVar1 + param_3 * -4;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *param_2;
            puVar2[-4] = param_2[1];
          }
          if (puVar2 != (undefined4 *)0xc) {
            puVar2[-3] = *param_2;
            puVar2[-2] = param_2[1];
          }
          if (puVar2 != (undefined4 *)0x4) {
            puVar2[-1] = *param_2;
            *puVar2 = param_2[1];
          }
          if (puVar2 + 1 != (undefined4 *)0x0) {
            puVar2[1] = *param_2;
            puVar2[2] = param_2[1];
          }
          puVar3 = puVar3 + 8;
          puVar2 = puVar2 + 8;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      for (; -1 < iVar1; iVar1 = iVar1 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *param_2;
          puVar3[1] = param_2[1];
        }
        puVar3 = puVar3 + 2;
      }
    }
  }
  return;
}

