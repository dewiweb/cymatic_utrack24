// rea decompile_all
// name: FUN_004e6e40
// address: 0x4e6e40
// body: available
// range: 0x4e6e40-0x4e70ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6e40(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  undefined **local_20;
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007048b2;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(int *)(in_ECX + 0x10) = (int)(double)CONCAT44(param_3,param_2);
  dVar10 = (double)param_1;
  *(int *)(in_ECX + 0xc) = (int)(*(double *)(in_ECX + 0x18) * (double)CONCAT44(param_3,param_2));
  param_1 = 0;
  local_1c = dVar10 * *(double *)(in_ECX + 0x18) + 6755399441055744.0;
  if (0 < *(int *)(in_ECX + 0xf8)) {
    do {
      iVar3 = FUN_004c554b();
      local_8 = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004074c0(local_1c._0_4_,0x4000000000000000);
      }
      local_8 = 0xffffffff;
      iVar3 = *(int *)(in_ECX + 0x104);
      iVar6 = iVar3 + 1;
      if ((int)*(uint *)(in_ECX + 0x100) < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar3 + 2;
        }
        uVar9 = iVar3 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x100) != uVar9) {
          if ((int)uVar9 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0xfc));
            *(undefined4 *)(in_ECX + 0xfc) = 0;
          }
          else if (*(int *)(in_ECX + 0xfc) == 0) {
            uVar5 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0xfc) = uVar5;
          }
          else {
            uVar5 = FUN_004c553b(*(int *)(in_ECX + 0xfc));
            *(undefined4 *)(in_ECX + 0xfc) = uVar5;
          }
          *(uint *)(in_ECX + 0x100) = uVar9;
        }
      }
      iVar3 = *(int *)(in_ECX + 0x104);
      *(int *)(in_ECX + 0x104) = iVar3 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0xfc) + iVar3 * 4) = uVar4;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(in_ECX + 0xf8));
  }
  iVar6 = local_1c._0_4_;
  (**(code **)(**(int **)(in_ECX + 4) + 4))(local_1c._0_4_,(double)*(int *)(in_ECX + 0xc),uVar2);
  iVar3 = *(int *)(in_ECX + 0xf8);
  local_8 = 1;
  if ((iVar6 + 0x20 != *(int *)(in_ECX + 0x24)) || (iVar3 != *(int *)(in_ECX + 0x20))) {
    local_14 = iVar6 + 0x23U & 0xfffffffc;
    uVar2 = iVar3 * 4 + 0x13U & 0xfffffff0;
    cVar1 = *(char *)(in_ECX + 0xb4);
    iVar6 = uVar2 + 0x20 + local_14 * iVar3 * 4;
    *(int *)(in_ECX + 0x28) = iVar6;
    FID_conflict__free(*(void **)(in_ECX + 0x30));
    if (cVar1 == '\0') {
      iVar6 = FUN_004c554b(iVar6);
    }
    else {
      iVar6 = FUN_004c5556(iVar6,1);
    }
    *(int *)(in_ECX + 0x30) = iVar6;
    if (iVar6 == 0) {
      local_20 = std::bad_alloc::vftable;
      local_1c = 6.2297903279047e-317;
      iVar6 = __CxxThrowException_8(&local_20,&DAT_00c4d060);
    }
    iVar7 = 0;
    iVar8 = uVar2 + iVar6;
    *(int *)(in_ECX + 0x2c) = iVar6;
    if (0 < iVar3) {
      do {
        *(int *)(*(int *)(in_ECX + 0x2c) + iVar7 * 4) = iVar8;
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + local_14 * 4;
      } while (iVar7 < iVar3);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4) = 0;
    *(int *)(in_ECX + 0x20) = iVar3;
    *(int *)(in_ECX + 0x24) = local_1c._0_4_ + 0x20;
  }
  if (*(char *)(in_ECX + 0xb4) == '\0') {
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x20)) {
      do {
        _memset(*(void **)(*(int *)(in_ECX + 0x2c) + iVar3 * 4),0,*(int *)(in_ECX + 0x24) << 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 0x20));
    }
    *(undefined1 *)(in_ECX + 0xb4) = 1;
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined8 *)(in_ECX + 0xc0) = 0;
  ExceptionList = local_10;
  return;
}

