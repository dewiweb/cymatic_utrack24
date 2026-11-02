// rea decompile_all
// name: FUN_00423bac
// address: 0x423bac
// body: available
// range: 0x423bac-0x423d98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423bac(short param_1,undefined4 *param_2)

{
  short sVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  short *psVar6;
  short *psVar7;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  code *local_10;
  short *local_c;
  bool local_5;
  
  uVar5 = *(undefined4 *)(in_ECX + 100);
  local_14 = 0;
  local_5 = false;
  psVar7 = *(short **)(in_ECX + 0x168);
  local_24 = -1;
  local_1c = -1;
  local_18 = -1;
  local_28 = -1;
  psVar6 = psVar7;
  if (*(ushort *)(in_ECX + 0x158) != 0) {
    local_c = (short *)(uint)*(ushort *)(in_ECX + 0x158);
    local_10 = (code *)0x0;
    do {
      pcVar2 = (code *)local_28;
      pcVar3 = (code *)local_1c;
      if (((psVar6[3] == param_1) && (psVar6[4] != 0)) &&
         (sVar1 = *psVar6, pcVar2 = local_10, sVar1 != 0)) {
        if (sVar1 == 1) {
          pcVar2 = (code *)local_28;
          pcVar3 = local_10;
          if ((psVar6[2] != 0) && (pcVar3 = (code *)local_1c, psVar6[1] == 0)) {
            local_24 = (int)local_10;
          }
        }
        else {
          pcVar2 = local_10;
          if ((((sVar1 != 2) && (pcVar2 = (code *)local_28, sVar1 == 3)) &&
              ((local_18 == -1 || ((psVar6[2] & 0x3ffU) == 9)))) &&
             (((ushort)psVar6[1] < 2 || (psVar6[1] == 10)))) {
            local_5 = (psVar6[2] & 0x3ffU) == 9;
            local_18 = (int)local_10;
          }
        }
      }
      local_1c = (int)pcVar3;
      local_28 = (int)pcVar2;
      local_10 = (code *)((int)local_10 + 1);
      psVar6 = psVar6 + 10;
      local_c = (short *)((int)local_c - 1);
    } while (local_c != (short *)0x0);
  }
  if (-1 < local_1c) {
    local_24 = local_1c;
  }
  local_10 = (code *)0x0;
  if ((local_18 < 0) || ((-1 < local_24 && (local_5 == false)))) {
    if (local_24 < 0) {
      local_c = psVar6;
      if (-1 < local_28) {
        local_c = psVar7 + local_28 * 10;
        goto LAB_00423cf4;
      }
    }
    else {
      local_c = psVar7 + local_24 * 10;
      local_10 = FUN_00423b50;
    }
  }
  else {
    local_c = psVar7 + local_18 * 10;
    if (((ushort)local_c[1] < 2) || (local_c[1] == 10)) {
LAB_00423cf4:
      local_10 = FUN_00423ae4;
    }
  }
  psVar7 = local_c;
  if ((local_c == (short *)0x0) || (local_10 == (code *)0x0)) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(local_c + 8) == 0) {
      uVar4 = FUN_00411976(1,0,&local_14);
      *(undefined4 *)(psVar7 + 8) = uVar4;
      if (((local_14 != 0) || (local_14 = FUN_0041106d(), psVar7 = local_c, local_14 != 0)) ||
         (local_14 = FUN_004110b4(*(undefined4 *)(local_c + 8),local_c[4]), psVar7 = local_c,
         local_14 != 0)) {
        FUN_00411a5c(*(undefined4 *)(psVar7 + 8));
        psVar7[8] = 0;
        psVar7[9] = 0;
        uVar5 = 0;
        psVar7[4] = 0;
        goto LAB_00423d8c;
      }
    }
    uVar5 = (*local_10)(local_c,uVar5);
  }
LAB_00423d8c:
  *param_2 = uVar5;
  return local_14;
}

