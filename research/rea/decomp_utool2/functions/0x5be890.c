// rea decompile_all
// name: FUN_005be890
// address: 0x5be890
// body: available
// range: 0x5be890-0x5bea2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005be890(uint param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a2ad;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  local_8 = 0;
  iVar5 = (int)param_1 >> 5;
  if (param_2 == '\0') {
    iVar4 = *(int *)(in_ECX + 0x28);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x20) + iVar4 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x30))(param_1,uVar3);
      if ((cVar2 != '\0') && (*(undefined1 *)((int)piVar1 + 0x21) = 0, (char)piVar1[8] == '\0')) {
        (**(code **)(*piVar1 + 0xc))(0x3f800000,1);
      }
    }
    if ((-1 < (int)param_1) && ((int)param_1 <= *(int *)(in_ECX + 0xa4))) {
      iVar4 = *(int *)(in_ECX + 0x8c);
      if (iVar4 == 0) {
        iVar4 = in_ECX + 0x90;
      }
      *(uint *)(iVar4 + iVar5 * 4) = *(uint *)(iVar4 + iVar5 * 4) & ~(1 << (param_1 & 0x1f));
      if (param_1 == *(uint *)(in_ECX + 0xa4)) {
        iVar5 = *(int *)(in_ECX + 0x8c);
        if (iVar5 == 0) {
          iVar5 = in_ECX + 0x90;
        }
        iVar4 = (int)*(uint *)(in_ECX + 0xa4) >> 5;
        if (-1 < iVar4) {
LAB_005be9f0:
          uVar3 = *(uint *)(iVar5 + iVar4 * 4);
          if (uVar3 == 0) goto code_r0x005be9f7;
          iVar5 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar5 = iVar4 * 0x20 + iVar5;
          goto LAB_005be9ff;
        }
LAB_005be9fc:
        iVar5 = -1;
LAB_005be9ff:
        *(int *)(in_ECX + 0xa4) = iVar5;
      }
    }
  }
  else {
    if (-1 < (int)param_1) {
      if (*(int *)(in_ECX + 0xa4) < (int)param_1) {
        FUN_006264b0(iVar5 + 1);
        *(uint *)(in_ECX + 0xa4) = param_1;
      }
      iVar4 = *(int *)(in_ECX + 0x8c);
      if (iVar4 == 0) {
        iVar4 = in_ECX + 0x90;
      }
      *(uint *)(iVar4 + iVar5 * 4) = *(uint *)(iVar4 + iVar5 * 4) | 1 << (param_1 & 0x1f);
    }
    iVar5 = *(int *)(in_ECX + 0x28);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x20) + iVar5 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x30))(param_1);
      if ((cVar2 != '\0') && ((char)piVar1[8] != '\0')) {
        *(undefined1 *)((int)piVar1 + 0x21) = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  ExceptionList = local_10;
  return;
code_r0x005be9f7:
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) goto LAB_005be9fc;
  goto LAB_005be9f0;
}

