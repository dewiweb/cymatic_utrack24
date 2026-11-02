// rea decompile_all
// name: FUN_00429290
// address: 0x429290
// body: available
// range: 0x429290-0x4293e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429290(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (0 < *(int *)(in_ECX + 0x20)) {
    local_8 = 0;
    iVar1 = param_3;
    while (0 < param_3) {
      if (((*(char *)(in_ECX + 0x38) == '\0') && (param_4 != 0)) &&
         (DVar2 = WaitForSingleObject(*(HANDLE *)(param_4 + 0x48),0), DVar2 == 0)) {
        FUN_00428d10();
      }
      if (*(int *)(in_ECX + 0x20) < 1) {
        iVar5 = 0;
      }
      else {
        if (*(char *)(in_ECX + 0x38) == '\0') {
          local_c = 0;
          iVar5 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x18))(*(int **)(in_ECX + 0xc),&local_c);
          if (-1 < iVar5) {
            iVar5 = *(int *)(in_ECX + 0x78) - local_c;
            goto LAB_0042930d;
          }
        }
        iVar5 = *(int *)(in_ECX + 0x78);
      }
LAB_0042930d:
      if (param_3 < iVar5) {
        iVar5 = param_3;
      }
      if (iVar5 == 0) {
        if (*(char *)(param_5 + 0x3c) != '\0') {
          return;
        }
        DVar2 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x48),1000);
        if (DVar2 != 0) {
          return;
        }
      }
      else {
        if ((*(char *)(in_ECX + 0x38) != '\0') &&
           (DVar2 = WaitForSingleObject(*(HANDLE *)(in_ECX + 0x48),1000), DVar2 == 0x102)) {
          return;
        }
        local_10 = 0;
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x90) + 0xc))
                          (*(int **)(in_ECX + 0x90),iVar5,&local_10);
        if (-1 < iVar3) {
          iVar3 = 0;
          if (0 < param_2) {
            iVar4 = local_8 * 4;
            do {
              (**(code **)(**(int **)(in_ECX + 0x94) + 4))
                        (local_10,*(undefined4 *)(*(int *)(in_ECX + 0x6c) + iVar3 * 4),
                         *(int *)(param_1 + iVar3 * 4) + iVar4,0,iVar5);
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_2);
          }
          (**(code **)(**(int **)(in_ECX + 0x90) + 0x10))(*(int **)(in_ECX + 0x90),iVar5,0);
          param_3 = iVar1;
        }
        param_3 = param_3 - iVar5;
        local_8 = local_8 + iVar5;
        iVar1 = param_3;
      }
    }
  }
  return;
}

