// rea decompile_all
// name: FUN_0049d7a0
// address: 0x49d7a0
// body: available
// range: 0x49d7a0-0x49db45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d7a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  float10 fVar8;
  float10 fVar9;
  int *local_44 [2];
  undefined1 local_3c [8];
  int *local_34 [2];
  undefined1 local_2c [8];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702e1d;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined2 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = *param_1;
  *(undefined4 *)(in_ECX + 0xec) = param_1[1];
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(in_ECX + 0xe8);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(in_ECX + 0xec);
  iVar1 = *(int *)(in_ECX + 0x118);
  if (iVar1 != 0) {
    *(undefined4 *)(in_ECX + 0x118) = 0;
    local_8 = 0;
    FUN_0049bd00(local_14);
    local_8 = 0xffffffff;
    FUN_004bfe14(iVar1,4);
  }
  if (((*(byte *)(*(int *)(in_ECX + 0x14) + 0x69) & 0x10) == 0) &&
     ((*(int *)(*(int *)(in_ECX + 0x14) + 0xc) == 0 || (cVar3 = FUN_006e6320(), cVar3 != '\0')))) {
    if ((((uint)param_1[4] >> 5 & 1) == 0) || (*(char *)(in_ECX + 0x13b) == '\0')) {
      if ((((*(char *)(in_ECX + 0x135) == '\0') || (*(int *)(in_ECX + 0x18) == 8)) ||
          (*(double *)(in_ECX + 0x88) < *(double *)(in_ECX + 0x70))) ||
         ((*(double *)(in_ECX + 0x78) < *(double *)(in_ECX + 0x88) ||
          ((param_1[4] & 0xffffff8f) != 4)))) {
        if (*(double *)(in_ECX + 0x70) <= *(double *)(in_ECX + 0x78) &&
            *(double *)(in_ECX + 0x78) != *(double *)(in_ECX + 0x70)) {
          *(undefined1 *)(in_ECX + 0x13c) = 1;
          if (*(int *)(in_ECX + 0x140) != 0) {
            FUN_006e0e10(1);
          }
          uVar4 = FUN_0049cec0(param_1);
          *(undefined4 *)(in_ECX + 0xf8) = uVar4;
          puVar5 = (undefined4 *)FUN_0063bf80(local_24);
          local_8 = 1;
          puVar6 = (undefined4 *)FUN_0063bf80(local_34);
          fVar8 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))(puVar5 + 2);
          fVar9 = (float10)(**(code **)(*(int *)*puVar6 + 0xc))(puVar6 + 2);
          *(double *)(in_ECX + 200) = (double)fVar9 - (double)fVar8;
          (**(code **)(*local_34[0] + 0x54))(local_2c);
          local_8 = 0xffffffff;
          (**(code **)(*local_24[0] + 0x54))(local_1c);
          puVar5 = (undefined4 *)FUN_0063bf80(local_24);
          local_8 = 2;
          fVar8 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))(puVar5 + 2);
          fVar8 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))((double)fVar8);
          local_8 = 0xffffffff;
          *(double *)(in_ECX + 0xa8) =
               (double)(*(float *)(in_ECX + 0xd8) - *(float *)(in_ECX + 0xd4)) * (double)fVar8 +
               (double)*(float *)(in_ECX + 0xd4);
          (**(code **)(*local_24[0] + 0x54))(local_1c);
          puVar5 = (undefined4 *)FUN_0063bf80(local_44);
          fVar8 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))(puVar5 + 2);
          *(double *)(in_ECX + 0x90) = (double)fVar8;
          (**(code **)(*local_44[0] + 0x54))(local_3c);
          *(undefined8 *)(in_ECX + 0x98) = *(undefined8 *)(in_ECX + 0x90);
          if (*(char *)(in_ECX + 0x13a) != '\0') {
            operator_new(0xc0);
            local_8 = 3;
            piVar7 = (int *)FUN_0049edc0(*(undefined4 *)(in_ECX + 0x14));
            local_8 = 0xffffffff;
            piVar2 = *(int **)(in_ECX + 0x14c);
            if ((piVar2 != piVar7) && (*(int **)(in_ECX + 0x14c) = piVar7, piVar2 != (int *)0x0)) {
              (**(code **)*piVar2)(1);
            }
            if (*(int *)(in_ECX + 0x150) == 0) {
              (**(code **)(*piVar7 + 0x30))(2,0);
            }
            else if (piVar7 != (int *)0x0) {
              FUN_006e5050(piVar7,0xffffffff);
            }
            (**(code **)(*piVar7 + 0x28))(1);
          }
          piVar7 = operator_new(4);
          local_8 = 4;
          *piVar7 = in_ECX;
          FUN_0049bc60();
          local_8 = 0xffffffff;
          piVar2 = *(int **)(in_ECX + 0x118);
          if ((piVar2 != piVar7) && (*(int **)(in_ECX + 0x118) = piVar7, piVar2 != (int *)0x0)) {
            local_8 = 5;
            FUN_0049bd00();
            local_8 = 0xffffffff;
            FUN_004bfe14(piVar2,4);
          }
          FUN_0049db50(param_1);
        }
      }
      else {
        FUN_0049e120();
      }
    }
    else {
      FUN_0049caf0();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

