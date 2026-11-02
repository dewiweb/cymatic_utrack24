// rea decompile_all
// name: FUN_004e67d0
// address: 0x4e67d0
// body: available
// range: 0x4e67d0-0x4e69a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e67d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070483f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00637f30(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_18 = SUB84((double)param_1 * *(double *)(in_ECX + 0x10) + 6755399441055744.0,0);
  (**(code **)(**(int **)(in_ECX + 4) + 4))
            (local_18,*(double *)(in_ECX + 0x10) * (double)CONCAT44(param_3,param_2));
  iVar1 = *(int *)(in_ECX + 0xfc);
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((local_18 + 0x20 != *(int *)(in_ECX + 0x24)) || (iVar1 != *(int *)(in_ECX + 0x20))) {
    uVar2 = local_18 + 0x23U & 0xfffffffc;
    uVar6 = iVar1 * 4 + 0x13U & 0xfffffff0;
    iVar3 = uVar2 * iVar1;
    iVar5 = uVar6 + (iVar3 + 8) * 4;
    *(int *)(in_ECX + 0x28) = iVar5;
    FUN_00403500(iVar5,CONCAT31((int3)((uint)iVar3 >> 8),*(char *)(in_ECX + 0xb4) != '\0'));
    iVar3 = 0;
    *(int *)(in_ECX + 0x2c) = *(int *)(in_ECX + 0x30);
    iVar5 = *(int *)(in_ECX + 0x30) + uVar6;
    if (0 < iVar1) {
      do {
        *(int *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4) = iVar5;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + uVar2 * 4;
      } while (iVar3 < iVar1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) = 0;
    *(int *)(in_ECX + 0x24) = local_18 + 0x20;
    *(int *)(in_ECX + 0x20) = iVar1;
  }
  uVar4 = *(undefined4 *)(in_ECX + 0xfc);
  FID_conflict__free(*(void **)(in_ECX + 0x108));
  uVar4 = FUN_004c5556(uVar4,0x20);
  *(undefined4 *)(in_ECX + 0x108) = uVar4;
  uVar4 = *(undefined4 *)(in_ECX + 0xfc);
  FID_conflict__free(*(void **)(in_ECX + 0x104));
  uVar4 = FUN_004c5556(uVar4,4);
  *(undefined4 *)(in_ECX + 0x104) = uVar4;
  uVar4 = *(undefined4 *)(in_ECX + 0xfc);
  FID_conflict__free(*(void **)(in_ECX + 0x100));
  uVar4 = FUN_004c5556(uVar4,4);
  *(undefined4 *)(in_ECX + 0x100) = uVar4;
  FUN_004e60c0();
  FUN_004032e0();
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined8 *)(in_ECX + 0xc0) = 0;
  if (*(void **)(in_ECX + 0x108) != (void *)0x0) {
    _memset(*(void **)(in_ECX + 0x108),0,*(int *)(in_ECX + 0xfc) << 5);
  }
  LOCK();
  uVar4 = *(undefined4 *)(in_ECX + 0xf8);
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  UNLOCK();
  ExceptionList = local_10;
  return uVar4;
}

