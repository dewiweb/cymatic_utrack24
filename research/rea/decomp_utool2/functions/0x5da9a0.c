// rea decompile_all
// name: FUN_005da9a0
// address: 0x5da9a0
// body: available
// range: 0x5da9a0-0x5daad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005da9a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  void *_Dst;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *in_EDX;
  uint uVar12;
  int iVar13;
  int local_1c;
  int local_c;
  
  iVar5 = param_2;
  piVar1 = (int *)*in_EDX;
  iVar2 = piVar1[2];
  iVar3 = piVar1[3];
  iVar6 = (piVar1[1] - *piVar1) / iVar2;
  piVar7 = (int *)FUN_005e9360();
  _Dst = (void *)FUN_005e9360();
  *piVar7 = (int)_Dst;
  _memset(_Dst,0,iVar6 << 2);
  local_1c = 0;
  param_2 = *piVar1 / param_2;
  if (0 < iVar6) {
    do {
      iVar11 = 0;
      iVar13 = 0;
      local_c = 0;
      if (0 < iVar2) {
        do {
          uVar4 = *(uint *)(*param_1 + param_2 * 4);
          uVar12 = (int)uVar4 >> 0x1f;
          iVar8 = (uVar4 ^ uVar12) - uVar12;
          if (iVar13 < iVar8) {
            iVar13 = iVar8;
          }
          iVar8 = 1;
          if (1 < iVar5) {
            do {
              uVar4 = *(uint *)(param_1[iVar8] + param_2 * 4);
              uVar12 = (int)uVar4 >> 0x1f;
              iVar9 = (uVar4 ^ uVar12) - uVar12;
              if (iVar11 < iVar9) {
                iVar11 = iVar9;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar5);
          }
          local_c = local_c + iVar5;
          param_2 = param_2 + 1;
        } while (local_c < iVar2);
      }
      iVar8 = 0;
      if (0 < iVar3 + -1) {
        piVar10 = piVar1 + 0x286;
        do {
          if ((iVar13 <= piVar10[-0x40]) && (iVar11 <= *piVar10)) break;
          iVar8 = iVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar8 < iVar3 + -1);
      }
      *(int *)(*piVar7 + local_1c * 4) = iVar8;
      local_1c = local_1c + 1;
    } while (local_1c < iVar6);
  }
  in_EDX[10] = in_EDX[10] + 1;
  return piVar7;
}

