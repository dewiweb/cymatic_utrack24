// rea decompile_all
// name: FUN_00527610
// address: 0x527610
// body: available
// range: 0x527610-0x527dde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00527610(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  uint uVar7;
  int local_a4;
  int local_98;
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
      local_90[local_90[0] + 1] = local_c;
      local_90[0] = local_90[0] + 1;
      cVar3 = FUN_005036a0(param_1,local_c + 0x48);
      iVar5 = local_90[0];
      if (cVar3 == '\0') break;
      local_92 = '\0' < cVar3;
      if ((*(int *)(local_c + 0x168 + (uint)local_92 * 4) == 0) ||
         ((local_92 && ((*(byte *)(local_c + 0x170) & 0x80) != 0)))) goto LAB_00527713;
      local_c = *(int *)(local_c + 0x168 + (uint)local_92 * 4);
    }
    bVar2 = true;
LAB_00527713:
    if (bVar2) {
      *in_ECX = *in_ECX + -1;
      if (*(int *)(local_c + 0x168) == 0) {
        if ((*(byte *)(local_c + 0x170) & 0x80) == 0) {
          local_90[0] = local_90[0] + -1;
          if (local_90[0] == 0) {
            in_ECX[1] = *(int *)(local_c + 0x16c);
          }
          else {
            *(undefined4 *)(local_90[local_90[0]] + 0x168 + (uint)local_92 * 4) =
                 *(undefined4 *)(local_c + 0x16c);
          }
        }
        else {
          local_90[0] = local_90[0] + -1;
          if (local_90[0] == 0) {
            in_ECX[1] = *(int *)(local_c + 0x16c);
          }
          else {
            *(undefined4 *)(local_90[local_90[0]] + 0x168 + (uint)local_92 * 4) =
                 *(undefined4 *)(local_c + 0x168 + (uint)local_92 * 4);
            if (local_92 == true) {
              *(byte *)(local_90[local_90[0]] + 0x170) =
                   *(byte *)(local_90[local_90[0]] + 0x170) | 0x80;
            }
          }
        }
      }
      else {
        iVar1 = *(int *)(local_c + 0x168);
        if ((*(byte *)(iVar1 + 0x170) & 0x80) == 0) {
          iVar4 = local_90[0] + -1;
          do {
            local_98 = iVar1;
            local_90[local_90[0] + 1] = local_98;
            local_90[0] = local_90[0] + 1;
            iVar1 = *(int *)(local_98 + 0x16c);
          } while ((*(byte *)(iVar1 + 0x170) & 0x80) == 0);
          if (*(int *)(iVar1 + 0x168) == 0) {
            *(byte *)(local_98 + 0x170) = *(byte *)(local_98 + 0x170) | 0x80;
            *(int *)(local_98 + 0x16c) = iVar1;
          }
          else {
            *(undefined4 *)(local_98 + 0x16c) = *(undefined4 *)(iVar1 + 0x168);
          }
          *(undefined4 *)(iVar1 + 0x168) = *(undefined4 *)(local_c + 0x168);
          *(undefined4 *)(iVar1 + 0x16c) = *(undefined4 *)(local_c + 0x16c);
          *(undefined1 *)(iVar1 + 0x170) = *(undefined1 *)(local_c + 0x170);
          if (iVar4 == 0) {
            in_ECX[1] = iVar1;
            local_90[1] = iVar1;
          }
          else {
            *(int *)(local_90[iVar4] + 0x168 + (uint)local_92 * 4) = iVar1;
            local_90[iVar5] = iVar1;
          }
        }
        else {
          *(undefined4 *)(iVar1 + 0x16c) = *(undefined4 *)(local_c + 0x16c);
          *(undefined1 *)(iVar1 + 0x170) = *(undefined1 *)(local_c + 0x170);
          local_90[0] = local_90[0] + -1;
          if (local_90[0] == 0) {
            in_ECX[1] = iVar1;
          }
          else {
            *(int *)(local_90[local_90[0]] + 0x168 + (uint)local_92 * 4) = iVar1;
            local_90[iVar5] = iVar1;
            local_90[0] = iVar5;
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
          local_92 = *(int *)(local_90[local_90[0]] + 0x16c) == local_a4;
        }
        if (((((*(int *)(local_a4 + 0x168) == 0) &&
              (uVar7 = *(byte *)(local_a4 + 0x170) & 0x7f, uVar7 != 1 && -1 < (int)(uVar7 - 1))) ||
             ((*(int *)(local_a4 + 0x168) != 0 &&
              ((int)(*(byte *)(*(int *)(local_a4 + 0x168) + 0x170) & 0x7f) <
               (int)((*(byte *)(local_a4 + 0x170) & 0x7f) - 1))))) ||
            ((((*(byte *)(local_a4 + 0x170) & 0x80) == 0 && (*(int *)(local_a4 + 0x16c) == 0)) &&
             (uVar7 = *(byte *)(local_a4 + 0x170) & 0x7f, uVar7 != 1 && -1 < (int)(uVar7 - 1))))) ||
           ((((*(byte *)(local_a4 + 0x170) & 0x80) == 0 && (*(int *)(local_a4 + 0x16c) != 0)) &&
            ((int)(*(byte *)(*(int *)(local_a4 + 0x16c) + 0x170) & 0x7f) <
             (int)((*(byte *)(local_a4 + 0x170) & 0x7f) - 1))))) {
          *(char *)(local_a4 + 0x170) = *(char *)(local_a4 + 0x170) + -1;
          if (((*(int *)(local_a4 + 0x16c) != 0) && ((*(byte *)(local_a4 + 0x170) & 0x80) == 0)) &&
             ((*(byte *)(local_a4 + 0x170) & 0x7f) <
              (*(byte *)(*(int *)(local_a4 + 0x16c) + 0x170) & 0x7f))) {
            *(byte *)(*(int *)(local_a4 + 0x16c) + 0x170) =
                 *(byte *)(*(int *)(local_a4 + 0x16c) + 0x170) & 0x80 |
                 *(byte *)(local_a4 + 0x170) & 0x7f;
          }
          iVar5 = FUN_00527de0(local_a4);
          if ((*(int *)(iVar5 + 0x16c) != 0) && ((*(byte *)(iVar5 + 0x170) & 0x80) == 0)) {
            uVar6 = FUN_00527de0(*(undefined4 *)(iVar5 + 0x16c));
            *(undefined4 *)(iVar5 + 0x16c) = uVar6;
          }
          if ((((*(int *)(iVar5 + 0x16c) != 0) && (*(int *)(*(int *)(iVar5 + 0x16c) + 0x16c) != 0))
              && ((*(byte *)(iVar5 + 0x170) & 0x80) == 0)) &&
             ((*(byte *)(*(int *)(iVar5 + 0x16c) + 0x170) & 0x80) == 0)) {
            uVar6 = FUN_00527de0(*(undefined4 *)(*(int *)(iVar5 + 0x16c) + 0x16c));
            *(undefined4 *)(*(int *)(iVar5 + 0x16c) + 0x16c) = uVar6;
          }
          local_a4 = FUN_00527eb0(iVar5);
          if ((*(int *)(local_a4 + 0x16c) != 0) && ((*(byte *)(local_a4 + 0x170) & 0x80) == 0)) {
            uVar6 = FUN_00527eb0(*(undefined4 *)(local_a4 + 0x16c));
            *(undefined4 *)(local_a4 + 0x16c) = uVar6;
          }
        }
        if (local_90[0] == 0) {
          in_ECX[1] = local_a4;
        }
        else {
          *(int *)(local_90[local_90[0]] + 0x168 + (uint)local_92 * 4) = local_a4;
        }
      }
    }
  }
  return local_8;
}

