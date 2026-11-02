// rea decompile_all
// name: FUN_0048fc80
// address: 0x48fc80
// body: available
// range: 0x48fc80-0x48fd90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048fc80(void)

{
  int iVar1;
  undefined4 *lParam;
  BOOL BVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  iVar3 = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x14) + iVar5 * 4);
      if ((*(byte *)(iVar1 + 0x20) & 0x70) != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 4) + 0xc);
        LOCK();
        iVar3 = *piVar4;
        if (iVar3 == 0) {
          *piVar4 = 1;
          iVar3 = 0;
        }
        UNLOCK();
        if (iVar3 == 0) {
          lParam = *(undefined4 **)(iVar1 + 4);
          if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
            LOCK();
            lParam[1] = lParam[1] + 1;
            UNLOCK();
            BVar2 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
            if (BVar2 != 0) goto LAB_0048fd1b;
          }
          if (lParam != (undefined4 *)0x0) {
            piVar4 = lParam + 1;
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
            LOCK();
            iVar3 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)*lParam)(1);
            }
          }
          LOCK();
          *(undefined4 *)(*(int *)(iVar1 + 4) + 0xc) = 0;
          UNLOCK();
        }
LAB_0048fd1b:
        iVar3 = local_8 + 1;
        local_8 = iVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x1c));
    if (iVar3 != 0) {
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (0 < *(int *)(in_ECX + 8)) {
    if (DAT_00c8a668 != 0) {
      if (*(int *)(in_ECX + 0xc) == 0) {
        *(undefined4 *)(DAT_00c8a668 + 0x4c) = *(undefined4 *)(in_ECX + 0x10);
      }
      else {
        *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x10) = *(undefined4 *)(in_ECX + 0x10);
      }
      if (*(int *)(in_ECX + 0x10) != 0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc) = *(undefined4 *)(in_ECX + 0xc);
      }
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  return;
}

