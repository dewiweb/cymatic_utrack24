// rea decompile_all
// name: FUN_005021f0
// address: 0x5021f0
// body: available
// range: 0x5021f0-0x50238e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005021f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070758c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00416aa0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FID_conflict__free(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(in_ECX + 0x374)) {
    bVar9 = *(int *)(in_ECX + 0x374) != 0;
    do {
      if (bVar9) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar7 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar5 = *(undefined4 *)(iVar3 + 0x10);
      if (uVar7 < *(uint *)(in_ECX + 0x374)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar7 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar1 = *(undefined4 *)(iVar3 + 0xc);
      if (uVar7 < *(uint *)(in_ECX + 0x374)) {
        puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x36c) + uVar7 * 4);
      }
      else {
        puVar4 = (undefined4 *)0x0;
      }
      uVar2 = *puVar4;
      puVar4 = operator_new(0x10);
      local_8 = 0;
      *puVar4 = uVar1;
      puVar4[1] = uVar5;
      operator_new(0x80);
      local_8 = CONCAT31(local_8._1_3_,1);
      uVar5 = FUN_0053e120(uVar2,0);
      local_8 = 0xffffffff;
      puVar4[2] = uVar5;
      *(undefined1 *)(puVar4 + 3) = 0;
      iVar3 = *(int *)(param_1 + 0x20);
      iVar6 = iVar3 + 1;
      if ((int)*(uint *)(param_1 + 0x1c) < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar3 + 2;
        }
        uVar8 = iVar3 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (*(uint *)(param_1 + 0x1c) != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free(*(void **)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          else if (*(int *)(param_1 + 0x18) == 0) {
            uVar5 = FUN_004c554b();
            *(undefined4 *)(param_1 + 0x18) = uVar5;
          }
          else {
            uVar5 = FUN_004c553b(*(int *)(param_1 + 0x18),uVar8 * 4);
            *(undefined4 *)(param_1 + 0x18) = uVar5;
          }
          *(uint *)(param_1 + 0x1c) = uVar8;
        }
      }
      iVar3 = *(int *)(param_1 + 0x20);
      uVar7 = uVar7 + 1;
      *(int *)(param_1 + 0x20) = iVar3 + 1;
      *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar3 * 4) = puVar4;
      bVar9 = uVar7 < *(uint *)(in_ECX + 0x374);
    } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x374));
  }
  ExceptionList = local_10;
  return;
}

