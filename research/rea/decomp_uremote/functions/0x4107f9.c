// rea decompile_all
// name: FUN_004107f9
// address: 0x4107f9
// body: available
// range: 0x4107f9-0x41089e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004107f9(void)

{
  int iVar1;
  int iVar2;
  short *in_EAX;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_20;
  int local_1c;
  int local_14;
  int local_c;
  
  iVar7 = 0;
  local_20 = 0;
  if ((in_EAX == (short *)0x0) || (in_EAX[1] < 1)) {
LAB_00410896:
    uVar5 = 0;
  }
  else {
    local_14 = (int)*in_EAX;
    iVar1 = *(int *)(in_EAX + 2);
    if (0 < local_14) {
      psVar3 = *(short **)(in_EAX + 6);
      do {
        iVar6 = (int)*psVar3;
        local_c = *(int *)(iVar1 + 4 + iVar6 * 8);
        if (iVar7 <= iVar6) {
          local_1c = (iVar6 - iVar7) + 1;
          piVar4 = (int *)(iVar1 + iVar7 * 8);
          iVar7 = *(int *)(iVar1 + iVar6 * 8);
          do {
            iVar2 = *piVar4;
            iVar8 = piVar4[1] - local_c;
            local_c = piVar4[1];
            local_20 = local_20 + (iVar7 + iVar2) * iVar8;
            piVar4 = piVar4 + 2;
            local_1c = local_1c + -1;
            iVar7 = iVar2;
          } while (local_1c != 0);
        }
        psVar3 = psVar3 + 1;
        local_14 = local_14 + -1;
        iVar7 = iVar6 + 1;
      } while (local_14 != 0);
      if (0 < local_20) {
        return 1;
      }
      if (local_20 < 0) goto LAB_00410896;
    }
    uVar5 = 2;
  }
  return uVar5;
}

