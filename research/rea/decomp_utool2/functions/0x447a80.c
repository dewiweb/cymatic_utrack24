// rea decompile_all
// name: FUN_00447a80
// address: 0x447a80
// body: available
// range: 0x447a80-0x447c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447a80(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ff056;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0xd4);
  iVar2 = param_1[1];
  *(int **)(iVar1 + 0x130) = param_1;
  iVar8 = 1;
  if (1 < *param_1) {
    iVar8 = *param_1;
  }
  local_8 = 0;
  if ((iVar2 != *(int *)(iVar1 + 0x13c)) || (iVar8 != *(int *)(iVar1 + 0x138))) {
    uVar4 = iVar2 + 3U & 0xfffffffc;
    iVar5 = uVar4 * iVar8;
    uVar6 = iVar8 * 4 + 0x13U & 0xfffffff0;
    iVar7 = uVar6 + (iVar5 + 8) * 4;
    *(int *)(iVar1 + 0x140) = iVar7;
    FUN_00403500(iVar7,CONCAT31((int3)((uint)iVar5 >> 8),*(char *)(iVar1 + 0x1cc) != '\0'));
    iVar5 = 0;
    iVar7 = *(int *)(iVar1 + 0x148) + uVar6;
    *(int *)(iVar1 + 0x144) = *(int *)(iVar1 + 0x148);
    if (0 < iVar8) {
      do {
        *(int *)(*(int *)(iVar1 + 0x144) + iVar5 * 4) = iVar7;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + uVar4 * 4;
      } while (iVar5 < iVar8);
    }
    *(undefined4 *)(iVar8 * 4 + *(int *)(iVar1 + 0x144)) = 0;
    *(int *)(iVar1 + 0x13c) = iVar2;
    *(int *)(iVar1 + 0x138) = iVar8;
  }
  local_8 = 0xffffffff;
  FUN_004032e0(uVar3);
  *(int *)(in_ECX + 0xd8) = param_2;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0xd0)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 200) + iVar8 * 4) + 8))(iVar1,in_ECX + 0xbc,iVar2);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(in_ECX + 0xd0));
  }
  iVar8 = 0;
  if (0 < *param_1) {
    do {
      if (0 < iVar2) {
        if (*(char *)(iVar1 + 0x1cc) == '\0') {
          *(undefined1 *)(param_1 + 0x25) = 0;
          FUN_004c2c30(*(undefined4 *)(param_1[3] + iVar8 * 4),
                       *(undefined4 *)(*(int *)(iVar1 + 0x144) + iVar8 * 4),iVar2 * 4);
        }
        else if ((char)param_1[0x25] == '\0') {
          _memset(*(void **)(param_1[3] + iVar8 * 4),0,iVar2 * 4);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *param_1);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_005c60f0(in_ECX + 0xdc,param_2,param_1[1],param_2);
  ExceptionList = local_10;
  return;
}

