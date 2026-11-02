// rea decompile_all
// name: FUN_005296e0
// address: 0x5296e0
// body: available
// range: 0x5296e0-0x529dcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005296e0(uint *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int local_a4;
  int local_98;
  char local_93;
  bool local_92;
  int local_90 [33];
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (in_ECX[1] != 0) {
    bVar2 = false;
    local_c = in_ECX[1];
    local_90[0] = 0;
    local_92 = false;
    while( true ) {
      iVar5 = local_90[0];
      local_90[local_90[0] + 1] = local_c;
      if (*param_1 < *(uint *)(local_c + 8)) {
        local_93 = -1;
      }
      else if (*(uint *)(local_c + 8) < *param_1) {
        local_93 = '\x01';
      }
      else {
        local_93 = '\0';
      }
      if (local_93 == '\0') break;
      local_92 = '\0' < local_93;
      if ((*(int *)(local_c + 0x1c + (uint)local_92 * 4) == 0) ||
         ((local_92 && ((*(byte *)(local_c + 0x24) & 0x80) != 0)))) goto LAB_005297f4;
      local_c = *(int *)(local_c + 0x1c + (uint)local_92 * 4);
      local_90[0] = local_90[0] + 1;
    }
    bVar2 = true;
LAB_005297f4:
    if (bVar2) {
      *in_ECX = *in_ECX + -1;
      if (*(int *)(local_c + 0x1c) == 0) {
        if ((*(byte *)(local_c + 0x24) & 0x80) == 0) {
          if (local_90[0] == 0) {
            in_ECX[1] = *(int *)(local_c + 0x20);
            local_90[0] = iVar5;
          }
          else {
            *(undefined4 *)(local_90[iVar5] + 0x1c + (uint)local_92 * 4) =
                 *(undefined4 *)(local_c + 0x20);
            local_90[0] = iVar5;
          }
        }
        else if (local_90[0] == 0) {
          in_ECX[1] = *(int *)(local_c + 0x20);
          local_90[0] = iVar5;
        }
        else {
          *(undefined4 *)(local_90[iVar5] + 0x1c + (uint)local_92 * 4) =
               *(undefined4 *)(local_c + 0x1c + (uint)local_92 * 4);
          local_90[0] = iVar5;
          if (local_92 == true) {
            *(byte *)(local_90[iVar5] + 0x24) = *(byte *)(local_90[iVar5] + 0x24) | 0x80;
          }
        }
      }
      else {
        iVar1 = *(int *)(local_c + 0x1c);
        iVar3 = local_90[0] + 1;
        if ((*(byte *)(iVar1 + 0x24) & 0x80) == 0) {
          do {
            local_90[0] = iVar3;
            local_98 = iVar1;
            local_90[local_90[0] + 1] = local_98;
            local_90[0] = local_90[0] + 1;
            iVar1 = *(int *)(local_98 + 0x20);
            iVar3 = local_90[0];
          } while ((*(byte *)(iVar1 + 0x24) & 0x80) == 0);
          if (*(int *)(iVar1 + 0x1c) == 0) {
            *(byte *)(local_98 + 0x24) = *(byte *)(local_98 + 0x24) | 0x80;
            *(int *)(local_98 + 0x20) = iVar1;
          }
          else {
            *(undefined4 *)(local_98 + 0x20) = *(undefined4 *)(iVar1 + 0x1c);
          }
          *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(local_c + 0x1c);
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(local_c + 0x20);
          *(undefined1 *)(iVar1 + 0x24) = *(undefined1 *)(local_c + 0x24);
          if (iVar5 == 0) {
            in_ECX[1] = iVar1;
            local_90[1] = iVar1;
          }
          else {
            *(int *)(local_90[iVar5] + 0x1c + (uint)local_92 * 4) = iVar1;
            local_90[iVar5 + 1] = iVar1;
          }
        }
        else {
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(local_c + 0x20);
          *(undefined1 *)(iVar1 + 0x24) = *(undefined1 *)(local_c + 0x24);
          if (local_90[0] == 0) {
            in_ECX[1] = iVar1;
          }
          else {
            *(int *)(local_90[iVar5] + 0x1c + (uint)local_92 * 4) = iVar1;
            local_90[iVar5 + 1] = iVar1;
            local_90[0] = iVar5 + 1;
          }
        }
      }
      local_8 = local_c;
      while( true ) {
        iVar5 = local_90[0];
        local_90[0] = local_90[0] + -1;
        if (local_90[0] < 0) break;
        local_a4 = local_90[iVar5];
        if (local_90[0] != 0) {
          local_92 = *(int *)(local_90[local_90[0]] + 0x20) == local_a4;
        }
        if (((((*(int *)(local_a4 + 0x1c) == 0) &&
              (uVar4 = *(byte *)(local_a4 + 0x24) & 0x7f, uVar4 != 1 && -1 < (int)(uVar4 - 1))) ||
             ((*(int *)(local_a4 + 0x1c) != 0 &&
              ((int)(*(byte *)(*(int *)(local_a4 + 0x1c) + 0x24) & 0x7f) <
               (int)((*(byte *)(local_a4 + 0x24) & 0x7f) - 1))))) ||
            ((((*(byte *)(local_a4 + 0x24) & 0x80) == 0 && (*(int *)(local_a4 + 0x20) == 0)) &&
             (uVar4 = *(byte *)(local_a4 + 0x24) & 0x7f, uVar4 != 1 && -1 < (int)(uVar4 - 1))))) ||
           ((((*(byte *)(local_a4 + 0x24) & 0x80) == 0 && (*(int *)(local_a4 + 0x20) != 0)) &&
            ((int)(*(byte *)(*(int *)(local_a4 + 0x20) + 0x24) & 0x7f) <
             (int)((*(byte *)(local_a4 + 0x24) & 0x7f) - 1))))) {
          *(char *)(local_a4 + 0x24) = *(char *)(local_a4 + 0x24) + -1;
          if (((*(int *)(local_a4 + 0x20) != 0) && ((*(byte *)(local_a4 + 0x24) & 0x80) == 0)) &&
             ((*(byte *)(local_a4 + 0x24) & 0x7f) <
              (*(byte *)(*(int *)(local_a4 + 0x20) + 0x24) & 0x7f))) {
            *(byte *)(*(int *)(local_a4 + 0x20) + 0x24) =
                 *(byte *)(*(int *)(local_a4 + 0x20) + 0x24) & 0x80 |
                 *(byte *)(local_a4 + 0x24) & 0x7f;
          }
          iVar5 = FUN_005234a0(local_a4);
          if ((*(int *)(iVar5 + 0x20) != 0) && ((*(byte *)(iVar5 + 0x24) & 0x80) == 0)) {
            uVar6 = FUN_005234a0(*(undefined4 *)(iVar5 + 0x20));
            *(undefined4 *)(iVar5 + 0x20) = uVar6;
          }
          if ((((*(int *)(iVar5 + 0x20) != 0) && (*(int *)(*(int *)(iVar5 + 0x20) + 0x20) != 0)) &&
              ((*(byte *)(iVar5 + 0x24) & 0x80) == 0)) &&
             ((*(byte *)(*(int *)(iVar5 + 0x20) + 0x24) & 0x80) == 0)) {
            uVar6 = FUN_005234a0(*(undefined4 *)(*(int *)(iVar5 + 0x20) + 0x20));
            *(undefined4 *)(*(int *)(iVar5 + 0x20) + 0x20) = uVar6;
          }
          local_a4 = FUN_00523540(iVar5);
          if ((*(int *)(local_a4 + 0x20) != 0) && ((*(byte *)(local_a4 + 0x24) & 0x80) == 0)) {
            uVar6 = FUN_00523540(*(undefined4 *)(local_a4 + 0x20));
            *(undefined4 *)(local_a4 + 0x20) = uVar6;
          }
        }
        if (local_90[0] == 0) {
          in_ECX[1] = local_a4;
        }
        else {
          *(int *)(local_90[local_90[0]] + 0x1c + (uint)local_92 * 4) = local_a4;
        }
      }
    }
  }
  return local_8;
}

