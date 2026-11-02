// rea decompile_all
// name: FUN_006e3920
// address: 0x6e3920
// body: available
// range: 0x6e3920-0x6e39d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e3920(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)(in_ECX + 0xa0);
  if (puVar1 != param_1) {
    FUN_0040ec60(param_1);
    _Memory = (void *)*puVar1;
    *puVar1 = local_14;
    *(undefined4 *)(in_ECX + 0xa4) = local_10;
    *(undefined4 *)(in_ECX + 0xa8) = local_c;
    FID_conflict__free(_Memory);
  }
  iVar2 = *(int *)(in_ECX + 0x88);
  iVar5 = iVar2;
  if (iVar2 < 0x7fffffff) {
    iVar5 = 0x7fffffff;
  }
  FUN_00410160(iVar2,iVar5);
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0xa8)) {
    piVar6 = (int *)*puVar1;
    do {
      if (*(int *)(in_ECX + 0x98) < *piVar6) {
        if ((uVar3 & 1) != 0) goto LAB_006e39b7;
        break;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
    } while ((int)uVar3 < *(int *)(in_ECX + 0xa8));
  }
  uVar4 = FUN_006e3b20(0);
  *(undefined4 *)(in_ECX + 0x98) = uVar4;
LAB_006e39b7:
  FUN_0049a780();
  if (*(int **)(in_ECX + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x78) + 0x1c))(*(undefined4 *)(in_ECX + 0x98));
  }
  return;
}

