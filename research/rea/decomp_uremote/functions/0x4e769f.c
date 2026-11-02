// rea decompile_all
// name: FUN_004e769f
// address: 0x4e769f
// body: available
// range: 0x4e769f-0x4e78a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e769f(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined4 uVar4;
  uint local_18;
  
  if (((*(char *)(in_ECX + 0x9c) == '\0') || (*(int *)(in_ECX + 0x98) < 0)) ||
     (FUN_004d076d(), (local_18 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar1 = *param_1;
  if (iVar1 == 0x10026) {
    if (bVar2) {
      uVar4 = *(undefined4 *)(in_ECX + 0x98);
      goto LAB_004e788d;
    }
    uVar4 = 0;
LAB_004e776b:
    FUN_00439b5a(0,uVar4);
  }
  else {
    if (iVar1 == 0x10028) {
      if (bVar2) {
        uVar4 = *(undefined4 *)(in_ECX + 0x98);
        goto LAB_004e788d;
      }
      uVar4 = 0;
      FUN_00439b5a(0,0);
    }
    else {
      if (iVar1 == 0x10021) {
        if (bVar2) {
          uVar4 = *(undefined4 *)(in_ECX + 0x98);
          goto LAB_004e788d;
        }
        uVar4 = 0;
        FUN_00439b5a(0,0);
        goto LAB_004e776b;
      }
      if (iVar1 != 0x10022) {
        if (iVar1 != 0x10024) {
          if (iVar1 == 0x10023) {
            if (!bVar2) {
              uVar4 = 0;
              goto LAB_004e77f2;
            }
            uVar4 = *(undefined4 *)(in_ECX + 0x98);
          }
          else {
            if (iVar1 == 0xd) {
              uVar4 = *(undefined4 *)(in_ECX + 0x98);
              cVar3 = FUN_004e766a(uVar4);
              param_1 = extraout_ECX;
              if (cVar3 != '\0') {
                if (*(int *)(in_ECX + 0x78) == 0) {
                  return 1;
                }
                (**(code **)(**(int **)(in_ECX + 0x78) + 0x24))(uVar4);
                return 1;
              }
            }
            if ((iVar1 == 0x1002e) || (iVar1 == 8)) {
              uVar4 = *(undefined4 *)(in_ECX + 0x98);
              cVar3 = FUN_004e766a(uVar4);
              param_1 = extraout_ECX_00;
              if (cVar3 != '\0') {
                if (*(int *)(in_ECX + 0x78) == 0) {
                  return 1;
                }
                (**(code **)(**(int **)(in_ECX + 0x78) + 0x20))(uVar4);
                return 1;
              }
            }
            if (*(char *)(in_ECX + 0x9c) == '\0') {
              return 0;
            }
            uVar4 = 0;
            FUN_004c751a(param_1,0);
            FUN_004c71a0(param_1,uVar4);
            cVar3 = FUN_004c721b();
            if (cVar3 == '\0') {
              return 0;
            }
            uVar4 = 0;
          }
LAB_004e788d:
          FUN_004e748b(uVar4);
          return 1;
        }
        if (bVar2) {
          uVar4 = *(undefined4 *)(in_ECX + 0x98);
          goto LAB_004e788d;
        }
        uVar4 = 0;
        goto LAB_004e77f2;
      }
      if (bVar2) {
        uVar4 = *(undefined4 *)(in_ECX + 0x98);
        goto LAB_004e788d;
      }
      uVar4 = 0;
      FUN_00439b5a(0,0);
    }
    FUN_00440367(*(int *)(in_ECX + 0x88) + -1);
  }
LAB_004e77f2:
  FUN_004e7334(uVar4);
  return 1;
}

