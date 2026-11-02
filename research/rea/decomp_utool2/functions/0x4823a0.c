// rea decompile_all
// name: FUN_004823a0
// address: 0x4823a0
// body: available
// range: 0x4823a0-0x482486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004823a0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  double dVar8;
  int local_20;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x10) * 0x10 + *(int *)(in_ECX + 8));
  if (puVar6 != puVar3) {
    dVar8 = 6755399441055744.0;
    do {
      uVar1 = puVar6[2];
      iVar7 = puVar6[1];
      uVar2 = *puVar6;
      iVar4 = puVar6[3] + iVar7;
      for (; iVar7 < iVar4; iVar7 = iVar7 + 1) {
        param_1[0xd] = ((int *)param_1[0xc])[2] * iVar7 + *(int *)param_1[0xc];
        if ((char)param_1[10] == '\0') {
          if (*(char *)((int)param_1 + 0x29) == '\0') {
            local_20 = SUB84(((double)iVar7 - *(double *)(param_1 + 8)) * *(double *)(param_1 + 6) +
                             dVar8,0);
            param_1[3] = local_20;
          }
        }
        else {
          iVar5 = param_1[4] * iVar7 - param_1[3] >> 0xc;
          if (iVar5 < 0) {
            param_1[2] = *(int *)*param_1;
          }
          else {
            if (param_1[1] < iVar5) {
              iVar5 = param_1[1];
            }
            param_1[2] = *(int *)(*param_1 + iVar5 * 4);
          }
        }
        FUN_00485c60(uVar2,uVar1);
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != puVar3);
  }
  return;
}

