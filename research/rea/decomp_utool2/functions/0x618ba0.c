// rea decompile_all
// name: FUN_00618ba0
// address: 0x618ba0
// body: available
// range: 0x618ba0-0x618d20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00618ba0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int in_ECX;
  uint in_EDX;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_1c;
  uint local_10;
  char local_6;
  char local_5;
  
  local_10 = *(uint *)(in_ECX + 0x7c);
  pcVar8 = *(char **)(in_ECX + 0x78);
  pcVar1 = (char *)(*(int *)(in_ECX + 0x6c) + *(int *)(in_ECX + 0x38));
  if (*(int *)(in_ECX + 0x2c) - 0x106U < *(uint *)(in_ECX + 0x6c)) {
    local_1c = (*(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x2c)) + 0x106;
  }
  else {
    local_1c = 0;
  }
  pcVar7 = pcVar1 + 0x102;
  local_5 = pcVar1[(int)(pcVar8 + -1)];
  local_6 = pcVar1[(int)pcVar8];
  if (*(char **)(in_ECX + 0x8c) <= pcVar8) {
    local_10 = *(uint *)(in_ECX + 0x7c) >> 2;
  }
  pcVar4 = *(char **)(in_ECX + 0x74);
  pcVar5 = *(char **)(in_ECX + 0x90);
  if (pcVar4 < *(char **)(in_ECX + 0x90)) {
    pcVar5 = pcVar4;
  }
  do {
    pcVar6 = (char *)(*(int *)(in_ECX + 0x38) + in_EDX);
    if ((((pcVar6[(int)pcVar8] == local_6) && (pcVar6[(int)(pcVar8 + -1)] == local_5)) &&
        (*pcVar6 == *pcVar1)) && (pcVar6[1] == pcVar1[1])) {
      pcVar6 = pcVar6 + 2;
      pcVar2 = pcVar1 + 2;
      while (((((pcVar3 = pcVar2 + 1, pcVar2[1] == pcVar6[1] &&
                (pcVar3 = pcVar2 + 2, pcVar2[2] == pcVar6[2])) &&
               ((pcVar3 = pcVar2 + 3, pcVar2[3] == pcVar6[3] &&
                ((pcVar3 = pcVar2 + 4, pcVar2[4] == pcVar6[4] &&
                 (pcVar3 = pcVar2 + 5, pcVar2[5] == pcVar6[5])))))) &&
              (pcVar3 = pcVar2 + 6, pcVar2[6] == pcVar6[6])) &&
             (pcVar3 = pcVar2 + 7, pcVar2[7] == pcVar6[7]))) {
        pcVar3 = pcVar2 + 8;
        pcVar6 = pcVar6 + 8;
        if ((pcVar2[8] != *pcVar6) || (pcVar2 = pcVar3, pcVar7 <= pcVar3)) break;
      }
      pcVar6 = pcVar3 + (0x102 - (int)pcVar7);
      if ((int)pcVar8 < (int)pcVar6) {
        *(uint *)(in_ECX + 0x70) = in_EDX;
        if ((int)pcVar5 <= (int)pcVar6) {
LAB_00618d12:
          if (pcVar6 <= pcVar4) {
            pcVar4 = pcVar6;
          }
          return pcVar4;
        }
        local_5 = pcVar1[(int)(pcVar3 + (0x101 - (int)pcVar7))];
        local_6 = pcVar1[(int)pcVar6];
        pcVar8 = pcVar6;
      }
    }
    pcVar6 = pcVar8;
    in_EDX = (uint)*(ushort *)(*(int *)(in_ECX + 0x40) + (*(uint *)(in_ECX + 0x34) & in_EDX) * 2);
    if ((in_EDX <= local_1c) || (local_10 = local_10 - 1, pcVar8 = pcVar6, local_10 == 0))
    goto LAB_00618d12;
  } while( true );
}

