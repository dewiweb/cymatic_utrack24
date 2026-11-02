// rea decompile_all
// name: FUN_006e77d0
// address: 0x6e77d0
// body: available
// range: 0x6e77d0-0x6e7a94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e77d0(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar5 = *(int *)(*(int *)(in_ECX + 0x7c) + 0x1c) / *(int *)(in_ECX + 0x8c);
  cVar4 = *(char *)(in_ECX + 0x9c);
  if (((cVar4 == '\0') || (*(int *)(in_ECX + 0x98) < 0)) || ((*(byte *)(param_1 + 1) & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar7 = *param_1;
  if (iVar7 == 0x10026) {
    iVar5 = *(int *)(in_ECX + 0x98);
    if (!bVar2) {
      iVar7 = 0;
      if (0 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      FUN_00699dd0(iVar7,0,1,0);
      return 1;
    }
    FUN_00699d20(iVar5,iVar5 + -1,iVar5);
    return 1;
  }
  if (iVar7 == 0x10028) {
    if (bVar2) {
      iVar5 = *(int *)(in_ECX + 0x98);
      FUN_00699d20(iVar5,iVar5 + 1,iVar5);
      return 1;
    }
    iVar7 = 0;
    if (0 < *(int *)(in_ECX + 0x98)) {
      iVar7 = *(int *)(in_ECX + 0x98);
    }
    iVar7 = iVar7 + 1;
  }
  else {
    if (iVar7 == 0x10021) {
      if (!bVar2) {
        iVar7 = 0;
        if (0 < *(int *)(in_ECX + 0x98)) {
          iVar7 = *(int *)(in_ECX + 0x98);
        }
        iVar6 = 0;
        if (0 < iVar7 - iVar5) {
          iVar6 = iVar7 - iVar5;
        }
        FUN_00699dd0(iVar6,0,1,0);
        return 1;
      }
      iVar7 = *(int *)(in_ECX + 0x98);
      FUN_00699d20(iVar7,iVar7 - iVar5,iVar7);
      return 1;
    }
    if (iVar7 != 0x10022) {
      if (iVar7 == 0x10024) {
        if (!bVar2) {
          FUN_00699dd0(0,0,1,0);
          return 1;
        }
        FUN_00699d20(*(undefined4 *)(in_ECX + 0x98),0,in_ECX);
        return 1;
      }
      if (iVar7 != 0x10023) {
        if ((iVar7 == 0xd) && (cVar3 = FUN_006e38e0(*(undefined4 *)(in_ECX + 0x98)), cVar3 != '\0'))
        {
          if (*(int **)(in_ECX + 0x78) == (int *)0x0) {
            return 1;
          }
          (**(code **)(**(int **)(in_ECX + 0x78) + 0x24))(*(undefined4 *)(in_ECX + 0x98));
          return 1;
        }
        if ((iVar7 == 0x1002e) || (iVar7 == 8)) {
          uVar1 = *(undefined4 *)(in_ECX + 0x98);
          cVar3 = FUN_006e38e0(uVar1);
          if (cVar3 != '\0') {
            if (*(int **)(in_ECX + 0x78) == (int *)0x0) {
              return 1;
            }
            (**(code **)(**(int **)(in_ECX + 0x78) + 0x20))(uVar1);
            return 1;
          }
        }
        if (cVar4 != '\0') {
          local_14 = 0x61;
          local_10 = 2;
          local_c = 0;
          cVar4 = FUN_006e5ec0(&local_14);
          if (cVar4 != '\0') {
            FUN_00699d20(0,0x7fffffff,extraout_ECX);
            return 1;
          }
        }
        return 0;
      }
      if (!bVar2) {
        FUN_00699dd0(*(int *)(in_ECX + 0x88) + -1,0,1,0);
        return 1;
      }
      FUN_00699d20(*(undefined4 *)(in_ECX + 0x98),*(int *)(in_ECX + 0x88) + -1,in_ECX);
      return 1;
    }
    if (bVar2) {
      iVar7 = *(int *)(in_ECX + 0x98);
      FUN_00699d20(iVar7,iVar7 + iVar5,iVar7);
      return 1;
    }
    iVar7 = 0;
    if (0 < *(int *)(in_ECX + 0x98)) {
      iVar7 = *(int *)(in_ECX + 0x98);
    }
    iVar7 = iVar7 + iVar5;
  }
  iVar5 = *(int *)(in_ECX + 0x88) + -1;
  if (iVar7 < iVar5) {
    iVar5 = iVar7;
  }
  FUN_00699dd0(iVar5,0,1,0);
  return 1;
}

