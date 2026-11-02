// rea decompile_all
// name: FUN_004b0f30
// address: 0x4b0f30
// body: available
// range: 0x4b0f30-0x4b1180 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004b0f30(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  byte bVar5;
  int in_EDX;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_3c;
  float fStack_38;
  int local_34;
  float local_30;
  undefined1 local_18 [20];
  
  pfVar1 = *(float **)(in_EDX + 0x24);
  if (pfVar1 != (float *)0x0) {
    fStack_38 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar10 = pfVar1[4];
    fVar9 = pfVar1[3];
    fVar6 = fStack_38 * fVar10 - fVar8 * fVar9;
    if (fVar6 == 0.0) {
      local_30 = pfVar1[2];
      fVar6 = pfVar1[5];
    }
    else {
      fVar6 = 1.0 / fVar6;
      fVar7 = fVar10 * fVar6;
      fVar9 = -fVar9 * fVar6;
      fVar8 = -fVar8 * fVar6;
      fVar10 = fStack_38 * fVar6;
      local_30 = -(pfVar1[2] * fVar7) - pfVar1[5] * fVar8;
      fVar6 = -(pfVar1[2] * fVar9) - pfVar1[5] * fVar10;
      fStack_38 = fVar7;
    }
    fVar7 = (float)param_1;
    param_1 = (int)((float)param_2 * fVar8 + fVar7 * fStack_38 + local_30);
    param_2 = (int)((float)param_2 * fVar10 + fVar7 * fVar9 + fVar6);
  }
  bVar5 = *(byte *)(in_EDX + 0x68) & 1;
  if (bVar5 == 0) {
    param_1 = param_1 - *(int *)(in_EDX + 0x10);
    param_2 = param_2 - *(int *)(in_EDX + 0x14);
LAB_004b1174:
    in_ECX[1] = param_2;
    *in_ECX = param_1;
    return in_ECX;
  }
  if (bVar5 == 0) {
    if (*(int *)(in_EDX + 0xc) == 0) goto LAB_004b1174;
    piVar3 = (int *)FUN_006d1d80();
  }
  else {
    piVar3 = (int *)FUN_0068db10();
  }
  if (piVar3 == (int *)0x0) {
    in_ECX[1] = param_2;
    *in_ECX = param_1;
    return in_ECX;
  }
  FUN_004b2ea0(param_1,param_2);
  (**(code **)(*piVar3 + 0x2c))(local_18,(float)(int)fStack_38,(float)local_34);
  piVar4 = (int *)FUN_004b2f60();
  iVar2 = *piVar4;
  piVar3[1] = piVar4[1];
  *piVar3 = iVar2;
  return piVar3;
}

