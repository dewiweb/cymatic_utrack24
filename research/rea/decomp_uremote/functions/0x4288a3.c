// rea decompile_all
// name: FUN_004288a3
// address: 0x4288a3
// body: available
// range: 0x4288a3-0x4289bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004288a3(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_54 [17];
  uint local_10;
  int local_c;
  char local_7;
  char local_6;
  char local_5;
  
  _memset(local_54,0,0x44);
  local_5 = '\0';
  local_6 = '\0';
  local_7 = '\0';
  local_10 = 0;
  uVar1 = 0;
  do {
    if (*(ushort *)(in_EAX + 0x98) <= (ushort)uVar1) {
      piVar3 = local_54;
      piVar5 = &DAT_0090bb5c;
      while( true ) {
        if ((local_5 == '\0') && (piVar5[-2] == 0)) {
          *piVar3 = *piVar3 + 1;
        }
        if ((local_6 == '\0') && (*piVar5 == 0)) {
          *piVar3 = *piVar3 + 1;
        }
        if ((local_7 == '\0') && (piVar5[2] == 0)) {
          *piVar3 = *piVar3 + 1;
        }
        if (*piVar3 == 3) break;
        piVar5 = piVar5 + 6;
        piVar3 = piVar3 + 1;
        if (0x90bcf3 < (int)piVar5) {
          return 0;
        }
      }
      return 1;
    }
    iVar6 = (local_10 & 0xffff) * 0x10;
    iVar4 = *(int *)(iVar6 + *(int *)(in_EAX + 0x9c));
    iVar2 = 0;
    if (iVar4 == 0x63767420) {
      iVar4 = 0;
      local_5 = '\x01';
LAB_00428916:
      local_c = 0;
      piVar3 = (int *)(&DAT_0090bb50 + iVar4 * 8);
      do {
        if (*(int *)(*(int *)(in_EAX + 0x9c) + 0xc + iVar6) == piVar3[1]) {
          if (iVar2 == 0) {
            iVar2 = FUN_00428860();
          }
          if (*piVar3 == iVar2) {
            local_54[local_c] = local_54[local_c] + 1;
          }
          if (local_54[local_c] == 3) {
            return 1;
          }
        }
        local_c = local_c + 1;
        piVar3 = piVar3 + 6;
      } while (local_c < 0x11);
    }
    else {
      if (iVar4 == 0x6670676d) {
        iVar4 = 1;
        local_6 = '\x01';
        goto LAB_00428916;
      }
      if (iVar4 == 0x70726570) {
        iVar4 = 2;
        local_7 = '\x01';
        goto LAB_00428916;
      }
    }
    local_10 = local_10 + 1;
    uVar1 = local_10 & 0xffff;
  } while( true );
}

