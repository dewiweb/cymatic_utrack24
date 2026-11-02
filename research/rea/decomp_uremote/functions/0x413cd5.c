// rea decompile_all
// name: FUN_00413cd5
// address: 0x413cd5
// body: available
// range: 0x413cd5-0x413f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00413cd5(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  uint uVar6;
  int *local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_148;
  int local_144;
  
  FUN_00413065();
  iVar1 = *(int *)(unaff_ESI + 0x400);
  if ((((*(int *)(unaff_ESI + 0xc) <= iVar1) ||
       (*(int *)(unaff_ESI + 0x408) <= *(int *)(unaff_ESI + 8))) ||
      (*(int *)(unaff_ESI + 0x14) <= *(int *)(unaff_ESI + 0x404))) ||
     (*(int *)(unaff_ESI + 0x40c) <= *(int *)(unaff_ESI + 0x10))) {
    return 0;
  }
  if (*(int *)(unaff_ESI + 8) < iVar1) {
    *(int *)(unaff_ESI + 8) = iVar1;
  }
  if (*(int *)(unaff_ESI + 0x10) < *(int *)(unaff_ESI + 0x404)) {
    *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x404);
  }
  if (*(int *)(unaff_ESI + 0x408) < *(int *)(unaff_ESI + 0xc)) {
    *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0x408);
  }
  if (*(int *)(unaff_ESI + 0x40c) < *(int *)(unaff_ESI + 0x14)) {
    *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x40c);
  }
  *(int *)(unaff_ESI + 0x18) = *(int *)(unaff_ESI + 0xc) - *(int *)(unaff_ESI + 8);
  local_158 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10);
  *(int *)(unaff_ESI + 0x1c) = local_158;
  local_158 = local_158 / *(int *)(unaff_ESI + 0x4e0);
  if (local_158 == 0) {
    local_158 = 1;
  }
  if (0x26 < local_158) {
    local_158 = 0x27;
  }
  local_15c = *(int **)(unaff_ESI + 0x10);
  *(undefined4 *)(unaff_ESI + 0x4e4) = 0;
  iVar1 = *(int *)(unaff_ESI + 0x14);
  local_154 = 0;
  do {
    if (local_158 <= local_154) {
      if (*(int *)(unaff_ESI + 0x4e4) < 9) {
        return 0;
      }
      if (*(int *)(unaff_ESI + 0x4e0) < 0x11) {
        return 0;
      }
      *(int *)(unaff_ESI + 0x4e0) = *(int *)(unaff_ESI + 0x4e0) / 2;
      return 0;
    }
    local_150 = (int)local_15c + *(int *)(unaff_ESI + 0x4e0);
    if ((local_154 == local_158 + -1) || (iVar1 < local_150)) {
      local_150 = iVar1;
    }
    local_148 = (int)local_15c;
    local_144 = local_150;
    local_15c = &local_148;
    while (&local_148 <= local_15c) {
      *(undefined4 *)(unaff_ESI + 0x530) = *(undefined4 *)(unaff_ESI + 0x528);
      iVar5 = local_15c[1] - *local_15c;
      uVar6 = iVar5 * 4;
      *(int *)(unaff_ESI + 0x534) = iVar5;
      if ((uVar6 & 0xf) != 0) {
        uVar6 = uVar6 + (0x10 - (uVar6 & 0xf));
      }
      uVar2 = (*(int *)(unaff_ESI + 0x528) - (*(uint *)(unaff_ESI + 0x52c) & 0xf)) +
              *(int *)(unaff_ESI + 0x52c);
      uVar6 = *(int *)(unaff_ESI + 0x528) + uVar6;
      *(uint *)(unaff_ESI + 0x2c) = uVar6;
      if ((uVar6 < uVar2) &&
         (iVar3 = (int)(uVar2 - uVar6) >> 4, *(int *)(unaff_ESI + 0x30) = iVar3, 1 < iVar3)) {
        iVar3 = 0;
        if (0 < iVar5) {
          do {
            *(undefined4 *)(*(int *)(unaff_ESI + 0x530) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(unaff_ESI + 0x534));
        }
        iVar5 = *local_15c;
        *(undefined4 *)(unaff_ESI + 0x34) = 0;
        *(int *)(unaff_ESI + 0x10) = iVar5;
        *(int *)(unaff_ESI + 0x14) = local_15c[1];
        iVar5 = local_15c[1];
        iVar3 = *local_15c;
        *(undefined4 *)(unaff_ESI + 0x28) = 1;
        *(int *)(unaff_ESI + 0x1c) = iVar5 - iVar3;
        iVar5 = FUN_00413c8a();
        if (iVar5 != 0) {
          if (iVar5 != 0x40) {
            return 1;
          }
          goto LAB_00413ecb;
        }
        FUN_00413ba9();
        local_15c = local_15c + -2;
      }
      else {
LAB_00413ecb:
        iVar5 = *local_15c;
        iVar3 = local_15c[1];
        iVar4 = (iVar3 - iVar5 >> 1) + iVar5;
        if (iVar4 == iVar5) {
          return 1;
        }
        if (*(int *)(unaff_ESI + 0x4e0) <= iVar5 - iVar3) {
          *(int *)(unaff_ESI + 0x4e4) = *(int *)(unaff_ESI + 0x4e4) + 1;
        }
        local_15c[2] = iVar5;
        local_15c[3] = iVar4;
        *local_15c = iVar4;
        local_15c[1] = iVar3;
        local_15c = local_15c + 2;
      }
    }
    local_154 = local_154 + 1;
    local_15c = (int *)local_150;
  } while( true );
}

