// rea decompile_all
// name: FUN_005d40a0
// address: 0x5d40a0
// body: available
// range: 0x5d40a0-0x5d43ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d40a0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  undefined4 *in_EDX;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int iVar6;
  longlong lVar7;
  undefined1 local_44 [36];
  int local_20 [4];
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = in_ECX;
  if (param_4 == (int *)0x0) {
    lVar7 = FUN_005d4950(0x10000,0);
    if (lVar7 == -0x80) {
      return -0x80;
    }
    if (((int)((ulonglong)lVar7 >> 0x20) < 1) && (lVar7 < 0)) {
      return -0x84;
    }
    param_4 = local_20;
  }
  *in_EDX = 0;
  in_EDX[1] = 0;
  in_EDX[2] = 0;
  in_EDX[3] = 0;
  in_EDX[4] = 0;
  in_EDX[5] = 0;
  in_EDX[6] = 0;
  in_EDX[7] = 0;
  uVar2 = FUN_004c5556(1,0xe50);
  in_EDX[7] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(in_ECX + 0x58) = 2;
  iVar3 = *param_4;
  bVar1 = *(byte *)(iVar3 + 5);
  while ((bVar1 & 2) != 0) {
    if (param_2 != (int *)0x0) {
      iVar6 = *(int *)(iVar3 + 0xe);
      piVar5 = (int *)*param_2;
      iVar3 = *param_3;
      if (piVar5 != (int *)0x0) {
        while (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (*piVar5 == iVar6) {
            if ((void *)*param_2 != (void *)0x0) {
              FID_conflict__free((void *)*param_2);
            }
            *param_2 = 0;
            *param_3 = 0;
            goto LAB_005d4328;
          }
          piVar5 = piVar5 + 1;
        }
      }
      iVar3 = *param_3;
      *param_3 = iVar3 + 1;
      if (*param_2 == 0) {
        iVar3 = FUN_004c554b(4);
      }
      else {
        iVar3 = FUN_004c553b(*param_2,(iVar3 + 1) * 4);
      }
      *param_2 = iVar3;
      *(int *)(*param_2 + -4 + *param_3 * 4) = iVar6;
    }
    if (*(int *)(in_ECX + 0x58) < 3) {
      FUN_005e9e70();
      *(undefined4 *)(in_ECX + 0x1c8) = extraout_EDX;
      FUN_005e9f20();
      iVar3 = FUN_005e9d40(1);
      if ((0 < iVar3) && (iVar3 = FUN_005e24a0(), iVar3 != 0)) {
        *(undefined4 *)(in_ECX + 0x58) = 3;
        iVar3 = FUN_005e2360(local_44);
        if (iVar3 != 0) goto LAB_005d4328;
      }
    }
    lVar7 = FUN_005d4950(0x10000,0);
    if (lVar7 == -0x80) {
      iVar3 = -0x80;
      goto LAB_005d432d;
    }
    if (lVar7 < 0) goto LAB_005d4366;
    if ((*(int *)(in_ECX + 0x58) == 3) && (*(int *)(in_ECX + 0x1c8) == *(int *)(*param_4 + 0xe))) {
      FUN_005e9f20();
      break;
    }
    iVar3 = *param_4;
    bVar1 = *(byte *)(iVar3 + 5);
  }
  if (*(int *)(in_ECX + 0x58) == 3) {
    iVar6 = 0;
    while( true ) {
      while( true ) {
        if (1 < iVar6) {
          return 0;
        }
        iVar4 = FUN_005e9d40(1);
        iVar3 = local_10;
        if (iVar4 != 0) break;
        while( true ) {
          FUN_005d4950(0x10000,0);
          if (extraout_EDX_00 < 0) goto LAB_005d4328;
          iVar4 = FUN_005eaaa0();
          if (*(int *)(iVar3 + 0x1c8) == iVar4) break;
          if ((*(byte *)(*param_4 + 5) & 2) != 0) {
            if (local_c != 0) goto LAB_005d4328;
            local_c = 1;
          }
        }
        FUN_005e9f20();
      }
      if (iVar4 == -1) break;
      iVar3 = FUN_005e2360(local_44);
      if (iVar3 != 0) goto LAB_005d432d;
      iVar6 = iVar6 + 1;
    }
LAB_005d4328:
    iVar3 = -0x85;
  }
  else {
LAB_005d4366:
    iVar3 = -0x84;
  }
LAB_005d432d:
  FUN_005e2a80();
  FUN_005e2cf0();
  *(undefined4 *)(local_10 + 0x58) = 2;
  return iVar3;
}

