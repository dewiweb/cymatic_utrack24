// rea decompile_all
// name: FUN_00698b30
// address: 0x698b30
// body: available
// range: 0x698b30-0x698c82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00698b30(int param_1,byte param_2)

{
  uint *puVar1;
  undefined4 *lParam;
  byte bVar2;
  uint uVar3;
  BOOL BVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_ECX + 0x80) + -1;
  if (-1 < iVar7) {
    piVar5 = (int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4);
    iVar6 = iVar7;
    do {
      if ((*(byte *)(*piVar5 + 8) & 0x60) != 0) {
        iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 0x78) + iVar6 * 4) + 4);
        goto LAB_00698b62;
      }
      piVar5 = piVar5 + -1;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  iVar6 = 0;
LAB_00698b62:
  if (iVar6 == param_1) {
    if (-1 < iVar7) {
      piVar5 = (int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4);
      iVar6 = iVar7;
      do {
        if ((*(byte *)(*piVar5 + 8) & 0x60) != 0) {
          bVar2 = (byte)(*(uint *)(*(int *)(*(int *)(in_ECX + 0x78) + iVar6 * 4) + 8) >> 5) & 1;
          goto LAB_00698b87;
        }
        piVar5 = piVar5 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    bVar2 = 1;
LAB_00698b87:
    if (bVar2 == param_2) {
      return;
    }
  }
  for (; -1 < iVar7; iVar7 = iVar7 + -1) {
    puVar1 = (uint *)(*(int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4) + 8);
    *puVar1 = *puVar1 & 0xffffff9f;
  }
  iVar7 = *(int *)(in_ECX + 0x80) + -1;
  if (-1 < iVar7) {
    piVar5 = (int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4);
    do {
      if (*(int *)(*piVar5 + 4) == param_1) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x78) + iVar7 * 4);
        if (iVar7 != 0) {
          uVar3 = 0x40;
          if (param_2 != 0) {
            uVar3 = 0x20;
          }
          puVar1 = (uint *)(iVar7 + 8);
          *puVar1 = *puVar1 | uVar3;
        }
        break;
      }
      piVar5 = piVar5 + -1;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *(undefined1 *)(in_ECX + 0x96) = 1;
  FUN_006e6400(&stack0xffffffe0);
  FUN_006ce9f0(1);
  piVar5 = (int *)(*(int *)(in_ECX + 0x74) + 0xc);
  LOCK();
  iVar7 = *piVar5;
  if (iVar7 == 0) {
    *piVar5 = 1;
    iVar7 = 0;
  }
  UNLOCK();
  if (iVar7 == 0) {
    lParam = *(undefined4 **)(in_ECX + 0x74);
    if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
      LOCK();
      lParam[1] = lParam[1] + 1;
      UNLOCK();
      BVar4 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
      if (BVar4 != 0) {
        return;
      }
    }
    if (lParam != (undefined4 *)0x0) {
      piVar5 = lParam + 1;
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      LOCK();
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*lParam)();
      }
    }
    LOCK();
    *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0xc) = 0;
    UNLOCK();
  }
  return;
}

