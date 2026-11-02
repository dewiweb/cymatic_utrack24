// rea decompile_all
// name: FUN_004e7a10
// address: 0x4e7a10
// body: available
// range: 0x4e7a10-0x4e7b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7a10(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704947;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  iVar4 = *(int *)(in_ECX + 0x1c4);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if ((param_1 != *(int *)(in_ECX + 0x114)) || (iVar4 != *(int *)(in_ECX + 0x110))) {
    uVar2 = param_1 + 3U & 0xfffffffc;
    uVar7 = iVar4 * 4 + 0x13U & 0xfffffff0;
    iVar3 = uVar2 * iVar4;
    iVar6 = uVar7 + (iVar3 + 8) * 4;
    *(int *)(in_ECX + 0x118) = iVar6;
    FUN_00403500(iVar6,CONCAT31((int3)((uint)iVar3 >> 8),*(char *)(in_ECX + 0x1a4) != '\0'));
    iVar3 = 0;
    *(int *)(in_ECX + 0x11c) = *(int *)(in_ECX + 0x120);
    iVar6 = *(int *)(in_ECX + 0x120) + uVar7;
    if (0 < iVar4) {
      do {
        *(int *)(*(int *)(in_ECX + 0x11c) + iVar3 * 4) = iVar6;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + uVar2 * 4;
      } while (iVar3 < iVar4);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x11c) + iVar4 * 4) = 0;
    *(int *)(in_ECX + 0x114) = param_1;
    *(int *)(in_ECX + 0x110) = iVar4;
  }
  uVar2 = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined8 *)(in_ECX + 0x1a8) = param_2;
  *(int *)(in_ECX + 0x1b0) = param_1;
  if (0 < *(int *)(in_ECX + 0x1c0)) {
    bVar8 = *(int *)(in_ECX + 0x1c0) != 0;
    do {
      if (bVar8) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x1b8) + uVar2 * 4);
      }
      else {
        iVar4 = 0;
      }
      piVar5 = *(int **)(iVar4 + 0x10);
      if (piVar5 == (int *)0x0) {
        piVar5 = *(int **)(iVar4 + 0xc);
      }
      (**(code **)(*piVar5 + 4))(param_1,param_2,uVar1);
      uVar2 = uVar2 + 1;
      bVar8 = uVar2 < *(uint *)(in_ECX + 0x1c0);
    } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x1c0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  ExceptionList = local_10;
  return;
}

