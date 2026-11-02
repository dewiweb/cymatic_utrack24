// rea decompile_all
// name: FUN_0041d067
// address: 0x41d067
// body: available
// range: 0x41d067-0x41d14d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d067(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint *unaff_EBX;
  uint local_8;
  
  local_8 = 0;
  if (unaff_EBX[1] != 0) {
    do {
      piVar6 = (int *)(unaff_EBX[3] + local_8 * 8);
      piVar4 = (int *)*piVar6;
      piVar3 = piVar4;
      if (piVar6[1] != 0) {
        do {
          piVar3 = (int *)*piVar3;
          if (piVar3 == piVar4) goto LAB_0041d145;
        } while (piVar3[9] == piVar4[9]);
        piVar6 = (int *)piVar3[1];
        piVar4 = piVar6;
        piVar2 = piVar6;
        while (piVar4 = (int *)piVar4[1], piVar4 != piVar6) {
          if (piVar4[9] != piVar2[9]) {
            iVar1 = piVar2[9];
            if (*(int *)((int)piVar3 + 0x24) < iVar1) {
              if (piVar4[9] < iVar1) {
LAB_0041d0c6:
                do {
                  piVar2[4] = piVar2[4] | 0x40;
                  piVar2 = (int *)piVar2[1];
                } while (piVar2 != piVar4);
              }
            }
            else if (iVar1 < piVar4[9]) goto LAB_0041d0c6;
            piVar3 = (int *)*piVar4;
            piVar2 = piVar4;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < unaff_EBX[1]);
  }
  local_8 = 0;
  do {
    if (*unaff_EBX <= local_8) {
      return;
    }
    piVar3 = (int *)(local_8 * 0x30 + unaff_EBX[2]);
    uVar5 = piVar3[4];
    piVar6 = piVar3;
    piVar4 = piVar3;
    if ((uVar5 & 0x40) != 0) {
      do {
        piVar6 = (int *)*piVar6;
        if (piVar6 == piVar3) goto LAB_0041d145;
      } while (piVar6[10] == piVar3[10]);
      do {
        piVar4 = (int *)piVar4[1];
        if (piVar4 == piVar3) goto LAB_0041d145;
      } while (piVar4[10] == piVar3[10]);
    }
    iVar1 = piVar3[10];
    if ((piVar6[10] < iVar1) && (iVar1 < piVar4[10])) {
      uVar5 = uVar5 | 0x80;
LAB_0041d142:
      piVar3[4] = uVar5;
    }
    else if ((iVar1 < piVar6[10]) && (piVar4[10] < iVar1)) {
      uVar5 = uVar5 | 0x100;
      goto LAB_0041d142;
    }
LAB_0041d145:
    local_8 = local_8 + 1;
  } while( true );
}

