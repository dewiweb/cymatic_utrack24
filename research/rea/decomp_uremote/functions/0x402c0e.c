// rea decompile_all
// name: FUN_00402c0e
// address: 0x402c0e
// body: available
// range: 0x402c0e-0x402d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00402c0e(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  int local_1c;
  int *local_18;
  int local_c;
  
  psVar5 = *(short **)(param_1 + 0x5c);
  uVar1 = *(undefined4 *)(param_2 + 0x1b4);
  psVar4 = psVar5 + *(int *)(param_1 + 0x54) * 0x18;
  for (; psVar5 < psVar4; psVar5 = psVar5 + 0x18) {
    local_18 = (int *)0x0;
    local_c = FUN_00401000(*(uint *)(param_2 + 0x24) / 0x28,uVar1);
    if (0x20 < local_c) {
      local_c = 0x20;
    }
    piVar6 = (int *)(param_2 + 0x29c);
    local_1c = 6;
    do {
      if (((piVar6[3] & 1U) != 0) &&
         (bVar2 = (bool)((byte)((uint)piVar6[3] >> 1) & 1),
         ((int)*(char *)((int)psVar5 + 0xd) == *(int *)(param_1 + 0x60)) != bVar2)) {
        piVar7 = piVar6 + -3;
        iVar3 = (int)*psVar5 - *piVar7;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        iVar3 = FUN_00401000(iVar3,uVar1);
        if (iVar3 < local_c) {
          local_18 = piVar7;
          local_c = iVar3;
        }
        if ((((*(byte *)(psVar5 + 6) & 1) != 0) && (iVar3 != 0)) &&
           ((int)*psVar5 < *piVar7 != bVar2)) {
          iVar3 = (int)*psVar5 - *piVar6;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          iVar3 = FUN_00401000(iVar3,uVar1);
          if (iVar3 < local_c) {
            local_18 = piVar6;
            local_c = iVar3;
          }
        }
      }
      piVar6 = piVar6 + 7;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    if (local_18 != (int *)0x0) {
      *(int **)(psVar5 + 10) = local_18;
    }
  }
  return;
}

