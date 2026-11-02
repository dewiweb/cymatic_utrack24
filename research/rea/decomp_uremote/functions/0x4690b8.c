// rea decompile_all
// name: FUN_004690b8
// address: 0x4690b8
// body: available
// range: 0x4690b8-0x4691fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_004690b8(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  char *pcVar4;
  char *pcVar6;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_6;
  char local_5;
  char *pcVar5;
  
  local_c = *(uint *)(in_ECX + 0x7c);
  uVar1 = *(uint *)(in_ECX + 0x6c);
  pcVar3 = (char *)(*(int *)(in_ECX + 0x38) + uVar1);
  pcVar2 = *(char **)(in_ECX + 0x78);
  if (*(int *)(in_ECX + 0x2c) - 0x106U < uVar1) {
    local_14 = (uVar1 - *(int *)(in_ECX + 0x2c)) + 0x106;
  }
  else {
    local_14 = 0;
  }
  local_5 = pcVar3[(int)(pcVar2 + -1)];
  local_6 = pcVar3[(int)pcVar2];
  if (*(char **)(in_ECX + 0x8c) <= pcVar2) {
    local_c = local_c >> 2;
  }
  local_10 = *(uint *)(in_ECX + 0x90);
  if (*(uint *)(in_ECX + 0x74) < *(uint *)(in_ECX + 0x90)) {
    local_10 = *(uint *)(in_ECX + 0x74);
  }
  do {
    pcVar6 = (char *)(*(int *)(in_ECX + 0x38) + param_1);
    if ((((pcVar6[(int)pcVar2] == local_6) && (pcVar6[(int)(pcVar2 + -1)] == local_5)) &&
        (*pcVar6 == *pcVar3)) && (pcVar6[1] == pcVar3[1])) {
      pcVar6 = pcVar6 + 2;
      pcVar5 = pcVar3 + 2;
      while (((((pcVar4 = pcVar5 + 1, *pcVar4 == pcVar6[1] &&
                (pcVar4 = pcVar5 + 2, *pcVar4 == pcVar6[2])) &&
               ((pcVar4 = pcVar5 + 3, *pcVar4 == pcVar6[3] &&
                ((pcVar4 = pcVar5 + 4, *pcVar4 == pcVar6[4] &&
                 (pcVar4 = pcVar5 + 5, *pcVar4 == pcVar6[5])))))) &&
              (pcVar4 = pcVar5 + 6, *pcVar4 == pcVar6[6])) &&
             (pcVar4 = pcVar5 + 7, *pcVar4 == pcVar6[7]))) {
        pcVar4 = pcVar5 + 8;
        pcVar6 = pcVar6 + 8;
        if ((*pcVar4 != *pcVar6) || (pcVar5 = pcVar4, pcVar3 + 0x102 <= pcVar4)) break;
      }
      pcVar4 = pcVar4 + (0x102 - (int)(pcVar3 + 0x102));
      if ((int)pcVar2 < (int)pcVar4) {
        *(uint *)(in_ECX + 0x70) = param_1;
        if ((int)local_10 <= (int)pcVar4) {
LAB_004691ef:
          pcVar2 = *(char **)(in_ECX + 0x74);
          if (pcVar4 <= *(char **)(in_ECX + 0x74)) {
            pcVar2 = pcVar4;
          }
          return pcVar2;
        }
        local_5 = (pcVar3 + (int)pcVar4)[-1];
        local_6 = pcVar3[(int)pcVar4];
        pcVar2 = pcVar4;
      }
    }
    pcVar4 = pcVar2;
    param_1 = (uint)*(ushort *)(*(int *)(in_ECX + 0x40) + (*(uint *)(in_ECX + 0x34) & param_1) * 2);
    if ((param_1 <= local_14) || (local_c = local_c - 1, pcVar2 = pcVar4, local_c == 0))
    goto LAB_004691ef;
  } while( true );
}

