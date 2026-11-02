// rea decompile_all
// name: FUN_0046c8f0
// address: 0x46c8f0
// body: available
// range: 0x46c8f0-0x46c9a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046c8f0(int *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar7 = in_ECX[2];
  if (0 < iVar7) {
    iVar3 = *in_ECX;
    do {
      puVar1 = (undefined8 *)(iVar3 + iVar8 * 0xc);
      if ((*param_1 == *(int *)(iVar3 + iVar8 * 0xc)) && (param_1[1] == *(int *)((int)puVar1 + 4)))
      {
        iVar7 = param_1[2];
        *puVar1 = *(undefined8 *)param_1;
        *(int *)(puVar1 + 1) = iVar7;
        return 0;
      }
      iVar6 = (iVar7 + iVar8) / 2;
      piVar2 = (int *)(iVar3 + iVar6 * 0xc);
      iVar4 = *piVar2;
      if ((*param_1 < iVar4) || ((*param_1 == iVar4 && (param_1[1] < piVar2[1])))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (iVar6 == iVar8) {
        if (!bVar5) {
          iVar8 = iVar8 + 1;
        }
        break;
      }
      if (bVar5) {
        iVar7 = iVar6;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
    } while (iVar8 < iVar7);
  }
  FUN_0046fe50(iVar8,param_1);
  return 1;
}

