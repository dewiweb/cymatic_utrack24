// rea decompile_all
// name: FUN_0046a6c0
// address: 0x46a6c0
// body: available
// range: 0x46a6c0-0x46a8b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0046a6c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *_Memory;
  void *_Memory_00;
  int in_ECX;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007014f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00458800(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  uVar8 = 0;
  iVar5 = *param_1;
  while (iVar5 != 0) {
    uVar8 = uVar8 + 1;
    iVar5 = param_1[uVar8];
  }
  _Memory = (void *)FUN_004c554b(uVar8 * 2);
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x2c))(*(int **)(in_ECX + 0x30),param_1,uVar8,_Memory);
  _Memory_00 = (void *)FUN_004c554b(uVar8 * 0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x28))
            (*(int **)(in_ECX + 0x30),_Memory,uVar8,_Memory_00,0);
  uVar7 = 0;
  fVar9 = 0.0;
  if (3 < uVar8) {
    piVar6 = (int *)((int)_Memory_00 + 0x20);
    iVar5 = (uVar8 - 4 >> 2) + 1;
    fVar10 = (float)*(int *)(in_ECX + 0x40);
    uVar7 = iVar5 * 4;
    do {
      piVar1 = piVar6 + -7;
      iVar4 = *piVar6;
      piVar2 = piVar6 + 7;
      piVar3 = piVar6 + 0xe;
      piVar6 = piVar6 + 0x1c;
      fVar9 = fVar9 + (float)((double)*piVar1 + (double)(&DAT_00c24bb0)[-(*piVar1 >> 0x1f)]) /
                      fVar10 +
              (float)((double)iVar4 + (double)(&DAT_00c24bb0)[-(iVar4 >> 0x1f)]) / fVar10 +
              (float)((double)*piVar2 + (double)(&DAT_00c24bb0)[-(*piVar2 >> 0x1f)]) / fVar10 +
              (float)((double)*piVar3 + (double)(&DAT_00c24bb0)[-(*piVar3 >> 0x1f)]) / fVar10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (uVar7 < uVar8) {
    iVar5 = uVar8 - uVar7;
    piVar6 = (int *)((int)_Memory_00 + (uVar7 * 7 + 1) * 4);
    do {
      iVar4 = *piVar6;
      piVar6 = piVar6 + 7;
      fVar9 = fVar9 + (float)((double)iVar4 + (double)(&DAT_00c24bb0)[-(iVar4 >> 0x1f)]) /
                      (float)*(int *)(in_ECX + 0x40);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  fVar10 = *(float *)(in_ECX + 0x34);
  FID_conflict__free(_Memory_00);
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return (float10)(fVar10 * fVar9);
}

