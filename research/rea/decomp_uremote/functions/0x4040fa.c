// rea decompile_all
// name: FUN_004040fa
// address: 0x4040fa
// body: available
// range: 0x4040fa-0x40422b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004040fa(short *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  int *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar1 = in_EAX * 0x1c + 0x2c + (int)param_1;
  param_1 = *(short **)(iVar1 + 0x14);
  puVar2 = (undefined4 *)(in_EAX * 0x154 + 0x28 + in_ECX);
  uVar3 = *puVar2;
  psVar8 = param_1 + *(int *)(iVar1 + 0xc) * 0x18;
  local_c = FUN_00401000(*(uint *)(in_ECX + 0x24) / 0x28,uVar3);
  if (0x20 < local_c) {
    local_c = 0x20;
  }
  for (; param_1 < psVar8; param_1 = param_1 + 0x18) {
    local_1c = (int *)0x0;
    local_18 = local_c;
    local_14 = 0;
    if (puVar2[0x36] != 0) {
      piVar5 = puVar2 + 0x3a;
      do {
        if (((piVar5[3] & 1U) != 0) &&
           (((int)*(char *)((int)param_1 + 0xd) == *(int *)(iVar1 + 0x18)) !=
            ((piVar5[3] & 6U) != 0))) {
          iVar4 = (int)*param_1;
          local_10 = iVar4 - piVar5[-3];
          if (local_10 < 0) {
            local_10 = piVar5[-3] - iVar4;
          }
          iVar6 = iVar4 - *piVar5;
          if (iVar6 < 0) {
            iVar6 = *piVar5 - iVar4;
          }
          piVar7 = piVar5;
          if (local_10 <= iVar6) {
            piVar7 = piVar5 + -3;
          }
          iVar4 = iVar4 - *piVar7;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          iVar4 = FUN_00401000(iVar4,uVar3);
          if (iVar4 < local_18) {
            local_1c = piVar7;
            local_18 = iVar4;
          }
        }
        local_14 = local_14 + 1;
        piVar5 = piVar5 + 7;
      } while (local_14 < (uint)puVar2[0x36]);
      if (local_1c != (int *)0x0) {
        *(int **)(param_1 + 10) = local_1c;
      }
    }
  }
  return;
}

