// rea decompile_all
// name: FUN_0049e250
// address: 0x49e250
// body: available
// range: 0x49e250-0x49e44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049e250(int param_1,float *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_ECX;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  int *local_38 [2];
  double local_30;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00702f0e;
  local_1c = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_24 = uVar4;
  puVar3 = &stack0xfffffffc;
  if (((*(char *)(in_ECX + 0x13e) != '\0') &&
      (puVar3 = &stack0xfffffffc, *(int *)(in_ECX + 0x18) != 9)) &&
     (puVar3 = &stack0xfffffffc, *(int *)(in_ECX + 0x18) != 10)) {
    iVar1 = *(int *)(param_1 + 0x24);
    if ((*(int *)(param_1 + 0x20) != *(int *)(in_ECX + 0x100)) ||
       (puVar3 = &stack0xfffffffc, iVar1 != *(int *)(in_ECX + 0x104))) {
      *(int *)(in_ECX + 0x100) = *(int *)(param_1 + 0x20);
      *(int *)(in_ECX + 0x104) = iVar1;
      puVar3 = &stack0xfffffffc;
      if ((*(double *)(in_ECX + 0x70) <= *(double *)(in_ECX + 0x78) &&
           *(double *)(in_ECX + 0x78) != *(double *)(in_ECX + 0x70)) &&
         (puVar3 = &stack0xfffffffc, (*(byte *)(param_1 + 0x10) & 0x70) == 0)) {
        puVar3 = &stack0xfffffffc;
        if (*(int *)(in_ECX + 0x140) != 0) {
          FUN_006e0e10(0);
          puVar3 = puStack_20;
        }
        puStack_20 = puVar3;
        puVar5 = (undefined4 *)FUN_0063bf80(local_38);
        fVar6 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))(puVar5 + 2,uVar4);
        (**(code **)(*local_38[0] + 0x54))();
        fVar9 = *param_2;
        fVar7 = fVar9;
        FUN_00411660();
        fVar12 = param_2[1];
        fVar8 = fVar12;
        FUN_00411660();
        if (fVar8 < fVar7) {
          fVar12 = -fVar9;
        }
        if (*(char *)(param_2 + 2) == '\0') {
          fVar9 = 1.0;
        }
        else {
          fVar9 = -1.0;
        }
        dVar10 = (double)(fVar9 * fVar12);
        FUN_0049e1b0();
        puVar3 = puStack_20;
        if (dVar10 != 0.0) {
          if (0.0 <= dVar10) {
            dVar11 = 1.0;
          }
          else {
            dVar11 = -1.0;
          }
          FUN_00413660();
          if (dVar10 <= *(double *)(in_ECX + 0x80)) {
            dVar10 = *(double *)(in_ECX + 0x80);
          }
          local_30 = dVar11 * dVar10 + (double)fVar6;
          FUN_0049bc60();
          local_14 = 0;
          pcVar2 = *(code **)(**(int **)(in_ECX + 0x14) + 0xcc);
          if (pcVar2 != FUN_006e12e0) {
            fVar6 = (float10)(*pcVar2)(local_30,0);
            local_30 = (double)fVar6;
          }
          FUN_0049b400(2);
          local_14 = 1;
          FUN_0049bd00();
          puVar3 = puStack_20;
        }
      }
    }
  }
  puStack_20 = puVar3;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

