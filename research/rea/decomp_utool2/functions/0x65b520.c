// rea decompile_all
// name: FUN_0065b520
// address: 0x65b520
// body: available
// range: 0x65b520-0x65b68a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0065b520(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_10;
  int local_c;
  
  iVar4 = 1;
  if (param_2 < 2) {
    return 1;
  }
  local_10 = (int *)(in_EDX + 0x2c);
  local_c = 2;
  while( true ) {
    iVar6 = 0;
    piVar5 = (int *)0x0;
    if (param_2 < local_c) {
      if (0 < iVar4) {
        piVar1 = (int *)(in_EDX + 0x18);
        iVar3 = iVar4;
        do {
          if (iVar6 < *piVar1) {
            piVar5 = piVar1 + -6;
            iVar6 = *piVar1;
          }
          piVar1 = piVar1 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if (0 < iVar4) {
      piVar1 = (int *)(in_EDX + 0x1c);
      iVar3 = iVar4;
      do {
        if ((iVar6 < *piVar1) && (0 < piVar1[-1])) {
          piVar5 = piVar1 + -7;
          iVar6 = *piVar1;
        }
        piVar1 = piVar1 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (piVar5 == (int *)0x0) break;
    local_10[-2] = piVar5[1];
    *local_10 = piVar5[3];
    local_10[2] = piVar5[5];
    local_10[-3] = *piVar5;
    local_10[-1] = piVar5[2];
    local_10[1] = piVar5[4];
    iVar6 = (piVar5[1] - *piVar5) * 0x10;
    iVar3 = (piVar5[3] - piVar5[2]) * 0xc;
    cVar2 = iVar6 <= iVar3;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    if (iVar6 < (piVar5[5] - piVar5[4]) * 8) {
      cVar2 = '\x02';
    }
    if (cVar2 == '\0') {
      iVar6 = (piVar5[1] + *piVar5) / 2;
      piVar5[1] = iVar6;
      local_10[-3] = iVar6 + 1;
    }
    else if (cVar2 == '\x01') {
      iVar6 = (piVar5[3] + piVar5[2]) / 2;
      piVar5[3] = iVar6;
      local_10[-1] = iVar6 + 1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = (piVar5[5] + piVar5[4]) / 2;
      piVar5[5] = iVar6;
      local_10[1] = iVar6 + 1;
    }
    FUN_0065b690();
    FUN_0065b690();
    iVar4 = iVar4 + 1;
    local_c = local_c + 2;
    local_10 = local_10 + 8;
    if (param_2 <= iVar4) {
      return iVar4;
    }
  }
  return iVar4;
}

