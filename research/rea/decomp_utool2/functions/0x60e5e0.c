// rea decompile_all
// name: FUN_0060e5e0
// address: 0x60e5e0
// body: available
// range: 0x60e5e0-0x60e772 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0060e6c0) */

void FUN_0060e5e0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *lParam;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  BOOL BVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  undefined2 local_14 [2];
  int local_10;
  uint local_c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  if (*(int *)(in_ECX + 0x38) < param_3) {
    param_3 = *(int *)(in_ECX + 0x38);
  }
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    local_10 = param_4 + param_2;
    local_c = param_2 * 2;
    do {
      piVar8 = *(int **)(*(int *)(in_ECX + 0x30) + param_3 * 4);
      iVar6 = *(int *)(param_1 + param_3 * 4);
      piVar8[3] = -1;
      if ((piVar8[2] < local_10) && (iVar3 = (param_2 - piVar8[2]) + param_4, 0 < iVar3)) {
        local_14[0] = 0;
        FUN_0044d8b0(param_3,local_14,iVar3);
      }
      iVar3 = *piVar8;
      if (0 < param_4) {
        puVar4 = (undefined2 *)(iVar3 + local_c);
        iVar9 = param_4;
        do {
          *puVar4 = *(undefined2 *)((iVar6 - (int)(iVar3 + local_c)) + (int)puVar4);
          iVar9 = iVar9 + -1;
          puVar4 = puVar4 + 1;
        } while (iVar9 != 0);
      }
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  iVar6 = *(int *)(in_ECX + 0x4c);
  lVar1 = (longlong)(param_2 + param_4) * (longlong)*(int *)(in_ECX + 0x3c);
  lVar2 = (longlong)param_2 * (longlong)*(int *)(in_ECX + 0x3c);
  iVar3 = (int)((ulonglong)lVar2 >> 0x20);
  local_c = (uint)lVar2;
  if (iVar3 <= iVar6) {
    if (((iVar3 < iVar6) || (local_c <= *(uint *)(in_ECX + 0x48))) &&
       (CONCAT44(iVar6,*(uint *)(in_ECX + 0x48)) < lVar1)) {
      *(longlong *)(in_ECX + 0x48) = lVar1;
    }
  }
  iVar6 = *(int *)(in_ECX + 0x44);
  iVar3 = *(int *)(in_ECX + 0x4c);
  uVar5 = *(uint *)(in_ECX + 0x40);
  if ((iVar6 < iVar3) || ((iVar6 <= iVar3 && (uVar5 <= *(uint *)(in_ECX + 0x48))))) {
    uVar5 = *(uint *)(in_ECX + 0x48);
    iVar6 = iVar3;
  }
  *(uint *)(in_ECX + 0x40) = uVar5;
  *(int *)(in_ECX + 0x44) = iVar6;
  *(undefined1 *)(*(int *)(in_ECX + 0x2c) + 0x28) = 1;
  if (0 < *(int *)(in_ECX + 0x18)) {
    piVar8 = (int *)(*(int *)(in_ECX + 8) + 0xc);
    LOCK();
    iVar6 = *piVar8;
    if (iVar6 == 0) {
      *piVar8 = 1;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 == 0) {
      lParam = *(undefined4 **)(in_ECX + 8);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        lParam[1] = lParam[1] + 1;
        UNLOCK();
        BVar7 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
        if (BVar7 != 0) goto LAB_0060e760;
      }
      if (lParam != (undefined4 *)0x0) {
        piVar8 = lParam + 1;
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*lParam)(1);
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
      UNLOCK();
    }
  }
LAB_0060e760:
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x60));
  return;
}

