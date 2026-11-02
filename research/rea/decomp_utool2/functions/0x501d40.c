// rea decompile_all
// name: FUN_00501d40
// address: 0x501d40
// body: available
// range: 0x501d40-0x501f4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501d40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707525;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00502fd0();
  uVar8 = 0;
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    do {
      if ((((-1 < (int)uVar8) && ((int)uVar8 < iVar3)) && (uVar8 < *(uint *)(param_1 + 0x20))) &&
         (piVar1 = *(int **)(*(int *)(param_1 + 0x18) + uVar8 * 4), piVar1 != (int *)0x0)) {
        piVar4 = operator_new(0x18);
        iVar3 = piVar1[1];
        iVar7 = *piVar1;
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        local_8._0_1_ = 3;
        local_8._1_3_ = 0;
        piVar4[3] = iVar7;
        piVar4[4] = iVar3;
        *(undefined2 *)(piVar4 + 5) = 0;
        uStack_34 = 0x501dee;
        operator_new(0x80);
        local_8 = CONCAT31(local_8._1_3_,4);
        uStack_34 = 0x501e02;
        puVar5 = (undefined4 *)FUN_0053e120();
        puVar2 = (undefined4 *)*piVar4;
        if ((puVar2 != puVar5) && (*piVar4 = (int)puVar5, puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)();
        }
        local_8 = 0xffffffff;
        iVar3 = *(int *)(in_ECX + 0x374);
        iVar7 = iVar3 + 1;
        if ((int)*(uint *)(in_ECX + 0x370) < iVar7) {
          if (iVar7 < 0) {
            iVar7 = iVar3 + 2;
          }
          uVar9 = iVar3 + 9 + (iVar7 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0x370) != uVar9) {
            if ((int)uVar9 < 1) {
              FID_conflict__free(*(void **)(in_ECX + 0x36c));
              *(undefined4 *)(in_ECX + 0x36c) = 0;
            }
            else if (*(int *)(in_ECX + 0x36c) == 0) {
              uVar6 = FUN_004c554b();
              *(undefined4 *)(in_ECX + 0x36c) = uVar6;
            }
            else {
              uStack_34 = 0x501e74;
              uVar6 = FUN_004c553b();
              *(undefined4 *)(in_ECX + 0x36c) = uVar6;
            }
            *(uint *)(in_ECX + 0x370) = uVar9;
          }
        }
        iVar3 = *(int *)(in_ECX + 0x374);
        *(int *)(in_ECX + 0x374) = iVar3 + 1;
        *(int **)(*(int *)(in_ECX + 0x36c) + iVar3 * 4) = piVar4;
      }
      iVar3 = *(int *)(param_1 + 0x20);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar3);
  }
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_38);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(auStack_38);
  FUN_006ce9f0(1);
  (**(code **)(**(int **)(in_ECX + 0x234) + 4))();
  ExceptionList = local_10;
  return;
}

